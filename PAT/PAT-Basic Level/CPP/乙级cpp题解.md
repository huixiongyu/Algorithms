

## 1056 组合数的和（15分）
给定 N 个非 0 的个位数字，用其中任意 2 个数字都可以组合成 1 个 2 位的数字。要求所有可能组合出来的 2 位数字的和。例如给定 2、5、8，则可以组合出：25、28、52、58、82、85，它们的和为330。

输入格式：
输入在一行中先给出 N（1 < N < 10），随后给出 N 个不同的非 0 个位数字。数字间以空格分隔。

输出格式：
输出所有可能组合出来的2位数字的和。

输入样例：

3 2 8 5

输出样例：

330

**解析**
用Set来保存所有可能组成的数，然后使用STL的累加函数。


**代码：**
```
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
```
## 1057 数零壹 (20分)
给定一串长度不超过 10
​5
​​  的字符串，本题要求你将其中所有英文字母的序号（字母 a-z 对应序号 1-26，不分大小写）相加，得到整数 N，然后再分析一下 N 的二进制表示中有多少 0、多少 1。例如给定字符串 PAT (Basic)，其字母序号之和为：16+1+20+2+1+19+9+3=71，而 71 的二进制是 1000111，即有 3 个 0、4 个 1。

输入格式：
输入在一行中给出长度不超过 10
​5
​​ 、以回车结束的字符串。

输出格式：
在一行中先后输出 0 的个数和 1 的个数，其间以空格分隔。注意：若字符串中不存在字母，则视为 N 不存在，也就没有 0 和 1。

输入样例：
PAT (Basic)

输出样例：
3 4

**解析**

字符串转换题目
```
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
```