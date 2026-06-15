// Write a program to count the number of words in a given sentence

import java.util.Scanner;

public class q1{
   public static void main(String[] args) {
      String s;
      Scanner sc=new Scanner(System.in);
      StringOperation so=new StringOperation();
      System.out.println("enter String");
      s=sc.nextLine();
      System.out.println(so.countWords(s));
   }
}
class StringOperation{
   public int countWords(String st){
      if(st.length()==0){
         return 0;
      }
      int len=1;
      String temp=st.trim();
      for(int i=0;i<temp.length();i++){
         if(i>0 && temp.charAt(i)==temp.charAt(i-1)){
            continue;
         }
         else if(temp.charAt(i)==' '){
            len++;
         }
      }
      return len;
   }
}