import java.util.Arrays;
import java.util.stream.Stream;

public class lamda {
   public static void main(String[] args) {
      String[] arr = { "hello", "pankaj", "bhsuhan", "aditaya", "harshal", "tajs" };
      Arrays.sort(arr, (a, b) -> {
         return a.compareTo(b);
      });

      Arrays.stream(arr).map((a) -> {
         return a.concat(" pawar");
      }).forEach(System.out::println);
      ;
       
      for(int i=0;i<arr.length;i++){
         System.out.println(arr[i]);
      }
   }
}
