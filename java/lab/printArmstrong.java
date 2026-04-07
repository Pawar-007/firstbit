//Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong
class Armstrong{
   public static void main(String[] args){
     int num=153;
	 int temp=num;
	 int count=0;
	 while(temp>0){
		 count++;
		 temp/=10;
	 }
	 int sum=0;
	 temp=num;
	 while(temp>0){
		 int x=temp%10;
		 int pow=1;
		 for(int i=0;i<count;i++){
			 pow*=x;
		 }
		 sum+=pow;
		 temp/=10;
	 }
     if(sum==num){
		 System.out.println(num+" Armstrong");
	 }
	 else{
        System.out.println(num+" Not an Amstrong");
	 }
   }
}