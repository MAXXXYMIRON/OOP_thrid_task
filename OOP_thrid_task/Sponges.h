#pragma once
#include "Animals.h"

//�����
class Sponges : public Animals
{
	//�������
	float WaterDepth;
public:
	Sponges();
	~Sponges();
	
	//��� ���
	string TypeOfWater;

	//������� ���
	void SetWaterDepth(float waterDepth);
	//������� ���
	float GetWaterDepth();

	//��� �����������
	string SurfaceType;
};

