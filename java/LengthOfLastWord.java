class Solution {
    public int lengthOfLastWord(String s) {
        String[] arrOfStr = s.split(" ", 0);
        List<String> list=new ArrayList<String>();
        for (String a : arrOfStr) {
            if(a != "") {
                 list.add(a);
            }   
        }
        return list.get(list.size() - 1).length();
    }
}