#include<iostream>
#include<stdio.h>
using namespace std;
struct li
{
	double omega;//k 
	double b;
};
struct li lm={0,0};
void fit(double xx[],double yy[])
{
	lm.omega=(yy[0]-yy[1])/(xx[0]-xx[1]);
	lm.b=yy[0]-xx[0]*lm.omega;
	return ;
}
double pr(double xt)
{
	double yt;
	yt=lm.omega*xt+lm.b;
	return yt;
}
int main()
{
	double x[2],y[2];
	cout<<"Input x1 y1 x2 y2: ";
	cin>>x[0]>>y[0]>>x[1]>>y[1];
	fit(x,y);
	printf("omega=%lf b=%lf",lm.omega,lm.b);
	cout<<endl<<endl;
	double a,b;
	cin>>a;
	b=pr(a);
	printf("a=%.2lf平米 b=%.2lf万元",a,b);
	return 0;
}
