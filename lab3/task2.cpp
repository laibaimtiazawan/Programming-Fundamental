#include<iostream>
using namespace std;
int main()
{
	double x1=2.0;
	double y1=3.0;
	double x2=4.0;
	double y2=5.0;
	double squared_distance;
	squared_distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	cout<<"the squared distance between the points is:"<<squared_distance;  
}