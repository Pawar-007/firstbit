class Employee{
   int id;
   double salary;
   String name;

   Employee(){
      this.id=1;
      this.salary=2000;
      this.name="emp";
   }
   Employee(int id,String name,double salary){
       this.id=id;
       this.name=name;
       this.salary=salary;
   }
   void setId(int id) {
      this.id = id;
   }
   
   void setSalary(double salary) {
      this.salary = salary;
   }
   
   void setName(String name){
      this.name=name;
   }
   
   void getId() {
      
      System.out.println(this.id);
   }

   public void getSalary() {
      System.out.println(this.salary);
   }

   void getName() {
      System.out.println(this.name);
   }
   

   void display(){
     System.out.println("Id : "+this.id);
     System.out.println("Name : "+this.name);
     System.out.println("Salary : "+this.salary);
              
   }
   
}
public class Employees {
     
   public static void main(String[] args) {
      /*Employee e1=new Employee();
      e1.setId(10);
      e1.setName("bhushan");
      e1.setSalary(100000);
      e1.getId();
      e1.getName();
      e1.getSalary();*/
      
      Employee[] em=new Employee[3]; 
      System.out.println(em[0]);
      em[0]=new Employee();
      System.out.println(em[0]);
      em[0].setId(10);
      em[0].setName("bhushan");
      em[0].setSalary(234324);
      em[0].display();
      
   }
}



















