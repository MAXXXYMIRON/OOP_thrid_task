#pragma once
#include "Animals.h"

//�����
class Sponges : Animals
{
public:
	Sponges();
	~Sponges();
	
	//��� ���
	virtual string TypeOfWater() = 0;
	//������� ���
	virtual string WaterDepth() = 0;
	//��� �����������
	virtual string SurfaceType() = 0;
};

