public class Main {
    public static void main(String[] args) {
        TwoSum twoSumObj = new TwoSum();
        int[] nums = {2, 9, 7, 23};
        int target = 9;
        int[] result = twoSumObj.twoSum(nums, target);
        System.out.println("Indices: " + result[0] + ", " + result[1]);

    }
}