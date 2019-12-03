#pragma once
#include "Animals.h"

//�����
class Sponges : public Animals
{
	//�������
	float WaterDepth;
public:
	Sponges();
	Sponges(float waterDepth, string typeOfWater, string surfaceType);
	Sponges(string name, float oldYear, string typeAnimal, string view, string typeFood, float waterDepth, string typeOfWater, string surfaceType);
	~Sponges();
	
	//��� ���
	string TypeOfWater;

	//������� ���
	void SetWaterDepth(float waterDepth);
	//������� ���
	float GetWaterDepth();

	//��� �����������
	string SurfaceType;

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

