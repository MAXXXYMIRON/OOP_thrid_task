#include "Animals.h"

#include "Worms.h"
#include "Coelenterates.h"
#include "Sponges.h"
#include "Bryozoans.h"
#include "Arthropods.h"
#include "Mollusks.h"
#include "Echinoderms.h"
#include "Chordate.h"


void main()
{
	setlocale(0, "");

	try
	{
		Worms EarthWorm = Worms("�������� �����", 0.1, "��������������", "��������� �����", "�������� ������������� ���������", 10);
		cout << EarthWorm.Name << endl;
		cout << EarthWorm.GetOldYear() << " ���" << endl;
		cout << EarthWorm.TypeAnimal << endl;
		cout << EarthWorm.Species << endl;
		cout << EarthWorm.TypeFood << endl;
		cout << EarthWorm.Habitat() << endl;
		cout << EarthWorm.GeneralCharacteristics() << endl;
		cout << EarthWorm.LifeStyle() << endl;
		cout << EarthWorm.TypeBreath() << endl;
		cout << EarthWorm.TypeBreeding() << endl;
		cout << EarthWorm.GetLength() << "��" << endl;
		cout << endl << endl;

		Coelenterates JellyFish = Coelenterates("����������", 100, "��������������", "����������", "�������� ���������� � ����������", "����� ���������� ��������");
		cout << JellyFish.Name << endl;
		cout << JellyFish.GetOldYear() << " ���" << endl;
		cout << JellyFish.TypeAnimal << endl;
		cout << JellyFish.Species << endl;
		cout << JellyFish.TypeFood << endl;
		cout << JellyFish.Habitat() << endl;
		cout << JellyFish.GeneralCharacteristics() << endl;
		cout << JellyFish.LifeStyle() << endl;
		cout << JellyFish.TypeBreath() << endl;
		cout << JellyFish.TypeBreeding() << endl;
		cout << JellyFish.TypeSymetry << endl;
		cout << endl << endl;

		Sponges BasketOfVenus = Sponges("�������� ������", 420000000, "��������������", "������������ �����", "�������� ����������������", 450, "�������", "��������� ���� ��������� � ��������");
		cout << BasketOfVenus.Name << endl;
		cout << BasketOfVenus.GetOldYear() << " ���" << endl;
		cout << BasketOfVenus.TypeAnimal << endl;
		cout << BasketOfVenus.Species << endl;
		cout << BasketOfVenus.TypeFood << endl;
		cout << BasketOfVenus.Habitat() << endl;
		cout << BasketOfVenus.GeneralCharacteristics() << endl;
		cout << BasketOfVenus.LifeStyle() << endl;
		cout << BasketOfVenus.TypeBreath() << endl;
		cout << BasketOfVenus.TypeBreeding() << endl;
		cout << BasketOfVenus.TypeOfWater << " - ��� ���" << endl;
		cout << BasketOfVenus.SurfaceType << " - ��� ����������� ��������" << endl;
		cout << BasketOfVenus.GetWaterDepth() << "� - ������� ��������" << endl;
		cout << endl << endl;

		Bryozoans Plumatella = Bryozoans("���������", 100000, "��������������", "������������", "���� ������ �������� � ������", "������������� ���� ������������� ������ �������", "������� ������ � ����� ������");
		cout << Plumatella.Name << endl;
		cout << Plumatella.GetOldYear() << " ���" << endl;
		cout << Plumatella.TypeAnimal << endl;
		cout << Plumatella.Species << endl;
		cout << Plumatella.TypeFood << endl;
		cout << Plumatella.Habitat() << endl;
		cout << Plumatella.GeneralCharacteristics() << endl;
		cout << Plumatella.LifeStyle() << endl;
		cout << Plumatella.TypeBreath() << endl;
		cout << Plumatella.TypeBreeding() << endl;
		cout << Plumatella.TypeZooids << endl;
		cout << Plumatella.TypeGroupZooids << endl;
		cout << endl << endl;

		Arthropods Scorpion = Arthropods("��������", 7, "���������", "�������������", "�����. ����������, ���������, ��������, ������� � �������", "����������� ������� - ������������ ������", "���� ������� �� ����������� � �������� ������");
		cout << Scorpion.Name << endl;
		cout << Scorpion.GetOldYear() << " ���" << endl;
		cout << Scorpion.TypeAnimal << endl;
		cout << Scorpion.Species << endl;
		cout << Scorpion.TypeFood << endl;
		cout << Scorpion.Habitat() << endl;
		cout << Scorpion.GeneralCharacteristics() << endl;
		cout << Scorpion.LifeStyle() << endl;
		cout << Scorpion.TypeBreath() << endl;
		cout << Scorpion.TypeBreeding() << endl;
		cout << Scorpion.RespiratorySystem << endl;
		cout << Scorpion.BodyStructure << endl;
		cout << endl << endl;

		Mollusks Tridacna = Mollusks("��������", 200, "�����������", "������������� ��������", "� ������ ������� ������������, ������� ������ ��������.", "�������� ������� �� ���� ���������, ������������ ���� � ���� ������");
		cout << Tridacna.Name << endl;
		cout << Tridacna.GetOldYear() << " ���" << endl;
		cout << Tridacna.TypeAnimal << endl;
		cout << Tridacna.Species << endl;
		cout << Tridacna.TypeFood << endl;
		cout << Tridacna.Habitat() << endl;
		cout << Tridacna.GeneralCharacteristics() << endl;
		cout << Tridacna.LifeStyle() << endl;
		cout << Tridacna.TypeBreath() << endl;
		cout << Tridacna.TypeBreeding() << endl;
		cout << Tridacna.Sink << endl;
		cout << endl << endl;

		Echinoderms Valvatid = Echinoderms("���������", 20, "��������������", "������� ������", "�������� ����������", 5, 75, "���� - �������, �������, �� ����� ����������� ����������� ��������");
		cout << Valvatid.Name << endl;
		cout << Valvatid.GetOldYear() << " ���" << endl;
		cout << Valvatid.TypeAnimal << endl;
		cout << Valvatid.Species << endl;
		cout << Valvatid.TypeFood << endl;
		cout << Valvatid.Habitat() << endl;
		cout << Valvatid.GeneralCharacteristics() << endl;
		cout << Valvatid.LifeStyle() << endl;	
		cout << Valvatid.TypeBreath() << endl;
		cout << Valvatid.TypeBreeding() << endl;
		cout << Valvatid.GetNumberRay() << " �����	" << endl;
		cout << Valvatid.GetSizes() << "�� ������" << endl;
		cout << Valvatid.TypeOfRay << endl;
		cout << endl << endl;

		Chordate Tiger = Chordate("����", 15, "�������������", "��������� � ��������", "���� ����, ������ �����, ����� � ������", 
			true, false, "��������� ������ ���������, �������� ������", true, "������������� �� �����", "����	");
		cout << Tiger.Name << endl;
		cout << Tiger.GetOldYear() << " ���" << endl;
		cout << Tiger.TypeAnimal << endl;
		cout << Tiger.Species << endl;
		cout << Tiger.TypeFood << endl;
		cout << Tiger.Habitat() << endl;
		cout << Tiger.GeneralCharacteristics() << endl;
		cout << Tiger.LifeStyle() << endl;
		cout << Tiger.TypeBreath() << endl;

		if (Tiger.Tail)
			cout << "����� ����" << endl;
		else
			cout << "������ ���" << endl;

		if (Tiger.Gills)
			cout << "�������� ���� ����" << endl;
		else
			cout << "�������� ����� ���" << endl;

		cout << Tiger.Skin << endl;

		if (Tiger.Skeleton)
			cout << "������ ����" << endl;
		else
			cout << "������� ���" << endl;

		cout << Tiger.Movement << endl;
		cout << Tiger.MainlandHabitat << endl;
		cout << endl << endl;

	}
	catch (ERRORS e)
	{
		switch (e)
		{
		case IncorrectNumberOldYear:
			cout << "������������ ���������� ��� ���������" << endl;
			break;
		case IncorrectLengthWorm:
			cout << "������������ ����� �����" << endl;
			break;
		case IncorrectDepthHabitat:
			cout << "������������ ������� ��������" << endl;
			break;
		case IncorrectSizesEchinoderms:
			cout << "������������ ������ ����������" << endl;
			break;
		case IncorrectNumberRay:
			cout << "������������ ���������� ����� ����������" << endl;
			break;
		default:
			break;
		}
	}

	system("pause");
}