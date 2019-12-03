#pragma once
#include "Animals.h"

//���������
class Echinoderms : public Animals
{
	//���-�� �����
	float NumberRay;
	//�������
	float Sizes;
public:
	Echinoderms();
	Echinoderms(float numberRay, float sizes, string typeOfRay);
	Echinoderms(string name, float oldYear, string typeAnimal, string view, string typeFood, float numberRay, float sizes, string typeOfRay);
	~Echinoderms();

	//��� �����
	string TypeOfRay;

	void SetNumberRay(float numberRay);
	float GetNumberRay();

	void SetSizes(float sizes);
	float GetSizes();

	//����� ���������
	string Habitat() override;
	//����� ��������������
	string GeneralCharacteristics() override;
	//����� �����
	string LifeStyle() override;
	//��� �������
	string TypeBreath() override;
	//��� �����������
	string TypeBreeding() override;
};

