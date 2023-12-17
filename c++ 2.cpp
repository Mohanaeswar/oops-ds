#include<iostream>
using namespace std;
int area(int);
int area(int , int);
float area(float);
int main()
{
	cout<<"\nThe area of square: "<<area(8);
	cout<<"\nThe area of recatngle: "<<area(5,10);
	cout<<"\nThe area of circle: "<<area(5.56f);
	return 0;
}
int area(int side)
{
	return(side*side);
}
int area(int length, int breadth)
{
	return(length*breadth);
}
float area(float radius)
{
	return(3.14 * radius * radius);
}
