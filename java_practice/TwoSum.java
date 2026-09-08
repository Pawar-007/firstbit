package java_practice;
import java.util.HashMap;
import java.util.Map;

public class TwoSum {
   public static int[] twoSum(int[] arr, int target) {

    Map<Integer, Integer> map = new HashMap<>();

    for (int i = 0; i < arr.length; i++) {

        int required = target - arr[i];

        if (map.containsKey(required)) {
            return new int[]{
                    map.get(required),
                    i
            };
        }

        map.put(arr[i], i);
    }

    return new int[]{};
}
}
