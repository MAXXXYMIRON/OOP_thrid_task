#pragma once
#include"Animals.h"


//Хордовые
class Chordate : public Animals
{
public:
	Chordate();
	Chordate(bool tail, bool gills, string skin, bool skeleton, string movement, string mainlandHabitat);
	Chordate(string name, float oldYear, string typeAnimal, string view, string typeFood, bool tail, bool gills, string skin, bool skeleton, string movement, string mainlandHabitat);
	~Chordate();

	//Наличие хвоста
	bool Tail;
	//Жаберные щели
	bool Gills;
	//Тип покрытия
	string Skin;
	//Наличие скeлета
	bool Skeleton;

	//Тип перемещения
	string Movement;
	
	//Материк обитания
	string MainlandHabitat;

	//Среда обиатания
	string Habitat() override;
	//Общая характеристика
	string GeneralCharacteristics() override;
	//Образ жизни
	string LifeStyle() override;
	//Тип дыхания
	string TypeBreath() override;
	//Тип размножения
	string TypeBreeding() override;
};

