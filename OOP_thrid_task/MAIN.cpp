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
		Worms EarthWorm = Worms("�������� �����", 0.5, "��������������", "��������� �����", "�������� ������������� ���������", 10);
		cout << EarthWorm.Name << endl;
		cout << EarthWorm.GetOldYear() << " ���" << endl;
		cout << EarthWorm.TypeAnimal << endl;
		cout << EarthWorm.View << endl;
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
		cout << JellyFish.View << endl;
		cout << JellyFish.TypeFood << endl;
		cout << JellyFish.Habitat() << endl;
		cout << JellyFish.GeneralCharacteristics() << endl;
		cout << JellyFish.LifeStyle() << endl;
		cout << JellyFish.TypeBreath() << endl;
		cout << JellyFish.TypeBreeding() << endl;
		cout << JellyFish.TypeSymetry << endl;
		cout << endl << endl;

		Sponges BasketOfVenus = Sponges("�������� ������", 420000000, "��������������", "������������ �����", "�������� ���������� � ����������", 450, "�������", "��������� ���� ��������� � ��������");
		cout << BasketOfVenus.Name << endl;
		cout << BasketOfVenus.GetOldYear() << " ���" << endl;
		cout << BasketOfVenus.TypeAnimal << endl;
		cout << BasketOfVenus.View << endl;
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
		cout << Plumatella.View << endl;
		cout << Plumatella.TypeFood << endl;
		cout << Plumatella.Habitat() << endl;
		cout << Plumatella.GeneralCharacteristics() << endl;
		cout << Plumatella.LifeStyle() << endl;
		cout << Plumatella.TypeBreath() << endl;
		cout << Plumatella.TypeBreeding() << endl;
		cout << Plumatella.TypeZooids << endl;
		cout << Plumatella.TypeGroupZooids << endl;
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