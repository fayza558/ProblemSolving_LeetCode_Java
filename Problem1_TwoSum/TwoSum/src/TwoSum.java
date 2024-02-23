
import java.util.HashMap;
import java.util.*;

public class TwoSum {
    public int[] twoSum(int[] nums, int targets) {
        Map<Integer, Integer> complements = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            Integer complementIndex = complements.get(nums[i]);
            if (complementIndex != null) {
                return new int[]{i, complementIndex};
            }
            complements.put(targets - nums[i], i);
        }
        return nums;

    }


}

