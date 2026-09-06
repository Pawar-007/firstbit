package java_practice;

public class Anagram {
   public static void main(String[] args) {

      String st = "iiLL";
      String st1 = "LiLi";

      if (st.length() != st1.length()) {
         System.out.println("Not Anagram");
         return;
      }

      int[] frequency = new int[256];

      for (int i = 0; i < st.length(); i++) {
         frequency[st.charAt(i)]++;
         frequency[st1.charAt(i)]--;
      }

      for (int count : frequency) {
         if (count != 0) {
            System.out.println("Not Anagram");
            return;
         }
      }

      System.out.println("Anagram");
   }
}
