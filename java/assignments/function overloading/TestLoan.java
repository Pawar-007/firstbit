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
class Employee{
   int id;
   String name;
   double annualSalary;
   double approvedLoan;
   boolean loanStatus;
   Employee(){}
   Employee(int id,String name,double annualSalary){
      this.id=id;
      this.name=name;
      this.annualSalary=annualSalary;
   }

   public int getId() {
      return id;
   }

   public void setId(int id) {
      this.id = id;
   }

   public String getName() {
      return name;
   }

   public void setName(String name) {
      this.name = name;
   }

   public double getAnnualSalary() {
      return annualSalary;
   }

   public void setAnnualSalary(double annualSalary) {
      if(annualSalary<0){
         System.out.println("Salary is never negative");
         return;
      }
      this.annualSalary = annualSalary;
   }

   public double getApprovedLoan() {
      return approvedLoan;
   }

   public void setApprovedLoan(double approvedLoan) {
      this.approvedLoan = approvedLoan;
   }

   public boolean isLoanStatus() {
      return loanStatus;
   }

   public void setLoanStatus(boolean loanStatus) {
      this.loanStatus = loanStatus;
   }
}
class Bank{
   public void approveLoan(Employee emp){
      double salary=emp.annualSalary;
      if(salary>=1200000){
         emp.setApprovedLoan(700000);
         emp.setLoanStatus(true);
      }
      else if(salary>=1000000 && salary<1200000){
         emp.setApprovedLoan(600000);
         emp.setLoanStatus(true);
      }
      else if (salary >= 600000 && salary < 1000000) {
         emp.setApprovedLoan(500000);
         emp.setLoanStatus(true);
      }
      else if (salary >= 400000 && salary < 600000 ) {
         emp.setApprovedLoan(400000);
         emp.setLoanStatus(true);
      }
      else if (salary >= 0 && salary < 400000) {
         System.out.println("Loan not approved who have salary below 4 LPA");
         return;
      }
      else{
         System.out.println("annual salary is not correct");
         return;
      }
      System.out.println("Approved");
   }
   
   public void approveLoan(Student std){
      double percentage=std.getPercentage();
     
      if(percentage>80){
         std.setApprovedLoan(200000);
      }
      else if(percentage>60){
         std.setApprovedLoan(100000);
      }
      else if(percentage>=40 && percentage<=60){
         std.setApprovedLoan(50000);
      }
      else{
         System.out.println("Loan not applicable for below 40%");
         std.setLoanStatus(false);
         return;
      }
      System.out.println("Loan Approved");
   }
}
class TestLoan{
   public static void main(String[] args) {
      Student s1=new Student(1,"pankaj",41);
      Employee e1=new Employee(1, "Bhushan", 1200000);
      Bank b1=new Bank();
      b1.approveLoan(s1);
      b1.approveLoan(e1);
      System.out.println(s1.getApprovedLoan());
      System.out.println(e1.getApprovedLoan());
   }
}