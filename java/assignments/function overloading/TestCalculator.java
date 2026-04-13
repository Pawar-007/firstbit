class Calculator{
   public int add(int x,int y){
        return x+y;
   }
   public double add(double x,double y){
         return x+y;
   }
   public double add(int x,double y){
      return x+y;
   }
   public double add(double x,int y){
      return x+y;
   }
   
   public int subtract(int x, int y) {
      return x - y;
   }

   public double subtract(double x, double y) {
      return x - y;
   }

   public double subtract(int x, double y) {
      return x - y;
   }

   public double subtract(double x, int y) {
      return x - y;
   }
   
   public int product(int x, int y) {
      return x * y;
   }

   public double product(double x, double y) {
      return x * y;
   }

   public double product(int x, double y) {
      return x * y;
   }

   public double product(double x, int y) {
      return x * y;
   }
   
   public int division(int x, int y) {
      return x / y;
   }

   public double division(double x, double y) {
      return x / y;
   }

   public double division(int x, double y) {
      return x / y;
   }

   public double division(double x, int y) {
      return x / y;
   }
}
class TestCalculator{
   public static void main(String[] args) {
      Calculator c=new Calculator();
      int x=12;
      double y=23;
      System.out.println(c.add(12,21));
      System.out.println(c.subtract(x, y));
      System.out.println(c.product(x, y));
      System.out.println(c.division(y, x));
   }
}