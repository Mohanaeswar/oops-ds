#include<iostream>
using namespace std;
inline float sum(float x,float y)
{
	return(x+y);
}
inline float sub(float x, float y)
{
	return(x-y);
}
inline float mul(float x, float y)
{
	return(x*y);
}
inline double div(double x,double y)
{
	return(x/y);
}
int main()
{
	float x,y;
	cout<<"\nEnter the two numbers:";
	cin>>x>>y;
	cout<<"\nAddition:"<<sum(x,y);
	cout<<"\nSubtration:"<<sub(x,y);
	cout<<"\nMultiplication:"<<mul(x,y);
	cout<<"\nDivison:"<<div(x,y);
}
