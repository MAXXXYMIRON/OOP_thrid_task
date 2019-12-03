#pragma once
#include "Animals.h"

//�������
class Mollusks : public Animals
{
public:
	Mollusks();
	Mollusks(string sink);
	Mollusks(string name, float oldYear, string typeAnimal, string view, string typeFood, string sink);
	~Mollusks();

	//��������
	string Sink;

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



