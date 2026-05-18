class divideByZeroException extends Exception{
   private String message="divideByZeroException";
   public
}
class ThrowsLab{
   public int divide(int a,int b) throws ArithmeticException{
      return a/b;
   }
   public static void main(String[] args) {
      ThrowsLab tb=new ThrowsLab();
      try {
         int a=10;
         int b=0;
         int c=tb.divide(a,b);
      } catch (Exception e) {
         System.out.println(e);
      }
   }
}