 // i made lorentzTimeDilation() function for to find time
 #include<math.h>
 double lorentzTimeDilation(double t, double percentC){
    double T;
    T = t/sqrt(1.0 - pow(percentC, 2));
    return T;
 }
 