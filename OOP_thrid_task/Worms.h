#pragma once
#include "Animals.h"

//�����
class Worms : public Animals
{
	//�����
	float Length;
public:
	Worms();
	~Worms();

	float GetLength();
	void SetLength(float length);
};


