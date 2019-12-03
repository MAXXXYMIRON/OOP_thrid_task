#include "Sponges.h"



Sponges::Sponges()
{
	TypeOfWater = "";
	WaterDepth = 1000;
	SurfaceType = "";
}

Sponges::Sponges(float waterDepth, string typeOfWater, string surfaceType)
{
	TypeOfWater = typeOfWater;
	SetWaterDepth(waterDepth);
	SurfaceType = surfaceType;
}

Sponges::Sponges(string name, float oldYear, string typeAnimal, string view, string typeFood, float waterDepth, string typeOfWater, string surfaceType) :
	Animals(name, oldYear, typeAnimal, view, typeFood)
{
	TypeOfWater = typeOfWater;
	SetWaterDepth(waterDepth);
	SurfaceType = surfaceType;
}

Sponges::~Sponges()
{
}


//������� ���
void Sponges::SetWaterDepth(float waterDepth)
{
	if (waterDepth <= 0) throw IncorrectDepthHabitat;
	WaterDepth = waterDepth;
}
//������� ���
float Sponges::GetWaterDepth()
{
	return WaterDepth;
}


//����� ���������
string Sponges::Habitat()
{
	return "�������������� �� ����� ������� ���� �� ���������� ���� � �� ����� ������������ ������ ������.";
}


//����� ��������������
string Sponges::GeneralCharacteristics()
{
	return "����� �� ����� ��������� ������ � �������, � ��������� ������� ��������� ������������� ��������� ������ � ��������� ������.\n �������� ������� ������������ � �����������.\n������ �����, � ����� ���������� �� �������������� ������������ ������������ �������� ��������, ������������ � ��������.";
}


//����� �����
string Sponges::LifeStyle()
{
	return "����� ������������ ����� �����.";
}


//��� �������
string Sponges::TypeBreath()
{
	return "������ ������� �����������, � ��������� �������������� ������ ����������� ���������� ������� (����� ����������� ����)";
}


//��� �����������
string Sponges::TypeBreeding()
{
	return "������������ ������� � �������� ������ (� ��� ����� � ������������ ���������� ����� � ������).";
}
