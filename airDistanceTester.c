// The Program used for to test the different function of different source file 
#include<stdio.h>
#include<math.h>
#include"utils.h"
#define DELTA 0.0001
int isClose(double a , double b){
    return (fabs(a - b) < DELTA);
}