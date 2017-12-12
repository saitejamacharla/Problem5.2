#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define SEED 35791246

main(int argc, char* argv)
{
    int toss=0;
    double x,y;
    int i;
    int number_in_circle=0;
    double distance_squared;
    double pi;

    printf("Enter the number of tosses: ");
    scanf("%d",&toss);

    if(toss==0)
        printf("invalid tosses, enter number of tosses\n");


    /* initialize random numbers */
    srand(SEED);
    number_in_circle=0;
    for ( i=0; i<toss; i++) {
        x = (double)rand()/RAND_MAX;
        y = (double)rand()/RAND_MAX;
        distance_squared= x*x+y*y;
        if (distance_squared<=1) number_in_circle++;
    }
    pi=(double)number_in_circle/toss*4;
    printf("Number of tosses= %d , estimate of pi is %g \n",toss,pi);
}