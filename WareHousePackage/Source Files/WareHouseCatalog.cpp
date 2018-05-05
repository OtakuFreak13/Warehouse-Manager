#include "WareHouseCatalog.h"

WareHouseCatalog::WareHouseCatalog()
{
	loadFromFile();
}

void WareHouseCatalog::loadFromFile()
{
	string fileName = "WareHouseCatalog.txt"; // står i fromatet: id_A Catalog_A.txt truckCatalog_A.txt map_A.jpg
	ifstream fileReader(fileName);

	string id = "";
	string goodsCatalog = "";
	string truckCatalog = "";
	string map = "";

	while (fileReader >> id >> goodsCatalog >> truckCatalog >> map)
	{
		this->wareHouses.push_back(WareHouse(id, goodsCatalog, truckCatalog, map));
	}
	
	fileReader.close();
}

void WareHouseCatalog::setCurrentWareHouse(string id) 
{
	for (int i = 0; i < this->wareHouses.size(); i++)
	{
		if (wareHouses[i].getName() == id)
		{
			this->currentWareHouseIndex = i;
			break; // inte snyggt med break men är för trött för att komma på nått bättre
		}
	}
	
}

WareHouse* WareHouseCatalog::getCurrentWareHousePtr() 
{
	return &this->wareHouses[this->currentWareHouseIndex];
}