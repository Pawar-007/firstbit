import java.util.Scanner;
abstract class ElectricityBill{
    String customerName;
    int units;
    ElectricityBill(String customerName,int units){
      this.customerName=customerName;
      this.units=units;
    }
    abstract double calculateBill();
    final void generateBill(){
      double bill=calculateBill();
      double tax=(5.0/100)*bill;
      double fixedCharge=50;
      double totalBill=bill+tax+fixedCharge;
      System.out.println("Customer Name: "+customerName);
      System.out.println("Units: "+units);
      System.out.println("Bill Amount: "+bill);
      System.out.println("Tax: 5");
      System.out.println("Fixed Charge: 50");
      System.out.println("Total Bill: "+totalBill);
    }
}
class ResidentialBill extends ElectricityBill{
   ResidentialBill(String customerName,int units){
      super(customerName,units);
   }
   
   double calculateBill(){
      double charge;
      if(this.units>0 && this.units<=100){
            charge=2.5;
      }
      else if(this.units>100 && this.units<=300){
            charge=3.5;
      }
      else{
         charge=5;
      }

      double totalBill=charge*this.units;
      if(this.units>500){
         totalBill+=150;
      }
      return totalBill;
   }
}

class CommercialBill extends ElectricityBill {
   CommercialBill(String customerName,int units){
      super(customerName,units);
   }
   
   double calculateBill() {
      double charge=6.5;
      if(this.units<200){
         return 1500;
      }
      double Bill = charge * this.units;
      double superCharge=0;
      if(this.units>1000){
          superCharge=(8.0/100)*Bill;
      }
      double totalBill=Bill+superCharge;
      return totalBill;
   }
}
class Test{
   public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter name of consumer : ");
      String name=sc.nextLine();
      System.out.println();
      System.out.println("Enter Unit consumed");
      int units=sc.nextInt();
      System.out.println("Enter Bill Type for ResidentialBill enter 1 for CommercialBill enter 2");
      int choice=sc.nextInt();
      
      ElectricityBill e1;
      if(choice==1){
         e1=new ResidentialBill(name, units);
      }
      else if(choice==2){
         e1=new CommercialBill(name, units);
      }
      else{
         System.out.println("Enter vaild choice");
         return;
      }
      e1.generateBill();
   }
}