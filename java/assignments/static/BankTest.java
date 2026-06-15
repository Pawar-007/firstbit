class BankAccount{
   int accNo;
   String accHolderName;
   double currentBalance;
   static double intrestRate;

   
   public BankAccount(int accNo, String accHolderName, double currentBalance) {
      this.accNo = accNo;
      this.accHolderName = accHolderName;
      this.currentBalance = currentBalance;

   }


   public static void setIntrestRate(int intRest){
          intrestRate=intRest;
   }
   public int getAccNo() {
      return accNo;
   }
   public void setAccNo(int accNo) {
      this.accNo = accNo;
   }
   public String getAccHolderName() {
      return accHolderName;
   }
   public void setAccHolderName(String accHolderName) {
      this.accHolderName = accHolderName;
   }
   public double getCurrentBalance() {
      return currentBalance;
   }
   public void setCurrentBalance(double currentBalance) {
      this.currentBalance = currentBalance;
   }

   public String toString() {
      return "Account Number: " + accNo +
            "\nAccount Holder Name: " + accHolderName +
            "\nCurrent Balance: " + currentBalance +
            "\nInterest Rate: " + intrestRate;
   }
   
}

public class BankTest {
   public static void main(String[] args) {
     
        BankAccount.setIntrestRate(12);
        BankAccount b1=new BankAccount(101,"Bhushan", 100000);
        BankAccount b2=new BankAccount(102, "harshal", 10020);
        BankAccount b3=new BankAccount(103, "rahul", 70000);
        System.out.println(b1);
        System.out.println();
        System.out.println(b2);
        System.out.println();
        System.out.println(b3);
   }
}
