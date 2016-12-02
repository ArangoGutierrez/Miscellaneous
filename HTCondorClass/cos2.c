#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char** argv) {
double x;    	
x = atof(argv[1]);
double sen=pow(cos(x),2.0);
printf("%lf",sen);
return 0;
}
