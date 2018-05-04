#ifndef WARE_HOUSE
#define WARE_HOUSE

#include "Map.h"
#include "GoodsCatalog.h"
#include "TruckCatalog"
#include <string>

using namespace std;

class WareHouse 
{
private:
	string id; // Ska vi ha både namn och id eller bara namn som funkar som id?
	string goodsCatalogFileName;// kanske inte behövs
	string truckCatalogFileName;// kanske inte behövs
	string mapFileName;// kanske inte behövs
public:
	WareHouse(string id, string goodsCatalogFileName, string truckCatalogFileName, string mapFileName);
	string getName();

};

#endif // !WARE_HOUSE
