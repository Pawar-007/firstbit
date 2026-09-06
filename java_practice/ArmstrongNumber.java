package java_practice;

public class ArmstrongNumber {
   public static void main(String[] args) {
      int num=133;
      int count=0;
      int i=num;
      while(i>0){
         count++;
         i/=10;
      }

      i=num;
      int ans=0;
      while(i>0){
         int temp=i%10;
         ans+=Math.pow(temp, count);
         i/=10;
      }

      if(ans==num){
         System.out.println("armstrom");
      }
      else{
         System.out.println("no");
      }
   }
}
