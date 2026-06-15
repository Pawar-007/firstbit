// let pro=new Promise((resolve,reject)=>{
//     if(true){
//       resolve("done");
//     }
//     else{
//       reject("fail");
//     }
// })
// console.log("promis ",pro);

// function greatPeople(success,callBack){
//       if(success){
//          callBack();
//       }
//       else{
//          console.log("fail");
//       }
// }
// greatPeople(false,()=>{
//    console.log("success");
// })

let obj=fetch("https://jsonplaceholder.typicode.com/users");
let data=obj.then(result=>{
   return result.json();
})
.then(res=>{
   console.log(res)
   return res; 
})

console.log(Promise.toString())