#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution
{
public:

    int Split(string str)
    {
        int pos = 0;
        int res = 1;

        string delim = " "; 
        while ((pos = str.find(" ")) != string::npos)
        {    
            res++;
            str.erase(0, pos + delim.size());
        }
        return res;
    }

    int mostWordsFound(vector<string>& sentences) 
    {
        int size = sentences.size();
        int res = 1;
        for (size_t i = 0; i < size; i++)
        {
            string str = sentences[i];
            int numberOfWords = (int)Split(str);
            res = max(res, numberOfWords);
        }
        return res;
    }
};


int main()
{
    Solution s;
    vector<string> sentences{ "alice and bob love leetcode","i think so too","this is great thanks very much" };
    s.mostWordsFound(sentences);
}