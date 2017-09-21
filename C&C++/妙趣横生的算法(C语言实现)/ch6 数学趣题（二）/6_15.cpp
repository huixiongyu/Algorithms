#include<iostream>
using namespace std;
void move(int n,char x,char y,char z)
{
	if(n==1)
		cout<<x<<"---->"<<z<<endl;
	else
	{			//63个盘子借助C针移动到B针，被借助的是放在函数第3个位置
		move(n-1,x,z,y);          // ，函数第四个参数，是最低的盘子要放下的地方,这一句是第63号盘子移到B盘 
		cout<<x<<"---->"<<z<<endl;// 最大号的盘子移动到C针 
		move(n-1,y,x,z);          //此时B针有63个盘子，要把第63号盘子移动到C针，当然要借助A针 
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

