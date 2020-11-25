

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
## 1058 选择题 (20分)
批改多选题是比较麻烦的事情，本题就请你写个程序帮助老师批改多选题，并且指出哪道题错的人最多。

输入格式：
输入在第一行给出两个正整数 N（≤ 1000）和 M（≤ 100），分别是学生人数和多选题的个数。随后 M 行，每行顺次给出一道题的满分值（不超过 5 的正整数）、选项个数（不少于 2 且不超过 5 的正整数）、正确选项个数（不超过选项个数的正整数）、所有正确选项。注意每题的选项从小写英文字母 a 开始顺次排列。各项间以 1 个空格分隔。最后 N 行，每行给出一个学生的答题情况，其每题答案格式为 (选中的选项个数 选项1 ……)，按题目顺序给出。注意：题目保证学生的答题情况是合法的，即不存在选中的选项数超过实际选项数的情况。

输出格式：

按照输入的顺序给出每个学生的得分，每个分数占一行。注意判题时只有选择全部正确才能得到该题的分数。最后一行输出错得最多的题目的错误次数和编号（题目按照输入的顺序从 1 开始编号）。如果有并列，则按编号递增顺序输出。数字间用空格分隔，行首尾不得有多余空格。如果所有题目都没有人错，则在最后一行输出 Too simple。

输入样例：

3 4

3 4 2 a c

2 5 1 b

5 3 2 b c

1 5 4 a b d e

(2 a c) (2 b d) (2 a c) (3 a b e)

(2 a c) (1 b) (2 a b) (4 a b d e)

(2 b d) (1 e) (2 b c) (4 a b c d)

输出样例：

3

6

5

2 2 3 4

**思路解答**
使用solution来收集每道题的正确答案，使用score来记录每道题对应的分值，wrongCount记录题号对应错误的个数。输入分别处理正确答案和学生的解答。学生的解答每遍历一个跟正确答案比对并输出总分，最后利用最大错题数遍历出对应的题号。

```
#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
using namespace std;

int main() {
    char c;
    int n, m, p, q;
    cin>>n>>m;
    vector<set<char>> solution(m); // 正确的答案列表
    vector<int> score(m), wrongCount(m); // 题号对应的分数和题号对应的错误人数
    for(int i = 0; i < m; i++) {
        scanf("%d%d%d", &score[i], &p, &q);
        for(int j = 0; j < q; j++) {
            scanf(" %c", &c);
            solution[i].insert(c);
        }
    }
    for(int i = 0; i < n; i++) {
        int counter = 0;
        scanf("\n");
        for(int j = 0; j < m; j++) {
            if(j != 0) scanf(" ");
            scanf("(%d", &q);
            set<char> answer;
            for(int k = 0; k < q; k++) {
                scanf(" %c", &c);
                answer.insert(c);
            }
            scanf(")");
            if (answer == solution[j]) {
                counter += score[j];
            } else {
                wrongCount[j]++;
            }
        }
        printf("%d\n", counter);
    }
    int maxWrongCount = 0;
    for(int i = 0; i < m; i++) {
        if(wrongCount[i] > maxWrongCount) {
            maxWrongCount = wrongCount[i];
        }
    }
    if (maxWrongCount == 0) {
        printf("Too simple");
    } else {
        printf("%d", maxWrongCount);
        for(int i = 0; i < m; i++) {
            if(wrongCount[i] == maxWrongCount) {
                printf(" %d", i + 1);
            }
        }
    }
    return 0;
}

```
## 1061 判断题 (15分)
判断题的评判很简单，本题就要求你写个简单的程序帮助老师判题并统计学生们判断题的得分。

输入格式：
输入在第一行给出两个不超过 100 的正整数 N 和 M，分别是学生人数和判断题数量。第二行给出 M 个不超过 5 的正整数，是每道题的满分值。第三行给出每道题对应的正确答案，0 代表“非”，1 代表“是”。随后 N 行，每行给出一个学生的解答。数字间均以空格分隔。

输出格式：
按照输入的顺序输出每个学生的得分，每个分数占一行。

输入样例：

```
3 6
2 1 3 3 4 5
0 0 1 0 1 1
0 1 1 0 0 1
1 0 1 0 1 0
1 1 0 0 1 1
```

输出样例：

```
13
11
12
```

**思路解答**

跟1058很像，不过难度减小了

**代码**

```
#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, m, tmp;
    cin>>n>>m;
    vector<int> score(m), solution(m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &score[i]);
        if(i != m - 1) {
            scanf(" ");
        }
    }
    scanf("\n");
    for(int i = 0; i < m; i++) {
        scanf("%d", &solution[i]);
        if(i != m - 1) {
            scanf(" ");
        }
    }
    for(int i = 0; i < n; i++) {
        int couter = 0;
        scanf("\n");
        for(int j = 0; j < m; j++) {
            scanf("%d", &tmp);
            if (tmp == solution[j]) {
                couter += score[j];
            }
            if(j != m - 1) {
                scanf(" ");
            }
        }
        printf("%d", couter);
        if (i != n - 1) {
            printf("\n");
        }
    }
    return 0;
}
```









