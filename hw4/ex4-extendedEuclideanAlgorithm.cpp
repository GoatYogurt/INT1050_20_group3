#include <iostream>

using namespace std;
int main()
{
	int m,a,r,q;
	cout<<"nhap vao so m:";
	cin>>m;
	cout<<"nhap vao so a:";
	cin>>a;
	int y,y0=0,y1=1;
	while(a>0)
	{
		r=m%a;
		if(r==0) break;
		else
		{
		q=m/a;
		y=y0-y1*q;
		m=a;
		a=r;
		y0=y1;
		y1=y;
		}
	}
	if(a>1)
	cout<<"a khong co so nghich dao";
	else
	cout<<"nghich dao cua a la :"<<y;
	return 0;
}
