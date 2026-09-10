package java_practice;

public class ValidBracket {
   public static void main(String[] args) {
       String st="[{(}])";
       System.out.println(isValid(st));
   }

      public static boolean isValid(String str) {

      int round = 0;   // ()
      int curly = 0;   // {}
      int square = 0;  // []

      for (char ch : str.toCharArray()) {

         if (ch == '(') round++;
         else if (ch == ')') round--;

         else if (ch == '{') curly++;
         else if (ch == '}') curly--;

         else if (ch == '[') square++;
         else if (ch == ']') square--;
      }

      return round == 0 && curly == 0 && square == 0;
   }
}
