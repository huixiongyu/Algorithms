#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    int sum = 0, zero = 0, one = 0;
    for(int i = 0; i < str.length(); i++) {
        if(isalpha(str[i])) {
            str[i] = toupper(str[i]);
            sum += (str[i] - 'A' + 1);
        }
    }
    while(sum != 0) {
        if(sum % 2 == 0) zero++;
        else one++;
        sum /= 2;
    }
    cout<<zero<<" "<<one;
    return 0;
}