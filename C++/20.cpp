class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> small;
        //stack<char> midum;
        //stack<char> big;
        int str_length = s.length();
        for(int i=0;i<str_length;i++)
        {
            if(s[i]=='(')
            {
                small.push(s[i]);
            }
            else if(s[i]=='[')
            {
                small.push(s[i]);
            }
            else if(s[i]=='{')
            {
                small.push(s[i]);
            }
            else if(s[i]==')')
            {
                if(small.empty())
                {
                    return false;
                }
                else if(small.top()=='(')
                {
                    small.pop();
                }
                else
                {
                    return false;
                }
            }
            else if(s[i]==']')
            {
                if(small.empty())
                {
                    return false;
                }
                else if(small.top()=='[')
                {
                    small.pop();
                }
                else
                {
                    return false;
                }
            }
            else if(s[i]=='}')
            {
                if(small.empty())
                {
                    return false;
                }
                else if(small.top()=='{')
                {
                    small.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(small.empty())
        {
            return true;
        }
        return false;
    }
};