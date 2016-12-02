#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
    FILE *dskr;
    int err=0;
    int i;
    float Var,Count;
	double ident=0;
	for(i=1;i<3;i++){
    dskr=fopen(argv[i],"r");
    fscanf(dskr,"%f",&Count);
	ident=ident+Count;
    fclose(dskr);}
	printf("%lf",ident);
  return 0;
}
