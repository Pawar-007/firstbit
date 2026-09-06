package java_practice;

public class Characterfrequency {
   public static void main(String[] args) {
      String st="hellopppppererererer";
      int[] frequency=new int[26];
      for(int i=0;i<st.length();i++){
         frequency[st.charAt(i)-'a']++;
      }
      // for(int i=0;i<frequency.length;i++){

      //    if(frequency[i]!=0){
      //       System.out.println((char)(i+'a') + " " + frequency[i]);
      //    }
      // }

      for(int i=0;i<st.length();i++){
         if(frequency[st.charAt(i)-'a']!=0){
             System.out.println(st.charAt(i)+" "+frequency[st.charAt(i) - 'a']);
             frequency[st.charAt(i)-'a']=0;
         }
      }
   }
}
