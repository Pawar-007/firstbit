class SaleManager{
   (id, name, salary, incentive, target)
   int id;
   String name;
   double salary;
   double incentive;
   int target;
   SaleManager(){
      this.id=10;
      this.name="pratik";
      this.salary=100;
      this.incentive=200;
      this.target=100;
   }

   void setId(int id){
      this.id=id;
   }
   void setName(String name){
      this.name=name;
   }
   void setSalary(double salary){
      this.salary=salary;
   }
   void setIncentive(double incentive){
      this.incentive=incentive;
   }
   void setTarget(int target){
      this.target=target;
   }

   int getId(){
      System.out.println(this.id);
      return this.id;
   }
   String getName(){
      System.out.println(this.name);
      return this.name;
   }
   double getSalary(){
      System.out.println(this.salary);
      return this.salary;
   }
   double getIncentive(){
       System.out.println(this.incentive);
       return this.incentive;
   }
   double getTarget(){
       System.out.println(this.target);
       return this.target;
   }

   void display(){
      
   }
}

public class SalesManager {

}
