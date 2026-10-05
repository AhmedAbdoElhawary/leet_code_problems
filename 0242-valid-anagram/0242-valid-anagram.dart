class Solution {
  bool isAnagram(String s, String t) {
    if(s.length != t.length) return false;

    final Map<String,int> hashMap={};

    for(int i=0;i<s.length;i++){
        final value=hashMap[s[i]];
        if(value==null){
            hashMap[s[i]]=1;
        }else{
            hashMap[s[i]]=value+1;
        }
    }

    for(int i=0;i<t.length;i++){
        final value=hashMap[t[i]];

        if(value==null) return false;

        if(value-1 == 0){ 
            hashMap.remove(t[i]);
        }else{
            hashMap[t[i]]=value-1;
        }
        
    }
    return hashMap.length == 0;
  }
}
