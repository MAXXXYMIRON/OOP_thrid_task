#pragma once
#include "Animals.h"

//Черви
class Worms : public Animals
{
	//Длина
	float Length;
public:
	Worms();
	~Worms();

	float GetLength();
	void SetLength(float length);
};


