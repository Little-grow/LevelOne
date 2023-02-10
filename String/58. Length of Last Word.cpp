#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s)
    {
      /*  stringstream str(s);
        string temp;
        int n = 0;
        while (str >> temp)
            n = temp.size();
        return n;*/
    }

   /* int Split(string s)
    {
        string delim;
        int pos = 0;
        int len = 0;
        string token;
        while (pos=s.find(delim) != string::npos)
        {
            token = s.substr(0, pos);
            if (token.length() != 0)
                len = token.length();
            s.erase(0, pos + delim.size());
        }
        return len;
    }*/
};

