#include <iostream>
#include <cmath>
using namespace std;

/*
 Given two lines on a Cartesian plane, determine whether the two lines would
intersect
*/


class Line{
    public: 
        double slope;
        double yintercept;
        double epsilon;

        Line(double s, double y){
            slope = s;
            yintercept = y;
            epsilon = 0.001;
        }

        bool intersect(Line * line2){
            return abs(slope-line2->slope) > epsilon || abs(yintercept-line2->yintercept) < epsilon;
        }


};


int main(){
    Line * l1 = new Line(5,0);
    Line * l2 = new Line(5,8);
    Line * l3 = new Line(6,0);

    cout <<l1->intersect(l2) << endl;
    cout <<l1->intersect(l3) << endl;
    cout <<l2->intersect(l3) << endl;



    return 0;
}