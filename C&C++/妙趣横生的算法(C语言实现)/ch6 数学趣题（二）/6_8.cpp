#include<iostream>
using namespace std;

void Nicoqish(int N) 
{
	int sum=0;
	for(int i=1;i<N*N*N;i=i+2)
		for(int j=i;j<N*N*N;j=j+2)
		{
			sum=sum+j;
			if(sum==N*N*N)		//已经得到合适的表达式，退出函数 
			{
				cout<<N*N*N<<"="<<i<<"+"<<i+2<<"...+"<<j<<endl;
				return;
			}
			if(sum>N*N*N)	//本次从i起的求和不满足表达式，跳出循环 
			{
				sum=0;
				break;
			}
		}
		
	cout<<"Error!"<<endl;		//完全没有可以表示的表达式，输出错误！ 
}

int main()
{
	int num;
	cout<<"Please input an integer to verify Nicoqish Law" <<endl;
	cin>>num;
	Nicoqish(num);
    getchar();
    return 0;
}

