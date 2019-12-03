#include "Worms.h"



Worms::Worms()
{
	Length = 1;
}

Worms::Worms(float length)
{
	SetLength(length);
}

Worms::Worms(string name, float oldYear, string typeAnimal, string view, string typeFood, float length) :
	Animals(name, oldYear, typeAnimal, view, typeFood)
{
	SetLength(length);
}

Worms::~Worms()
{
}


float Worms::GetLength()
{
	return Length;
}
void Worms::SetLength(float length)
{
	if (length <= 0) throw IncorrectLengthWorm;
	Length = length;
}

//����� ���������
string Worms::Habitat()
{

}


//����� ��������������
string Worms::GeneralCharacteristics()
{

}


//����� �����
string Worms::LifeStyle()
{

}


//��� �������
string Worms::TypeBreath()
{

}


//��� �����������
string Worms::TypeBreeding()
{

}
