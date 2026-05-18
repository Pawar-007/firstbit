function showSection(id, btn) {
  // switch sections
  let sections = document.querySelectorAll(".section");

  sections.forEach(sec => {
    sec.classList.remove("active");
  });

  document.getElementById(id).classList.add("active");

  // remove active class from all buttons
  let buttons = document.querySelectorAll(".sidebar button");

  buttons.forEach(b => {
    b.classList.remove("active");
  });

  // add active to clicked button
  btn.classList.add("active");
}