/* =====================================================
   app.js — Student Dashboard (JavaScript Logic)
   =====================================================

   YE FILE SEEKHNE KE LIYE HAI — COMMENTS PADHO!

   Concepts covered:
   1. querySelector / querySelectorAll
   2. DOM content change (textContent, innerHTML, classList)
   3. Event Listeners (click, keydown, change)
   4. Functions (normal + arrow)
   5. Arrays & Objects
   6. Template Literals
   7. Conditional Logic (if/else)
   8. Dynamic element creation (createElement, appendChild)

   ===================================================== */


/* ======================================================
   SECTION 1: querySelector — Elements ko pakadna
   querySelector returns PEHLA matching element
   querySelectorAll returns SABHI matching elements (NodeList)
   ====================================================== */

const greetingEl       = document.querySelector('#greeting');
const themeToggleBtn   = document.querySelector('#themeToggleBtn');

const studentNameEl    = document.querySelector('#studentName');
const studentClassEl   = document.querySelector('#studentClass');

const editProfileBtn   = document.querySelector('#editProfileBtn');
const editModal        = document.querySelector('#editModal');
const inputName        = document.querySelector('#inputName');
const inputClass       = document.querySelector('#inputClass');
const saveProfileBtn   = document.querySelector('#saveProfileBtn');
const closeModalBtn    = document.querySelector('#closeModalBtn');

const subjectsContainer = document.querySelector('#subjectsContainer');

const todoInput        = document.querySelector('#todoInput');
const addTodoBtn       = document.querySelector('#addTodoBtn');
const todoList         = document.querySelector('#todoList');
const emptyMsg         = document.querySelector('#emptyMsg');
const tasksVal         = document.querySelector('#tasksVal');

const noticeContainer  = document.querySelector('#noticeContainer');
const clearNoticesBtn  = document.querySelector('#clearNoticesBtn');

const quoteText        = document.querySelector('#quoteText');
const newQuoteBtn      = document.querySelector('#newQuoteBtn');

const attendanceVal    = document.querySelector('#attendanceVal');
const marksVal         = document.querySelector('#marksVal');
const streakVal        = document.querySelector('#streakVal');


/* ======================================================
   SECTION 2: Data (Arrays & Objects)
   ====================================================== */

// Subject data — ek array of objects
let subjects = [
  { name: 'Math',     percent: 88, color: '#4f46e5' },
  { name: 'Science',  percent: 72, color: '#10b981' },
  { name: 'English',  percent: 65, color: '#f59e0b' },
  { name: 'Hindi',    percent: 91, color: '#ef4444' },
  { name: 'History',  percent: 55, color: '#8b5cf6' },
];

function addSub(){
  let sub=prompt("enter subject");
  let percentage=prompt("Enter percentage");
  let data={name:sub,percentage:percentage,color:'#8b5cf6'}
  subjects.push(data);
  renderSubjects();
}
// Motivational quotes — array of strings
const quotes = [
  '"Mehnat karo, result zaroor milega."',
  '"Har roz ek naya mauka hai kuch naya seekhne ka."',
  '"Padhai ka koi shortcut nahi hota."',
  '"Sapne wo nahi jo so ke dekho, sapne wo hain jo sone na den."',
  '"Consistency hi sabse badi skill hai."',
  '"Ek din mein nahi hoga, lekin har din karo zaroor."',
  '"Mushkil waqt hi tujhe strong banata hai."',
];

// Completed tasks counter
let tasksDoneCount = 0;


/* ======================================================
   SECTION 3: Page Load pe kaam
   ====================================================== */

// Time ke hisaab se greeting
//let nameOfStudent=prompt("Enter Name of Student");
function setGreeting() {
  let hour = new Date().getHours();
  let msg = '';
  if (hour < 12)       msg = 'Suprabhat 🌅';
  else if (hour < 17)  msg = 'Namaskar 🌤️';
  else                 msg = 'Shubh Sandhya 🌙';
  // DOM change: textContent se text badalna
  greetingEl.textContent = `${msg}, "sdhjcd! 👋`;
}

setGreeting();

