#include<iostream>
using namespace std;

void Nicoqish(int N) 
{
	int sum=0;
	for(int i=1;i<N*N*N;i=i+2)
		for(int j=i;j<N*N*N;j=j+2)
		{
			sum=sum+j;
			if(sum==N*N*N)		//�Ѿ��õ����ʵı��ʽ���˳����� 
			{
				cout<<N*N*N<<"="<<i<<"+"<<i+2<<"...+"<<j<<endl;
				return;
			}
			if(sum>N*N*N)	//���δ�i�����Ͳ�������ʽ������ѭ�� 
			{
				sum=0;
				break;
			}
		}
		
	cout<<"Error!"<<endl;		//��ȫû�п��Ա�ʾ�ı��ʽ��������� 
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

