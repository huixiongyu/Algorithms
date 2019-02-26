#include<iostream>
#include<cmath>
using namespace std;

long long a,b,c,d;
long long gcd(long long x,long long y){
	return y == 0 ? x : gcd(y, x%y); 
}
void fn(long long m,long long n){
	if(m*n == 0){
		printf("%s", n==0 ? "Inf" : "0");
		return ;
	}
	bool flag = ((m < 0 && n> 0) || (m > 0) && (n < 0));
	m = abs(m);
	n = abs(n);
	long long x = m/n;
	if(flag) printf("(-");
	if(x!=0) printf("%lld", x);
	if(m % n == 0){
		if(flag) printf(")");
		return ;
	}
	if(x != 0) printf(" ");
	m = m - x * n;
	long long t= gcd(m, n); 
	m = m /t; n = n / t;
	printf("%lld/%lld",m,n);
	if(flag) cout<< ")";
}

int main(){
	scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
	fn(a, b);printf(" + "); fn(c, d); printf( " = ");fn(a*d + b*c, b*d);printf("\n");
	fn(a, b);printf(" - "); fn(c, d); printf( " = ");fn(a*d - b*c, b*d);printf("\n");
	fn(a, b);printf(" * "); fn(c, d); printf( " = ");fn(a*c, b*d);printf("\n");
	fn(a, b);printf(" / "); fn(c, d); printf( " = ");fn(a*d, b*c);printf("\n");
	return 0;
}