// Subjects progress bars banana (dynamic DOM creation)
function renderSubjects() {
  subjectsContainer.innerHTML = ''; // pehle khali karo

  subjects.forEach(function(sub) {
    // Naya HTML element banana
    const row = document.createElement('div');
    row.classList.add('subject-row');

    // Template literal se HTML banana
    row.innerHTML = `
      <span class="subject-name">${sub.name}</span>
      <div class="progress-bar-bg">
        <div class="progress-bar-fill" style="width: 0%; background: ${sub.color};" data-pct="${sub.percent}"></div>
      </div>
      <span class="subject-pct">${sub.percent}%</span>
    `;

    subjectsContainer.appendChild(row); // DOM mein add karo
  });

  // Thodi der baad animate karo (CSS transition ke saath)
  setTimeout(function() {
    const fills = document.querySelectorAll('.progress-bar-fill');
    fills.forEach(function(fill) {
      fill.style.width = fill.dataset.pct + '%';
    });
  }, 300);
}

renderSubjects(); 


/* ======================================================
   SECTION 4: Dark Mode Toggle
   Event Listener: 'click'
   classList.toggle — ek class add/remove karna
   ====================================================== */

themeToggleBtn.addEventListener('click', function() {
  // document.body ki class toggle karo
  document.body.classList.toggle('dark');

  // Button ka text badlo
  if (document.body.classList.contains('dark')) {
    themeToggleBtn.textContent = '☀️ Light Mode';
  } else {
    themeToggleBtn.textContent = '🌙 Dark Mode';
  }
});


/* ======================================================
   SECTION 5: Profile Edit — Modal
   Events: click (open), click (save), click (close)
   DOM change: textContent se naam/class badalna
   ====================================================== */

// Modal kholna
editProfileBtn.addEventListener('click', function() {
  // Input mein current values daalo
  inputName.value  = studentNameEl.textContent;
  inputClass.value = studentClassEl.textContent.replace('Class: ', '');

  // 'hidden' class hatao → modal dikhega
  editModal.classList.remove('hidden');
});

// Save karna
saveProfileBtn.addEventListener('click', function() {
  const newName  = inputName.value.trim();
  const newClass = inputClass.value.trim();

  if (newName === '') {
    alert('Naam khali nahi chhod sakte! 🙏');
    return; // function rok do
  }

  // DOM update karo
  studentNameEl.textContent  = newName;
  studentClassEl.textContent = 'Class: ' + newClass;

  // Modal band karo
  editModal.classList.add('hidden');
});

// Cancel / Close karna
closeModalBtn.addEventListener('click', function() {
  editModal.classList.add('hidden');
});

// Modal ke bahar click karo to band ho
editModal.addEventListener('click', function(event) {
  // event.target = jis element pe click hua
  if (event.target === editModal) {
    editModal.classList.add('hidden');
  }
});


/* ======================================================
   SECTION 6: To-Do List
   Events: click (add button), keydown (Enter key)
   Dynamic element creation, appendChild
   ====================================================== */

function addTask() {
  const text = todoInput.value.trim();

  if (text === '') {
    // Input ko shake karo (CSS class)
    todoInput.style.border = '2px solid red';
    setTimeout(() => todoInput.style.border = '', 1500);
    return;
  }

  // Empty message chhupao
  emptyMsg.style.display = 'none';

  // Naya list item (li) banana
  const li = document.createElement('li');
  li.classList.add('todo-item');

  li.innerHTML = `
    <input type="checkbox" class="todo-check" />
    <span class="todo-text">${text}</span>
    <button class="todo-delete" title="Delete">🗑️</button>
  `;

  // Checkbox event
  const checkbox = li.querySelector('.todo-check');
  checkbox.addEventListener('change', function() {
    if (checkbox.checked) {
      li.classList.add('done');
      tasksDoneCount++;
    } else {
      li.classList.remove('done');
      tasksDoneCount = Math.max(0, tasksDoneCount - 1);
    }
    // Stats update karo
    tasksVal.textContent = tasksDoneCount;
  });

  // Delete button event
  const deleteBtn = li.querySelector('.todo-delete');
  deleteBtn.addEventListener('click', function() {
    li.style.opacity = '0';
    setTimeout(() => {
      li.remove();
      // Agar koi task nahi bachi
      if (todoList.children.length === 0) {
        emptyMsg.style.display = 'block';
      }
    }, 300);
  });

  todoList.appendChild(li);
  todoInput.value = ''; // input khali karo
}

// Button click se task add
addTodoBtn.addEventListener('click', addTask);

