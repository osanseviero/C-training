#include <iostream>
using namespace std;

/*
     Given two squares on a two-dimensional plane, find a line that would cut these two squares in half. 
     Assume that the top and the bottom sides of the square run parallel to the x-axis.

     Note: this classes are not complete. Missing initialization and point class
*/


class Square{

    /* Returns a point in the middle of the square */
    Point::middle(){
        return new Point((this->left+this->right)/2.0, (this->top+this->bottom)/2.0);
    }

    Point::extend(Point mid1, Point mid2, double size){
        // Find direction from mid2 to mid1
        double xdir = mid1.x < mid2.x ? -1 : 1;
        double ydir = mid1.y < mid2.y ? -1 : 1;

        // Same x
        if(mid1.x == mid2.x){
            return new Point(mid1.x, mid1.y+ydir*size/2.0);
        }

        double slope = (mid1.y-mid2.y)/(mid1.x-mid2.x);
        double x1 = 0;
        double y1 = 0;

        if(abs(slope)==1){
            x1 = mid1.x + xdir*size/2.0;
            y1 = mid1.y + ydir*size/2.0;
        }
        else if(abs(slope)<1){
            x1 = mid1.x + xdir*size/2.0;
            y1 = slope * (x-mid1.x) + mid1.y;
        }
        else{
            y1 = mid1.y + ydir*size/2.0;
            x1 = (y1-mid1.y)/slope + mid1.x;
        }
        return new Point(x1,y1);
    }

};

class Line{
    cut(Square other){
        Point p1 = extend(this->middle(),other.middle(), this->size);
        Point p1 = extend(this->middle(),other.middle(), this->size*-1);
        Point p1 = extend(this->middle(),other.middle(), other.size);
        Point p1 = extend(this->middle(),other.middle(), -1*other.size);

        Point start = p1;
        Point end = p1;

        Point[] points = {p2, p3, p4};
        for (int i = 0; i < 3; i++) {
            if (points[i].x < start.x || (points[i].x == start.x && points[i].y < start.y))
                start = points[i];
             else if (points[i].x > end.x ||(points[i].x == end.x && points[i].y > end.y))
                end = points[i];
        }
    
    return new Line(start, end);
    }

};



int main(){


    return 0;
}