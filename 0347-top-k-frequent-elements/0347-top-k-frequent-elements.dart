class Solution {
  List<int> topKFrequent(List<int> nums, int k) {
    final Map<int,int> numsCount={};

    for(int i=0;i<nums.length;i++){
        final value= numsCount[nums[i]];

        if(value == null){
            numsCount[nums[i]]=1;
        }else{
             numsCount[nums[i]]= value + 1;
        }
    }

    final (List<int> count,List<int> value) target=(List.filled(k,0),List.filled(k,0));

    for(final e in numsCount.entries){
        int count=e.value;
        int value=e.key;

        for(int j=0;j<target.$1.length;j++){
            final (int cCount,int cNumber) current=(target.$1[j],target.$2[j]);

            if(count>current.$1){
                target.$1[j]=count;
                target.$2[j]=value;

                count=current.$1;
                value=current.$2;
            }


        }
    }

    return target.$2;
  }
}