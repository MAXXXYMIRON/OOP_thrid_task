#pragma once
#include"Animals.h"


//��������
class Chordate : public Animals
{
public:
	Chordate();
	Chordate(bool tail, bool gills, string skin, bool skeleton, string movement, string mainlandHabitat);
	Chordate(string name, float oldYear, string typeAnimal, string view, string typeFood, bool tail, bool gills, string skin, bool skeleton, string movement, string mainlandHabitat);
	~Chordate();

	//������� ������
	bool Tail;
	//�������� ����
	bool Gills;
	//��� ��������
	string Skin;
	//������� ��e����
	bool Skeleton;

	//��� �����������
	string Movement;
	
	//������� ��������
	string MainlandHabitat;

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

