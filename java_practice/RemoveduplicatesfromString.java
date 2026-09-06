package java_practice;

public class RemoveduplicatesfromString {
   public static void main(String[] args) {
      String st = "hellopppppererererer";
      StringBuffer str=new StringBuffer(st);
      boolean[] present=new boolean[26];

      for(int i=0;i<str.length();i++){
         char c=str.charAt(i);
         if(present[c-'a']){
            str.deleteCharAt(i);
            i--;
         }
         else{
            present[c-'a']=true;
         }
      }
      System.out.println(str);
   }
}