// Enter key dabane pe bhi task add ho
todoInput.addEventListener('keydown', function(event) {
  // event.key = kon si key dabayi
  if (event.key === 'Enter') {
    addTask();
  }
});


/* ======================================================
   SECTION 7: Notice Board Clear
   Event: click
   innerHTML = '' → sab kuch hatao
   ====================================================== */

clearNoticesBtn.addEventListener('click', function() {
  const confirm = window.confirm('Kya sach mein sabhi notices delete karne hain?');
  if (confirm) {
    noticeContainer.innerHTML = '<p style="color: var(--text-mute); font-size: 0.85rem;">Koi notice nahi hai.</p>';
  }
});


/* ======================================================
   SECTION 8: Motivational Quote — Random
   Event: click
   Math.random(), array indexing
   ====================================================== */

function getRandomQuote() {
  const randomIndex = Math.floor(Math.random() * quotes.length);
  return quotes[randomIndex];
}

newQuoteBtn.addEventListener('click', function() {
  // Fade out → change → fade in
  quoteText.style.opacity = '0';
  setTimeout(function() {
    quoteText.textContent = getRandomQuote();
    quoteText.style.transition = 'opacity 0.4s ease';
    quoteText.style.opacity = '1';
  }, 300);
});


/* ======================================================
   SECTION 9: Stat Cards — Hover effect (extra)
   querySelectorAll → forEach loop
   ====================================================== */

const allStatCards = document.querySelectorAll('.stat-card');

allStatCards.forEach(function(card) {
  card.addEventListener('mouseenter', function() {
    card.style.background = 'var(--primary)';
    card.querySelector('.stat-number').style.color = '#fff';
    card.querySelector('.stat-label').style.color  = 'rgba(255,255,255,0.75)';
  });

  card.addEventListener('mouseleave', function() {
    card.style.background = '';
    card.querySelector('.stat-number').style.color = '';
    card.querySelector('.stat-label').style.color  = '';
  });
});


/* ======================================================

   ===================================================
   📝 ASSIGNMENTS (Tumhare liye Kaam!)
   ===================================================

   ASSIGNMENT 1 (Easy) — querySelector
   ➤ Attendance value change karo:
      attendanceVal.textContent = '90%';
   ➤ Marks value change karo:
      marksVal.textContent = '88/100';
   ➤ Isko ek button se karo — "Update Stats" button banao.

   ASSIGNMENT 2 (Medium) — classList & Style
   ➤ Ek "Highlight All Notices" button banao.
   ➤ Jab click ho, sabhi .notice-item ko
      classList.add('notice-urgent') kar do.
   ➤ Hint: document.querySelectorAll('.notice-item')

   ASSIGNMENT 3 (Medium) — Event Listener
   ➤ Profile pic pe click karo to
      ek prompt box khule aur naya image URL lo,
      phir profilePic.src = newUrl set karo.
   ➤ Hint: document.querySelector('#profilePic')

   ASSIGNMENT 4 (Hard) — Dynamic DOM
   ➤ Subjects array mein ek naya subject add karo
      (e.g. Computer, 78%) — directly array mein push karo
      aur phir renderSubjects() dobara call karo.
   ➤ Ek input + button banao jisse user khud subject
      add kar sake!

   ASSIGNMENT 5 (Hard) — Local Storage
   ➤ To-Do list ko localStorage mein save karo.
   ➤ Page reload ke baad bhi tasks dikhe.
   ➤ Hint: localStorage.setItem(), localStorage.getItem()

   ===================================================
   BONUS CONCEPT — Event Delegation
   ===================================================
   Abhi hum har todo item pe alag listener lagate hain.
   Ek better tarika hai: parent (todoList) pe ek hi
   listener lagao aur event.target se pehchano ki
   kaunsa button click hua.

   todoList.addEventListener('click', function(e) {
     if (e.target.classList.contains('todo-delete')) {
       e.target.closest('li').remove();
     }
   });

   ====================================================== */

console.log('✅ app.js load ho gaya! Student Dashboard ready hai.');

    let x = document.getElementById("attendanceVal");
  let num = parseInt(x.textContent);
  let card = document.getElementById("attendanceStat");
  if(num<75){
    x.style.color="red"
     card.style.border="2px solid red"
  }
  else{
     x.style.color="green"
     card.style.border="2px solid green"
     
  }
