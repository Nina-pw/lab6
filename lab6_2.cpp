#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double A){
    return A*M_PI/180;
}
double rad2deg(double B){
    return B*180/M_PI;
}
double findXComponent(double x1, double x2, double c1, double c2){
    return x1*cos(c1)+x2*cos(c2);
}
double findYComponent(double y1, double y2, double d1, double d2){
    return y1*sin(d1)+y2*sin(d2);
}
double pythagoras(double e1, double e2){
    return sqrt(pow(e1,2)+pow(e2,2));
}
void showResult(double f1, double f2){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
    cout << "Length of the resultant vector = " << f1 << "\n";
    cout << "Direction of the resultant vector (deg) = " << f2 << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}