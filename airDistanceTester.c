// The Program used for to test the different function of different source file 
#include<stdio.h>
#include<math.h>
#include"utils.h"
#define DELTA 0.0001
int isClose(double a , double b){
    return (fabs(a - b) < DELTA);
}
int main(){
    int failed = 0;
    int passed = 0;
    // test cases for the function degree to radians 
    double latitude = 50.0; // take argument with 50 
    double expected = 0.872665;
    double returnedValue = (degreesToRadians(latitude)); // the argument latitude value copy to the function parameter 
    if(isClose(returnedValue,expected) ){
     printf("PASSED\n"); // test passed
     passed++;
    }
    else{
     printf("Failed: degreeToRadians returned %lf, Expected %lf \n",returnedValue, expected);
     failed++; // test failed
   
    }
      // same for other 2 test case just change value
    latitude = 150.0;
    expected = 2.617994;
    returnedValue = (degreesToRadians(latitude));
    if(isClose(returnedValue, expected)){
     printf("PASSED\n");
     passed++;
    }
    else{
     printf("Failed: degreeToRadians returned %lf, Expected %lf \n",returnedValue, expected);
     failed++;
   
    }