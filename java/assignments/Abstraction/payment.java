abstract class Payment {
   String paymentId;
   double amount;
   String payerName;
   String status;
   Payment(String paymentId,double amount,String payerName){
      this.payerName=payerName;
      this.amount=amount;
      this.paymentId=paymentId;
   }
   abstract boolean validate();
   abstract void deductAmount();
   abstract void sendNotification();
   abstract void printSummary();
   final void process() {
      if (!validate()) {
         this.status = "Faild";
         return;
      }
      deductAmount();
      sendNotification();
      printSummary();
   }
}
class CardPayment extends Payment{
   String cardNumber;
   String cvv;
   CardPayment(String cardNumber,String cvv, String paymentId, double amount, String payerName){
      super(paymentId, amount, payerName);
      this.cardNumber=cardNumber;
      this.cvv=cvv;

   }
   boolean validate(){
       if(this.cardNumber.length()!=16){
         System.out.println("Enter correct cardNumber");
         this.status="FAIELD";
         return false;
       }
       if (this.cvv.length() != 3) {
          System.out.println("Enter correct cvv Number");
          this.status="FAIELD";
          return false;
       }
       if(amount<0){
         System.out.println("Enter valid amount");
         return false;
       }
       return true;
   }

   void deductAmount(){
      System.out.println("Amount is dedected "+amount);
      this.status="SUCCESS";
      
   }
   void sendNotification(){
      System.out.println("Notification ");
   }
   void printSummary(){
      System.out.println("----- Payment Summary -----");
      System.out.println("Payment ID : " + paymentId);
      System.out.println("Payer Name : " + payerName);
      System.out.println("Amount     : " + amount);
      System.out.println("Status     : " + status);
   }
}
class UpiPayment extends Payment{
   String upiId;
   UpiPayment(String upiId,String paymentId,double amount,String payerName){
      super(paymentId, amount, payerName);
      this.upiId=upiId;
   }
   
   boolean validate() {
      if (!upiId.contains("@")) {
         System.out.println("Enter correct upiId");
         this.status = "FAIELD";
         return false;
      }
      if (this.amount<1 || this.amount> 100000) {
         System.out.println("Enter valid amount between 1 to 100000");
         this.status = "FAIELD";
         return false;
      }
      return true;
   }

   void deductAmount() {
      System.out.println("Amount is dedected " + amount);
      this.status = "SUCCESS";

   }

   void sendNotification() {
      System.out.println("Notification ");
   }

   void printSummary() {
      System.out.println("----- Payment Summary -----");
      System.out.println("Payment ID : " + paymentId);
      System.out.println("Payer Name : " + payerName);
      System.out.println("Amount     : " + amount);
      System.out.println("Status     : " + status);
   }

}
class Test{
   public static void main(String[] args) {
      CardPayment p1=new CardPayment("1234567896325874", "365", "100", 100, "bhushan");
      UpiPayment p2=new UpiPayment("7776827075ybl", "101", 1200, "Bhushan");
      CardPayment p3 = new CardPayment("123456789632574", "365", "100", 100, "bhushan");
      UpiPayment p4 = new UpiPayment("7776827075@ybl", "101", 1200, "Bhushan");
      p1.process();
      System.out.println();
      p2.process();
      System.out.println();
      p3.process();
      System.out.println();
      p4.process();

   }
}