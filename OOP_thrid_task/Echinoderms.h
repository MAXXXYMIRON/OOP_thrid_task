#pragma once
#include "Animals.h"

//���������
class Echinoderms : Animals
{
	//���-�� �����
	float NumberRay;
	//�������
	float Sizes;


public:
	Echinoderms();
	~Echinoderms();

	//��� �����
	string TypeOfRay;

	void SetNumberRay(float numberRay);
	float GetNumberRay();

	void SetSizes(float sizes);
	float GetSizes();
};

