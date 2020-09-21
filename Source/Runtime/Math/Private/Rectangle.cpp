#include "Precompiled.h"

Rectangle::Rectangle(const std::vector<Vector2> InVertices)
{
	
	// 직접 구현해보시오.
	for (auto itr : InVertices) {
		if (itr.X < Min.X) {
			Min.X = itr.X;
		}
		if (itr.Y < Min.Y) {
			Min.Y = itr.Y;
		}
		if (itr.X > Max.X) {
			Max.X = itr.X;
		}
		if (itr.Y > Max.Y) {
			Max.Y = itr.Y;
		}
	}
}