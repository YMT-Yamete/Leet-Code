class Solution {
    public List<List<Integer>> generate(int numRows) {
      List<List<Integer>> result = new ArrayList<>();
      
      for(int i = 0; i < numRows; i++){
        List<Integer> newRow = new ArrayList<>();
        
        if(i == 0){
          newRow.add(1);
          result.add(newRow);
          continue;
        }
        
        List lastRow = result.get(i - 1);
        
        for(int j = 0; j < i + 1; j++){
            int a = 0;
            int b = 0;
            if (j - 1 < 0) {
                a = 0;
            }
            else {
                a = (int)lastRow.get(j-1);
            }
            if (j > i - 1) {
                b = 0;
            }
            else {
                b = (int)lastRow.get(j);
            }
            newRow.add(a + b);
        }
        result.add(newRow);        
      }
      
     
      return result;
    
    }
}