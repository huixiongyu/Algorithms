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