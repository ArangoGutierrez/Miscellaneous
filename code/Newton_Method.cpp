#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;
// Newton Method (Newton Rapson)

const long double pi = 3.14159265358979323846;// Defines pi

long double random_int(int tr)// random numbers 
{	
	time_t now; 
	time(&now);
	long double X=(tr+now),M = 2147483648,n;
	int a = 1103515245,c = 12345,i;
	for(i=1;i<1000;i++)
		{
		X = fmod ((a*X+c),M);// Linear congruence Method
		n = (X/(M-1.0));
		}  
	return n;
}
long double NM(long double y)// Newton Method function 
{	
	int i;
	long double x,xi=2*pi;
	for(i=1;i<6;i++)
		{
		x =(xi-((6*pi*(((3*xi+0.5*sin(2*xi))/(6*pi))-y))/(cos(2*xi)+3)));// Newton Method
		xi=x;
		}
	return x;
}
int main()
{
	int i;
	int nintervals=40;
	int nrolls=100000;
	int nstars=1000;
	int p[nintervals]={};
	long double y,fx,x,rad;
	for(i=1;i<nrolls;i++)
	{
	y=random_int(i);
	rad=NM(y);
	//cout << rad << endl;
	if (rad<(2*pi)) ++p[int(nintervals*rad/(2*pi))];
	}
	for (int i=0; i<nintervals; ++i) {
	cout << (180/pi)*2*pi*float(i)/nintervals << "-	" << (180/pi)*2*pi*float(i+1)/nintervals << ":		";
	cout << string(p[i]*nstars/nrolls,'*') << endl;
  }
	return 0;
}
