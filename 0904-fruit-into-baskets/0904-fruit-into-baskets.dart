class Solution {
  int totalFruit(List<int> fruits) {
    int max=0;
    final Map<int,int> basket={};
    int left=0;
    int right=0;

  for (int right = 0; right < fruits.length; right++) {
    basket[fruits[right]] = (basket[fruits[right]] ?? 0) + 1;

    while (basket.length > 2) {
      final f = fruits[left];
      basket[f] = basket[f]! - 1;
      if (basket[f] == 0) basket.remove(f);
      left++;
    }

    final sum=right-left + 1;
    if(sum > max)max = sum;
  }

  return max;
  }
}

// 1,2,3,2,2,1,3
