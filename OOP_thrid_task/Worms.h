#pragma once
#include "Animals.h"

//�����
class Worms : public Animals
{
	//�����
	float Length;
public:
	Worms();
	Worms(float length);
	Worms(string name, float oldYear, string typeAnimal, string view, string typeFood, float length);
	~Worms();

	float GetLength();
	void SetLength(float length);

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


