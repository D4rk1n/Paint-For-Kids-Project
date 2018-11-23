#pragma once
#include "CFigure.h"
class CTriangle :
	public CFigure
{
private:
	Point Corner1;	
	Point Corner2;
	Point Corner3;
	float area(int x1, int y1, int x2, int y2, int x3, int y3);
public:
	CTriangle(Point, Point, Point, GfxInfo FigureGfxInfo);
	virtual void Draw(Output* pOut) const;
	virtual bool IsInside(int x, int y);
};

