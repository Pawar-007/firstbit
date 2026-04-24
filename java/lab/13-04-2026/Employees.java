import java.util.Scanner;
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
    
       System.out.println(System.out);
      /*Scanner sc=new Scanner(System.in);
      System.out.println("Enter an Id : ");
      int id=sc.nextInt();
      sc.nextLine();
      System.out.println("Enter name : ");
      String name=sc.nextLine();
      System.out.println("Enter salary : ");
      double sal=sc.nextDouble();
      Employee e1=new Employee(id,name,sal);
      e1.display();
      */
   }
}



















