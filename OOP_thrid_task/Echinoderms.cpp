#include "Echinoderms.h"



Echinoderms::Echinoderms()
{
	NumberRay = 0;
	Sizes = 1;
	TypeOfRay = "";
}


Echinoderms::Echinoderms(float numberRay, float sizes, string typeOfRay)
{
	SetNumberRay(numberRay);
	SetSizes(sizes);
	TypeOfRay = typeOfRay;
}
Echinoderms::Echinoderms(string name, float oldYear, string typeAnimal, string view, string typeFood, float numberRay, float sizes, string typeOfRay) :
	Animals(name, oldYear, typeAnimal, view, typeFood)
{
	SetNumberRay(numberRay);
	SetSizes(sizes);
	TypeOfRay = typeOfRay;
}

Echinoderms::~Echinoderms()
{
}

void Echinoderms::SetNumberRay(float numberRay)
{
	if (numberRay < 0) throw IncorrectNumberRay;
}
float Echinoderms::GetNumberRay()
{
	return NumberRay;
}

void Echinoderms::SetSizes(float sizes)
{
	if (sizes <= 0) throw IncorrectSizesEchinoderms;
	Sizes = sizes;
}
float Echinoderms::GetSizes()
{
	return Sizes;
}

//����� ���������
string Echinoderms::Habitat()
{
	return "������� ����� ������ �� ������� ��� �� �������� � ����������� �� ���������� ������.";
}


//����� ��������������
string Echinoderms::GeneralCharacteristics()
{
	return "��� �������� ��������� ���������� ���������� � ������ ����������� ��������� ����,\n� �� �����, ��� �� ������� � ������������-������������.";
}


//����� �����
string Echinoderms::LifeStyle()
{
	return "�� ��������� ��������� �������� ����, ��� ��� �� �������� ������������ ������� ������ ��������� ����.\n�������� ������������ � ����������� (��������������) ������ ����.";
}


//��� �������
string Echinoderms::TypeBreath()
{
	return "� ���� ��������� ���� �������, � ������� ������� ������� ���� � ������ �����, ����������� ����������� �������";
}


//��� �����������
string Echinoderms::TypeBreeding()
{
	return "����������� ��������� � �������������� ��������";
}
