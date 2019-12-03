#pragma once
#include "Animals.h"

//�������������
class Arthropods : public Animals
{
public:
	Arthropods();
	Arthropods(string respiratorySystem, string bodyStructure);
	Arthropods(string name, float oldYear, string typeAnimal, string view, string typeFood, string respiratorySystem, string bodyStructure);
	~Arthropods();

	//����������� �������
	string RespiratorySystem;
	//��������� ����
	string BodyStructure;

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


