
#include "Precompiled.h"

Circle::Circle(const std::vector<Vector2> InVertices)
{
	// 위치 정보를 받아 중심과 반지름의 값을 구하는 로직 ( 직접 구현할 것 )
	
	for (auto itr : InVertices) {
		Center += itr;
	}
	Center /=  InVertices.size();

	float maxDis = 0;
	for (auto itr : InVertices) {
		Vector2 nowDis = itr - Center;
		if (maxDis < nowDis.Size()) {
			maxDis = nowDis.Size();
		}
	}
	Radius = maxDis;


	
}
