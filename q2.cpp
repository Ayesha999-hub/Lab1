#include <iostream>
#include <cmath>
using namespace std;
class Point {
private:
    int x;
    int y;

public:
   
    Point(int newX, double newY) : x(newX), y(newY) {
    }

    
    double getX()  {
        return x;
    }

    double getY(){
        return y;
    }

    
    void setX(int X) {
        x = X;
    }

    void setY(int Y) {
        y = Y;
    }

    float distance(double X1, double Y1) {
        float dx = x - X1;
        float dy = y - Y1;
        return sqrt(dx * dx + dy * dy);
    }
};

int main() {
    
    Point point1(3.0,4.1);
    Point point2(7.3, 3.2);
    cout << "coordinates of point 1 : "<< point1.getX << point1.getY() <<endl;
    cout <<"coordinates of point 2 : "<< point2.getX()  << point2.getY() <<endl;

    double dist = point1.distance(point1.getX,point2.getY());
    cout << "Distance between points " << dist << endl;

    return 0;
}
