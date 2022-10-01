import java.math.BigInteger;
class Solution {
    public int[] plusOne(int[] digits) {
        String combinedString = "";
        for(int i = 0; i < digits.length; i++) {
            combinedString += digits[i];
        }
        BigInteger combinedNum = new BigInteger(combinedString);
        combinedNum = combinedNum.add(BigInteger.valueOf(1));
        System.out.println(combinedNum);
        String[] splittedArray = String.valueOf(combinedNum).split("");
        int [] finalArray = new int[splittedArray.length];
        for(int i = 0; i < splittedArray.length; i++) {
            finalArray[i] = Integer.parseInt(splittedArray[i]);
        }
        return finalArray;
    }
}