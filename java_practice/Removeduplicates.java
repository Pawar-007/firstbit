package java_practice;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class Removeduplicates {
   public static int[] removeDuplicate(int[] arr){
      Set<Integer> st=new HashSet<>();
      List<Integer> ans=new ArrayList<>();
      for(int i=0;i<arr.length;i++){
         if(st.contains(arr[i])){
            continue;
         }
         ans.add(arr[i]);
         st.add(arr[i]);
      }

      return ans.stream().mapToInt(Integer::intValue).toArray();
   }
   public static void main(String[] args) {
      int [] ans={32,3,34,543,3,2,32,32,3,32,3,23,2,32};
      ans=removeDuplicate(ans);
      for(int i=0;i<ans.length;i++){
         System.out.print(ans[i]+" ");
      }
   }
}
