#include<iostream>
#include<set>
#include<numeric>
using namespace std;

int main() {
    int arr[10];
    int n, num, index, result, temp = 0;
    set<int> resultSet;
    cin>>n;
    for(int i = 0;i < n; i++) {
        cin>>num;
        arr[index++] = num;
    }
    for(int i = 0;i < index; i++) {
        for(int j = 0;j < index; j++) {
            if (arr[i] != arr[j]) {
                temp = arr[i] * 10 + arr[j];
                resultSet.insert(resultSet.begin(),temp);
            }
        }
    }
    result = accumulate(resultSet.begin(), resultSet.end(), 0);
    cout<<result;
    return 0;
}