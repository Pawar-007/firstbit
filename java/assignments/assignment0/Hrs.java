class Hr{
   int id;
   String name;
   double salary;
   double commission;

   Hr(){
      this.id=0;
      this.name="emp";
      this.salary=15000;
      this.commission=200;
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
   void setCommission(double commission){
      this.commission=commission;
   }

   int getId(){
      return this.id;
   }
   String getName(){
      return this.name;
   }
   double getSalary(){
      return this.salary;
   }
   double getCommission(){
      return this.commission;
   }
   void display(){
      System.out.println("id: "+this.id);
      System.out.println("name: " + this.name);
      System.out.println("salary: " + this.salary);
      System.out.println("commission: " + this.commission);
   }
}
public class Hrs {
    
   public static void main(String[] args) {
      Hr hr=new Hr();
      hr.display();
      hr.setId(12);
      hr.setName("bhushan");
      hr.setSalary(2000);
      hr.setCommission(3000);
      hr.display();

   }
}