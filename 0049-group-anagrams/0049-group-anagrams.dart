class Solution {
  List<List<String>> groupAnagrams(List<String> strs) {
    final map=<String, List<String>>{};
    for(final s in strs){
        final sorted=s.split("")..sort();
        final key=sorted.join();
        final v=map[key];
        if(v==null){
            map[key]=[s];
        }else{
            map[key]=[...v,s];
        }
    }

    return map.values.toList();
  }
}