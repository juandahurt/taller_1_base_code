#include "Triangle.h"
#include "Circle.h"

Triangle::Triangle(): Circle(3) {}

Triangle::~Triangle() {}

void Triangle::Draw() {
    this->Circle::Draw();
}
