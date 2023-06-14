public class Solution {
    public int LengthOfLongestSubstring(string s) {
        if (s.Length == 1)
        {
            return 1;
        }
        List<string> stringList = new List<string>();
        string longestSubstring = "";
        for (int i = 0; i < s.Length; i++)
        {
            for (int j = i; j < s.Length; j++)
            {
                if (!longestSubstring.Contains(s[j]))
                {
                    longestSubstring += s[j];
                }
                else
                {
                    stringList.Add(longestSubstring);
                    longestSubstring = "";
                    break;
                }
            }
        }
        string longestStringForOutput = string.Empty;
        foreach (string str in stringList)
        {
            if (str.Length > longestStringForOutput.Length)
            {
                longestStringForOutput = str;
            }
        }
        return longestStringForOutput.Length;
    }
}