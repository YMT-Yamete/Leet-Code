class Solution {
public:
	int romanCharToInt(char romanChar) {
		switch(romanChar) {
			case 'I':
			return 1;
			break;

			case 'V':
			return 5;
			break;

			case 'X':
			return 10;
			break;

			case 'L':
			return 50;
			break;

			case 'C':
			return 100;
			break;

			case 'D':
			return 500;
			break;

			case 'M':
			return 1000;
			break;
		}
		return 0;
	}

    int romanToInt(string s) {
        vector<int> finalVector;
        for (int i = 0; i < s.size(); i++)
        {
        	int currentNum = romanCharToInt(s[i]);
        	int nextNum = romanCharToInt(s[i+1]);
        	if (currentNum >= nextNum)
        	{
        		finalVector.push_back(currentNum);
        	}
        	else
        	{
        		finalVector.push_back(nextNum - currentNum);
        		i++;
        	}
        }
        return accumulate(finalVector.begin(),finalVector.end(),0);
    }
};