#include "Animals.h"



Animals::Animals()
{
	Name = "";
	SetOldYear(1);
	TypeAnimal = "";
	Species = "";
	TypeFood = "";
}

Animals::Animals(string name, float oldYear, string typeAnimal, string view, string typeFood)
{
	Name = name;
	SetOldYear(oldYear);
	TypeAnimal = typeAnimal;
	Species = view;
	TypeFood = typeFood;
}

Animals::~Animals()
{
}

float Animals::GetOldYear()
{
	return OldYear;
}
void Animals::SetOldYear(float oldYear)
{
	if (oldYear <= 0) IncorrectNumberOldYear;
	OldYear = oldYear;
}



