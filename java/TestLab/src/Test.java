class Student{
   int rollNo;
   String name;
   double percentage;
   double approvedLoan;
   boolean loanStatus;
   
   Student(){}
   Student(int rollNo,String name,double percentage){
      this.rollNo=rollNo;
      this.name=name;
      this.percentage=percentage;
      this.loanStatus=false;
    
   }
   
   public int getRollNo() {
      return rollNo;
   }
   public void setRollNo(int rollNo) {
      this.rollNo = rollNo;
   }
   public String getName() {
      return name;
   }
   public void setName(String name) {
      this.name = name;
   }
   public double getPercentage() {
      return percentage;
   }
   public void setPercentage(double percentage) {
      if(percentage<0 || percentage >100){
         System.out.println("Enter Valid percentage ");
         return;
      }
      this.percentage = percentage;
   }
   
   public double getApprovedLoan() {
      return approvedLoan;
   }
   public void setApprovedLoan(double approvedLoan) {
      this.approvedLoan = approvedLoan;
      this.setLoanStatus(true);
   }
   public boolean isLoanStatus() {
      return loanStatus;
      
      
   }
   public void setLoanStatus(boolean loanStatus) {
      this.loanStatus = loanStatus;
   }
}
public class Test {
     public static void main(String[] arge) {
    	 System.out.println(false);
     }
}
