class Solution {
    public boolean wordPattern(String pattern, String s) {
        String[] list=s.split(" ");
        if(list.length != pattern.length()) return false;
        Map<String, Character > map = new HashMap<String, Character >();
        for(int i=0;i<pattern.length();i++){
            Character char1=map.get(list[i]);
            boolean checkKey=map.containsKey(list[i]);
            boolean checkValue=map.containsValue(pattern.charAt(i));
            if(checkKey != checkValue) return false;
            if(char1 !=null && char1 != pattern.charAt(i)) return false;
            map.put(list[i],pattern.charAt(i));  

        }
        return true;
    }
}