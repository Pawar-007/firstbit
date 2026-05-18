import java.util.Scanner;

class trycatch {
   public static void main(String[] args) {
      try {
         int a = 10;
         int b = 0;
         int c = a / b;
      } catch (ArithmeticException e) {
         e.printStackTrace();
      }
      catch(ArrayIndexOutOfBoundsException ae){
         System.out.println(ae.toString());
      }
      catch(Exception e){
         System.out.println(e.toString());
      }
   }
}
