#include <iostream>
using namespace std;

class Circle{
public:
    void SetCenter(double newX, double newY){
        x = newX;
        y = newY;
    }
    void SetRadius(double newRadius){
        radius = newRadius;
    }
    double GetRadius(){
        return radius;
    }
    double GetPerimeter(){
        return 2.0 * radius * 3.14;
    }
    double GetArea(){
        return radius * radius * 3.14;
    }
    double* GetCenter(){
        double* center = new double[2];
        center[0] = x;
        center[1] = y;
        return center;
    }
private:
    double radius;
    double perimeter; // 2 * radius * PI
    double area; // radius * radius * PI
    double x, y;
};

int main(){

    Circle c1;
    c1.SetCenter(3.1, 7.6);
    c1.SetRadius(5.2);
    cout << c1.GetPerimeter() << " " << c1.GetArea() << endl;

    Circle c2;
    c2.SetCenter(54.2, 12.3);
    c2.SetRadius(10.3);
    cout << c2.GetPerimeter() << " " << c2.GetArea() << endl;

    return 0;
}