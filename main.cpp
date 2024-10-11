#include <stdio.h>
#include <string>
#include <iostream>


struct Vector3 {
public:
	Vector3() = default;

	~Vector3() = default;

public:

	int x ;
	int y ;
	int z ;

public:

	Vector3 operator+ (Vector3 other) {

		Vector3 result = {0,0,0};

		result.x += x + other.x;
		result.y += y + other.y;
		result.z += z + other.z;

		return result;
	}
}; 



int main()
{
	int num[2] = { 1,2 };
	int answer = 0;
	answer = num[0] + num[1];
	printf("åvéZåãâ ÇÕ%dÇ≈Ç∑ÅB", answer);

	
	Vector3 vector[2];

	vector[0].x = 1;
	vector[0].y = 2;
	vector[0].z = 3;
	vector[1].x = 4;
	vector[1].y = 5;
	vector[1].z = 6;
	
	vector[0] = vector[0] + vector[1];

	printf("x = %d y = %d z = %d", vector[0].x, vector[0].y, vector[0].z);
	

	return 0;
}