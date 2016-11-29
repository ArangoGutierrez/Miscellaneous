#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

#define pi 3.14159265358979323846

int main()
{
	clock_t t;
	t=clock();
	double tc;
	tc = (((float)t)/CLOCKS_PER_SEC);
	long double X = fmod ((pi*t)+(pi/tc),(pi/tc));/*Seed*/
	double M = 2147483648,n;
	int a = 1103515245,c=12345,i;
	for(i=1;i<1000;i++)
	{
		X = fmod ((a*X+c),M);// Linear congruence
		n = (X/(M-1));
	double te = (3*pi/2)+(0.017453293*(n)*pow(-1,int (n*10)));
		printf("%f	%f\n",te*(180/pi),n);
		}  
	return n;
}
