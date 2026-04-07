//3 Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15

class SumOfNum{
   public static void main(String[] args){
      int start=1;
	  int end=5;
	  int sum=0;
	  while(start<=end){
	     sum+=start;
		 start++;
	  }
	  System.out.println(sum);
   }
}