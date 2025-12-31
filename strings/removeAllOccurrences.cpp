#include<iostream>
#include<cctype>
#include<string>
using namespace std;

class Solution{
public:
    string removeOccurences(string s, string part){
        while(s.length() > 0 && s.find(part) < s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution sol;

    string s = "daabcbaabcbc";
    string part = "abc";

    cout << sol.removeOccurences(s, part);

    return 0;
}