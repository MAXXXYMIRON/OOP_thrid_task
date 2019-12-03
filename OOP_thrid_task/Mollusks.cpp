#include "Mollusks.h"



Mollusks::Mollusks()
{
	Sink = "";
}

Mollusks::Mollusks(string sink)
{
	Sink = sink;
}
Mollusks::Mollusks(string name, float oldYear, string typeAnimal, string view, string typeFood, string sink) :
	Animals(name, oldYear, typeAnimal, view, typeFood)
{
	Sink = sink;
}

Mollusks::~Mollusks()
{
}


//Среда обиатания
string Mollusks::Habitat()
{
	return "Моллюски распространены по всему земному шару и встречаются как на суше, так и в морях и океанах(особенно в прибрежной зоне)";
}


//Общая характеристика
string Mollusks::GeneralCharacteristics()
{
	return "Наиболее общими характеристиками моллюсков можно считать отсутствие сегментации и билатеральную симметрию.";
}


//Образ жизни
string Mollusks::LifeStyle()
{
	return "Моллюски — многочисленная и разнообразная группа животных, и их образы жизни также сильно различаются";
}


//Тип дыхания
string Mollusks::TypeBreath()
{
	return "Дыхательная система представлена перистыми кожистыми адаптивными жабрами — ктенидиями.";
}


//Тип размножения
string Mollusks::TypeBreeding()
{
	return "Моллюски могут быть как гермафродитами, так и раздельнополыми.";
}
