class Solution {
public:
    int strStr(string haystack, string needle) {
    	int output = 0;
    	if (needle.size() == 0)
    	{
    		output = 0;
    	}
    	if (needle.size() < haystack.size())
    	{
    		output = -1;
    	}

        if (haystack.find(needle) != std::string::npos) 
        {
        	int stringSize = needle.size();
        	for (int i = 0; i < haystack.size(); i++)
        	{
        		if (haystack.substr(i,stringSize) == needle)
        		{
        			return i;
        		}
        	}
		}
		else
		{
			output = -1;
		}
		return output;
    }
};