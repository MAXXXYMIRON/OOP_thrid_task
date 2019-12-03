#include "Arthropods.h"



Arthropods::Arthropods()
{
	RespiratorySystem = "";
	BodyStructure = "";
}


Arthropods::Arthropods(string respiratorySystem, string bodyStructure)
{
	RespiratorySystem = respiratorySystem;
	BodyStructure = bodyStructure;
}
Arthropods::Arthropods(string name, float oldYear, string typeAnimal, string view, string typeFood, string respiratorySystem, string bodyStructure) :
	Animals(name, oldYear, typeAnimal, view, typeFood)
{
	RespiratorySystem = respiratorySystem;
	BodyStructure = bodyStructure;
}

Arthropods::~Arthropods()
{
}


//Среда обиатания
string Arthropods::Habitat()
{
	return "Членистоногие обитают в морских, пресноводных, наземных и воздушных экосистемах";
}


//Общая характеристика
string Arthropods::GeneralCharacteristics()
{
	return "Тип первичноротых животных, включающий насекомых, ракообразных, паукообразных и многоножек.\nК представителям этого типа относится 2/3 всех видов живых существ на Земле.";
}


//Образ жизни
string Arthropods::LifeStyle()
{
	return "Ведут различный образ жизни";
}


//Тип дыхания
string Arthropods::TypeBreath()
{
	return "У водных членистоногих - жабры, у сухопутных и некоторых водных членистоногих органами дыхания служат легкие и трахеи.";
}


//Тип размножения
string Arthropods::TypeBreeding()
{
	return "Размножение у членистоногих только половое.";
}
