#include<iostream>
using namespace std;
void move(int n,char x,char y,char z)
{
	if(n==1)
		cout<<x<<"---->"<<z<<endl;
	else
	{			//63�����ӽ���C���ƶ���B�룬���������Ƿ��ں�����3��λ��
		move(n-1,x,z,y);          // ���������ĸ�����������͵�����Ҫ���µĵط�,��һ���ǵ�63�������Ƶ�B�� 
		cout<<x<<"---->"<<z<<endl;// ���ŵ������ƶ���C�� 
		move(n-1,y,x,z);          //��ʱB����63�����ӣ�Ҫ�ѵ�63�������ƶ���C�룬��ȻҪ����A�� 
	}
}


int main()
{
	int n;
	cout<<"input diskes number:\n";
	cin>>n;
	cout<<"The step to move "<<n<<" diskes:\n";
	move(n,'A','B','C');
    getchar();
    return 0;
}

