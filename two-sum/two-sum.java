class Solution {
  public int[] twoSum(int[] nums, int target) {
        HashSet<Integer> h = new HashSet<Integer>();
         Map<Integer, Integer> map= new LinkedHashMap<>();
            int [] r={0,1};
        for(int i=0;i<nums.length;i++){
            
            if(h.contains(nums[i])){
              r[0]=map.get(target-nums[i]);
              r[1]=i;
            }
            else{
              h.add(target-nums[i]);
              map.put(nums[i],i);
            }
        }
        return r;
    }
}
