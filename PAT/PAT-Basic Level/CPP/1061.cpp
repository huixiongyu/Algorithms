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