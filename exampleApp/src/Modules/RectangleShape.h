#pragma once

#include "BaseShape.h"

class RectangleShape : public BaseShape {
public:
	void draw(); // override the draw function in BaseShape (this app)
	string getTypeName() const; // override the function to get the type name in BaseModule (ofxPlugin)
};