
#include "Precompiled.h"

Circle::Circle(const std::vector<Vector2> InVertices)
{
	// ��ġ ������ �޾� �߽ɰ� �������� ���� ���ϴ� ���� ( ���� ������ �� )
	
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
