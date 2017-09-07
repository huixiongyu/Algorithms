#include<iostream>
#define TCK 100
using namespace std;

int main()
{
    int C1,C2;
    cin>>C1>>C2;
    int sum=C2-C1+50;
    int t=sum/TCK;
    int h,m,s;
    h=t/3600;
    t=t%3600;
    m=t/60;
    s=t%60; 
    printf("%02d:%02d:%02d",h,m,s);
    getchar();
    return 0;
}

