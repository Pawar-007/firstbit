package java_practice;

class SecondLargest {
   public static int findSecondLargest(int[] arr) {
      // There must be at least two elements
      if (arr == null || arr.length < 2) {
         throw new IllegalArgumentException("Array must have at least two elements");
      }

      int largest = Integer.MIN_VALUE;
      int secondLargest = Integer.MIN_VALUE;

      for (int num : arr) {
         // If current element is greater than largest, update both
         if (num > largest) {
            secondLargest = largest;
            largest = num;
         } 
         // If current element is smaller than largest but greater than second largest
         else if (num > secondLargest && num != largest) {
            secondLargest = num;
         }
      }

      // Check if a valid second largest was found (handles cases like)
      if (secondLargest == Integer.MIN_VALUE) {
         throw new RuntimeException("No distinct second largest element exists");
      }

      return secondLargest;
   }

   public static void main(String[] args) {
      int [] ans={12,43,5,4,6,5,34,42,32,5,45,4};
      System.out.println(findSecondLargest(ans));
   }
}
