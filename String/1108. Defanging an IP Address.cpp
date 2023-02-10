#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) 
    {
        string ip;
        for (size_t i = 0; i < address.length(); i++)
        {
            if (address[i] == '.')
                ip.append("[.]");
            else
                ip.push_back(address[i]);
        }
        return ip;
    }
};