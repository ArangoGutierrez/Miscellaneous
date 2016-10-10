#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
// Monte-Carlo for RTE
// Arango, C. Arguelles, A.
// QuanTIC-CIBioFi

const long double pi = 3.14159265358979323846;// Defines pi

/*random numbers Function*/
double random_int()
{	
	clock_t t;
	t=clock();
	double tc;
	tc = (((float)t)/CLOCKS_PER_SEC);
	long double X = fmod((pi*t)+(pi/tc),(pi/tc)),M = 2147483648,n;
	int a = 1103515245,c=12345,i;
	for(i=1;i<5;i++)
	{
		X = fmod ((a*X+c),M);// Linear congruence
		n = (X/(M-1));
		}  
	return n;
}
/* Newton Method function for Rayleigh Scattering*/
long double NM(long double y) 
{	
	int i;
	long double teta,ti=2*pi;
	for(i=1;i<5;i++)
		{
		teta =(ti-((6*pi*(((3*ti+0.5*sin(2*ti))/(6*pi))-y))/(cos(2*ti)+3)));
		ti=teta;
		}
	return teta;//In Radians [0,2*pi)
}
int main()
{
	double x,y,l,te,vx,vy,dg;
	int f,t,i,h;
	double la=5.;//lambda
	double r=100.0;//Atmosphere-Exosphere 10000Km in m
	const int nrolls=11;  // number of experiments
 	const int nintervals=1000; // number of intervals
 	int p[nintervals]={};
 	int n[nintervals]={};
	for(t=1;t<nrolls;t++)
		{
		x=0;
		y=0;
		h=1;
			do{
			cout<<x<<"	"<<y<<endl;	
			x += vx;
			y += vy;
			te = fmod (te + NM(random_int()),(2*pi));
			l = (-1.0/la)*log(1.0-random_int());
			vx = l*cos(te);
			vy = l*sin(te);
			h++;
			}while(((x*x)+(y*y)<(r*r)));
	/*if(((x/r)>0.0)&&((x/r)<1))		++p[int(nintervals*(x/r))];
	else if(((x/r)<0.0)&&((x/r)>-1)) 	++n[int(nintervals*(-x/r))];
			}
	for(i=1;i<nintervals;i++)
	{
	cout<<-i<<"	"<<n[i]<<endl;
	}
	for(i=1;i<nintervals;i++)
	{
	cout<<i<<"	"<<p[i]<<endl;*/
	}
	return 0;
}
