class trycatch {
   public static void main(String[] args) {
      try {
         int a = 10;
         int b = 0;
         int c = a / b;
      } catch (Exception e) {
         System.out.println("divide by zero is not possible" + e.toString());
      }
   
      // System.out.println("program run without error");
   }
}
