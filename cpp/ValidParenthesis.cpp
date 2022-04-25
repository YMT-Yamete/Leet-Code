#include <iostream>
#include <vector>
using namespace std;

bool isValid() 
{
	string s;
	cin >> s;
	
	vector<char> closeParen;

    if (s[0] == ')' || s[0] == ']' || s[0] == '}')
	{
		return false;
	}
	if (s.size() < 2) 
	{
		return false;
	}
    for (int i = 0; i < s.size(); i++)
    {
    	if (s[i] == '(')
    	{
    		closeParen.push_back(')');
    	}
    	else if (s[i] == '[')
    	{
    		closeParen.push_back(']');
    	}
    	else if (s[i] == '{')
    	{
    		closeParen.push_back('}');
    	}
    	else
    	{
	    	if (i != 0 && closeParen.size() == 0)
	    	{
	    		return false;
	    	}
    		if (s[i] != closeParen.back())
			{
				return false;
			}
			else
			{
				closeParen.pop_back();
			}
    	}
    }
    if (closeParen.size() == 0)
    {
    	return true;
    }
    else 
    {
    	return false;
    }
}
int main()
{
	bool validation = isValid();
	cout << validation;
	return 0;
}