#pragma once
#include "Animals.h"

//������
class Bryozoans : public Animals
{
public:
	Bryozoans();
	Bryozoans(string typeZooids, string typeGroupZooids);
	Bryozoans(string name, float oldYear, string typeAnimal, string view, string typeFood, string typeZooids, string typeGroupZooids);
	~Bryozoans();
	
	//��� �������
	string TypeZooids;
	//��� ������ �������
	string TypeGroupZooids;

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


