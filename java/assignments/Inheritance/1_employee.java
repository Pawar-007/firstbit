class Employee{
   int id;
   String name;
   double salary;
   public int getId() {
      return id;
   }
   public void setId(int id) {
      this.id = id;
   }
   public void setName(String name) {
      this.name = name;
   }
   public void setSalary(double saslary) {
      this.salary = saslary;
   }
   public String getName() {
      return name;
   }
   public double getSaslary() {
      return salary;
   }
   
}
class Admin extends Employee{
   boolean allowance;

   public boolean isAllowance() {
      return allowance;
   }

   public void setAllowance(boolean allowance) {
      this.allowance = allowance;
   }
   
}
class SalesManager extends Employee{
   double incentive;
   double target;
   public double getIncentive() {
      return incentive;
   }
   public void setIncentive(double incentive) {
      this.incentive = incentive;
   }
   public double getTarget() {
      return target;
   }
   public void setTarget(double target) {
      this.target = target;
   }
   
}
class HR extends Employee{
   double commission;

   public double getCommission() {
      return commission;
   }

   public void setCommission(double commission) {
      this.commission = commission;
   }
   
}

