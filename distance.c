#include<math.h>
// use the utils laibray which i made
#include"utils.h"
// i write a function which return distance value
double getAirDistance(double originLatitude,double originLongitude,
                     double destinationLatitude,double destinationLongitude){
    // use self maded degreesToRadians Function convert degrees to radian which present in object file                   
    originLatitude = degreesToRadians(originLatitude);
    originLongitude = degreesToRadians(originLongitude);
     destinationLatitude = degreesToRadians(destinationLatitude);
    destinationLongitude = degreesToRadians(destinationLongitude);
    double delta = destinationLongitude - originLongitude;
    float const R = 6371;
    // spherical law
    double distance = acos(sin(originLatitude) * sin(destinationLatitude) + cos(originLatitude) * cos(destinationLatitude) *cos(delta)) * R;
    // return distance
    return distance;
}