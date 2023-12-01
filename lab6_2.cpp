#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg)
{
    double rad;
    rad = deg * M_PI/180;
    return rad;
}

double rad2deg(double rad)
{
    double deg;
    deg = rad * 180/M_PI;
    return deg;
}
double findXComponent(double l1,double l2,double rad1,double rad2)
{
    double x_comp;
    x_comp = (l1*cos(rad1))+(l2*cos(rad2));
    return x_comp;
}
double findYComponent(double l1,double l2,double rad1,double rad2)
{
    double y_comp;
    y_comp = (l1*sin(rad1))+(l2*sin(rad2));
    return y_comp;
}
double pythagoras(double xcomp,double ycomp)
{
    double final_l;
    final_l = sqrt(pow(xcomp,2)+pow(ycomp,2));
    return final_l;
}
void showResult(double result_l,double result_dir)
{
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << result_l << "\n";
    cout << "Direction of the resultant vector (deg) = " << result_dir << "\n";
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
