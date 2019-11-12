#ifndef CIRCLE_H
#define CIRCLE_H
#include"shape.h"
#include ".../scr/examples/10_module/01_shape/shapes.h"
#include "point.h"

class Circle : public Shape 
{
public:
	Circle(wxDC* dc, Point p, int r) : Shape(dc), point(p), radius(r) {}
	void draw() override;

private:
	Point point;
	int radius;
};

#endif // !CIRCLE_H
