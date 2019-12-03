#include "Chordate.h"



Chordate::Chordate()
{
	Tail = true;
	Gills = false;
	Skin = "";
	Skeleton = true;
	Movement = "";
	MainlandHabitat = "";
}

Chordate::Chordate(bool tail, bool gills, string skin, bool skeleton, string movement, string mainlandHabitat)
{
	Tail = tail;
	Gills = gills;
	Skin = skin;
	Skeleton = skeleton;
	Movement = movement;
	MainlandHabitat = mainlandHabitat;
}

Chordate::Chordate(string name, float oldYear, string typeAnimal, string view, string typeFood, bool tail, bool gills, string skin, bool skeleton, string movement, string mainlandHabitat) :
	Animals(name, oldYear, typeAnimal, view, typeFood)
{
	Tail = tail;
	Gills = gills;
	Skin = skin;
	Skeleton = skeleton;
	Movement = movement;
	MainlandHabitat = mainlandHabitat;
}

Chordate::~Chordate()
{
}

//����� ���������
string Chordate::Habitat()
{
	return "���� ���(����, ������, �������, �����, ����, �������, ����)";
}


//����� ��������������
string Chordate::GeneralCharacteristics()
{
	return "��� ������������� ��������, ��� ������� ���������� ������� ��������������� ������� ������� � ���� �����, ������� � ������ ���� ���������� �������������.";
}


//����� �����
string Chordate::LifeStyle()
{
	return "����� ��������� ����� �����.";
}


//��� �������
string Chordate::TypeBreath()
{
	return "� ������ ���� �����.\n� �������� ���� �������� ���� ������� ������ � ���������, � �������� ��� ����������� � �����.";
}


//��� �����������
string Chordate::TypeBreeding()
{
	return "����������� �������.";
}
