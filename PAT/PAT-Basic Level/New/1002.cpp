#include<iostream>
#include<string>

using namespace std;

int main() {
    string s;
    string num[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    int res = 0;
    cin>>s;
    int len = s.length();
    for(int i = 0; i < len; i++) {
        res += (s[i] - '0');
    }
    s = to_string(res);
    len = s.length();
    for(int j = 0; j < len; j++) {
        cout<<num[s[j] - '0'];
        if(j != len - 1) cout<<" ";
    }
    return 0;
}