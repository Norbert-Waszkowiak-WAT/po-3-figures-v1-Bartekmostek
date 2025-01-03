#ifndef UNTITLED_GROUP_H
#define UNTITLED_GROUP_H
#include <string>
#include <vector>
#include "point.h"
#include "line.h"
#include "triangle.h"
#include "quadrilateral.h"

class Group {
private:
    std::vector<Line> lines;
    std::vector<Triangle> triangles;
    std::vector<Quadrilateral> quadrilaterals;
public:
    Group();

    Group(const Group &other);

    bool equals(Group &other);

    void remove(Line line);

    void remove(Triangle triangle);

    void remove(Quadrilateral quadrilateral);

    void add(Line line);

    void add(Triangle triangle);

    void add(Quadrilateral quadrilateral);

    void flip();

    void move(double x, double y);

    std::string toString();

    double getSurface();
};
#endif