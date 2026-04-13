class Admin{
   int id;
   String name;
   double salary,allounce;
   
   Admin(){
      this.id=1;
      this.name="admin";
      this.salary=3000;
      this.allounce=1000;
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
   void setAllounce(double allounce){
      this.allounce=allounce;
   }
   void getId(){
      System.out.println(this.id);
   }
   void getName(){
      System.out.println(this.name);
   }
   void getSalary(){
      System.out.println(this.salary);
   }
   void getAllounce(){
      System.out.println(this.allounce);
   }
}
class Admins {
    public static void main(String[] args) {
       Admin a1 = new Admin();
       a1.setId(1);
       a1.setName("sahil");
       a1.setSalary(2000);
       a1.setAllounce(200);
       a1.getId();
       a1.getName();
       a1.getSalary();
       a1.getAllounce();
    }
}
