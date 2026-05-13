let obj={
   name:"harshal",
   age:23,
   getname:()=>{
      console.log(obj.name);
      return obj.name
   }
}
obj.name="bhushan"
console.log(obj.getname());