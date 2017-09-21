#include<iostream>
using namespace std;

bool match(int i,int j,int k,char wife[])
{
	if(wife[i]=='X')	return false;
	if(wife[k]=='X')	return false;
	if(wife[k]=='Z')	return false;
	return true;
}

int main()
{
	char husband[3]={'A','B','C'},wife[3]={'X','Y','Z'};
	int i,j,k;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			for(k=0;i<3;k++)
				if(i!=j && i!=k && j!=k)
				{
					if(match(i,j,k,wife))
					{
						cout<<"husband   wife"<<endl;
						cout<<"A--"<<wife[i]<<endl;
						cout<<"B--"<<wife[j]<<endl;
						cout<<"C--"<<wife[k]<<endl;
					}
				}
    getchar();
    return 0;
}

