#include "WareHouse.h"

WareHouse::WareHouse(string id, string goodsCatalogFileName, string truckCatalogFileName, string mapFileName)
{
	this->id = id;
	this->goodsCatalogFileName = goodsCatalogFileName;
	this->truckCatalogFileName = truckCatalogFileName;
	this->mapFileName = mapFileName;
	GoodsCatalog(this->goodsCatalogFileName);
	TruckCatalog(this->truckCatalogFileName); //Provisorisk då jag inte vet att hur truck Catalog ser ut
	Map(this->mapFileName);
}

string WareHouse::getName()
{
	return this->id;
}