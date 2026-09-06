package java_practice;

public class ReverseString {
   public static void main(String[] args) {
      String st="hello";
      char[] ch=st.toCharArray();
      int i=0;
      int j=st.length()-1;
      while(i<=j){
         char temp=ch[i];
         ch[i]=ch[j];
         ch[j]=temp;
         i++;
         j--;
      }
      String rev=new String(ch);
      System.out.println(rev);
   }
}
