class Solution {
public:
    string reverseStr(int x)
    {
        string str = to_string(x);
        int length = str.length();
        for (int i = 0; i < length / 2; i++)
        {
            swap(str[i], str[length - i - 1]);
        }
        return str;
    }
    
    bool isPalindrome(int x) 
    {
        if(to_string(x) == reverseStr(x)) 
        {
            return true;   
        }
        else 
        {
            return false;
        }
    }
};
