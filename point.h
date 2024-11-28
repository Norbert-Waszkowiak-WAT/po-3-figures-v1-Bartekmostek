#ifndef UNTITLED_POINT_H
#define UNTITLED_POINT_H
#include <iostream>
#include <string>

class Point{
private:
    double x, y;

public:
    Point(double x, double y);
    bool equals(Point &other);
    double getX();
    double getY();
    void flip();
    void move(double x, double y);
    std::string toString();
};

#endif //POINT_h