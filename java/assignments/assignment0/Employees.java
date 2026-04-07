class Employee{
   int id;
   double salary;
   String name;
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
   
}
public class Employees {
     
   public static void main(String[] args) {
      Employee e1=new Employee();
      e1.setId(10);
      e1.setName("bhushan");
      e1.setSalary(100000);
      e1.getId();
      e1.getName();
      e1.getSalary();
   }
}
