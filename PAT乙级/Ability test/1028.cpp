#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int count=0;
    string name,maxName,minName;
    int year,month,day,maxyear=0,maxmonth=0,maxday=0,minyear=9999,minmonth=9999,minday=9999;
    for(int i=0;i<N;i++)
    {
    	cin>>name;
    	scanf("%d/%d/%d",&year,&month,&day);
    	if( ((year==2014&&month==9&&day<=6) || (year==2014&&month<9) || (year<2014) ) && ( (year==1814&&month==9&&day>=6) || (year==1814&&month>9) || (year>1814)         )  )
    	{
    		count++;
    		if(	(year>maxyear) ||(year==maxyear&&month>maxmonth)  || (year==maxyear&&month==maxmonth&&day>maxday))
    		{
    			maxyear=year;
    			maxmonth=month;
    			maxday=day;
    			maxName=name;
			}
			if(  (year<minyear) || (year==minyear&&month<minmonth) || (year==minyear&&month==minmonth&&day<minday)	)
			{
				minyear=year;
				minmonth=month;
				minday=day;
				minName=name;
			}
		}
	}
	cout<<count<<" ";
	if(count!=0)
		cout<<minName<<" "<<maxName;
    getchar();
    return 0;
}

