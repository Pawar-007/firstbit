public class Student {
   int rollNo,marks;
   String name;
   void setRollNo(int rollNo){
      this.rollNo=rollNo;
   }
   void setName(String name){
      this.name=name;
   }
   void setMarks(int marks){
      this.marks=marks;
   }

   void getMarks(){
      System.out.println("Marks: "+this.marks);
   }
   
   void getName() {
      System.out.println("Name: "+this.name);
   }
   
   void getRollNo() {
      System.out.println("RollNo: "+this.rollNo);
   }
}

class Students{
   public static void main(String[] args) {
      Student s1=new Student();
      s1.setRollNo(12);
      s1.setName("pankaj");
      s1.setMarks(23);
      s1.getRollNo();
      s1.getName();
      s1.getMarks();
   }
}