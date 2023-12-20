
#include<math.h>
// Function change degree to Radians
double degreesToRadians(double degree){
    degree =  (degree * M_PI)/180;
    return degree;
}

//Timedelegation.c
 // i made lorentzTimeDilation() function for to find time
 #include<math.h>
 double lorentzTimeDilation(double t, double percentC){
    double T;
    T = t/sqrt(1.0 - pow(percentC, 2));
    return T;
 }