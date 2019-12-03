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

//Среда обиатания
string Echinoderms::Habitat()
{
	return "Обитают почти всегда на морском дне от литорали и практически до предельных глубин.";
}


//Общая характеристика
string Echinoderms::GeneralCharacteristics()
{
	return "Для взрослых иглокожих характерна радиальная и обычно пятилучевая симметрия тела,\nв то время, как их личинки — билатерально-симметричные.";
}


//Образ жизни
string Echinoderms::LifeStyle()
{
	return "Не переносят изменений солёности воды, так как не способны регулировать солевой состав жидкостей тела.\nОбладают способностью к регенерации (восстановлению) частей тела.";
}


//Тип дыхания
string Echinoderms::TypeBreath()
{
	return "В коже иглокожих есть выросты, в которые заходит полость тела — кожные жабры, выполняющие дыхательную функцию";
}


//Тип размножения
string Echinoderms::TypeBreeding()
{
	return "Большинство иглокожих — раздельнополые животные";
}
