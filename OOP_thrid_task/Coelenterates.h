#pragma once
#include "Animals.h"

//����������������
class Coelenterates : public Animals
{
public:
	Coelenterates();
	Coelenterates(string typeSymetry);
	Coelenterates(string name, float oldYear, string typeAnimal, string view, string typeFood, string typeSymetry);
	~Coelenterates();

	//��� ���������
	string TypeSymetry;

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


