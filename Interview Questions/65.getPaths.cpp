#include <iostream>
#include <climits>
using namespace std;

/*
    Imagine a robot sitting on the upper left corner of an X by Y grid. 
    The robot can only move in two directions: right and down.
     How many possible paths are there for the robot to go from (0,0) to (X,Y)?


    Imagine certain spots are "off limits," such that the robot cannot step on them.
    Design an algorithm to find a path for the robot from the top left to the bottom
    right
*/

Point paths[INT_MAX];

bool getPaths(int x, int y){
    Point* p = new Point(x,y);
    path.push_back(p);
    if(x==0 && y==0) return true;

    boolean suc = false;
    if(x>=1 && isFree(x-1,y)){
        suc = getPaths(x-1, y)
    }
    if(y>=1 && isFree(x, y-1)){
        suc = getPaths(x,y);
    }
    if(suc){
        path.push_back(p);
    }

    return suc;
}