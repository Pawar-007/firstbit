class Employee {
   int id;
   String name;
   double salary;

   Employee(int id, String name, double salary) {
      this.id = id;
      this.name = name;
      this.salary = salary;
   }

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

   public double getSalary() {
      return salary;
   }

   public double calSalary(){
      return salary;
   }
}

class Admin extends Employee {
   boolean allowance;

   Admin(int id, String name, double salary, boolean allowance) {
      super(id, name, salary);
      this.allowance = allowance;
   }

   public boolean isAllowance() {
      return allowance;
   }

   public void setAllowance(boolean allowance) {
      this.allowance = allowance;
   }

   public double calSalary(){
      return this.salary;
   }

}

class SalesManager extends Employee {
   double incentive;
   double target;

   SalesManager(int id, String name, double salary, double incentive, double target) {
      super(id, name, salary);
      this.incentive = incentive;
      this.target = target;
   }

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
   
   public double calSalary(){
      return this.salary+this.incentive;
   }
}

class AreaSalesManager extends SalesManager {
   String AreaName;

   AreaSalesManager(int id, String name, double salary, double incentive, double target, String areaName) {
      super(id, name, salary, incentive, target);
      this.AreaName = areaName;
   }

   void setAreaName(String name) {
      this.AreaName = name;
   }

   String getAreaName() {
      return this.AreaName;
   }
}

class HR extends Employee {
   double commission;

   HR(int id, String name, double salary, double commission) {
      super(id, name, salary);
      this.commission = commission;
   }

   public double getCommission() {
      return commission;
   }

   public void setCommission(double commission) {
      this.commission = commission;
   }
   
   public double calSalary(){
      return this.salary+this.commission;
   }
}

class Test{
   public static void main(String[] args) {
      Employee e1=new HR(1, "pankaj", 1200, 1000);
      Employee e2=new Admin(2, "bhushan", 1000, false);
      Employee e3=new SalesManager(3, "akshay", 1000, 230, 40);
      System.out.println(e3.calSalary());
   }
}