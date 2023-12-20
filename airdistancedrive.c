// use to run the different source file
#include<math.h>
#include<stdio.h>
// add the utils.h header to use our function which present in another source file or object file
#include "utils.h"
int main(){
 double airDistance;
 double originLatitude,originLongitude;
 double destinationLatitude,destinationLongitude;
 printf("Enter the Latitude and Longitude of Origin(latitude,longitude): ");
 scanf("%lf,%lf",&originLatitude,&originLongitude);
 printf("Enter the Latitude and Longitude of Destination(latitude,longitude): ");
 scanf("%lf,%lf",&destinationLatitude,&destinationLongitude);
 airDistance = getAirDistance(originLatitude,originLongitude,destinationLatitude,destinationLongitude);
 printf("Air Distance  = %0.2lf\n Km",airDistance);
 printf("\n");
 // take input from user 
 // i made flexible for user to give the value by itself
 double percentVelocity, time;
 printf("Enter the time observed it rest in year: ");
 scanf("%lf",&time);