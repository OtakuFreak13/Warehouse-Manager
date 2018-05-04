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
	string id; // Ska vi ha b�de namn och id eller bara namn som funkar som id?
	string goodsCatalogFileName;// kanske inte beh�vs
	string truckCatalogFileName;// kanske inte beh�vs
	string mapFileName;// kanske inte beh�vs
public:
	WareHouse(string id, string goodsCatalogFileName, string truckCatalogFileName, string mapFileName);
	string getName();

};

#endif // !WARE_HOUSE
