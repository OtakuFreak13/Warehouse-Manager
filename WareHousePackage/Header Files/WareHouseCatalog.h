#ifndef WARE_HOUSE_CATALOG
#define WARE_HOUSE_CATALOG

#include "WareHouse.h"
#include <fstream>
#include <vector>

using namespace std;

class WareHouseCatalog 
{
private:
	void loadFromFile(); // Loads all warehouses and concerning info from a file to a vector
	vector<WareHouse> wareHouses;
	int currentWareHouseIndex;
public:
	WareHouseCatalog();
	void setCurrentWareHouse(string id);
	//TODO ska vi ha en wareHouselista i form av vector? Ass� bara namn som visas n�r man v�ljer warehouses fr�n menyn
	WareHouse *getCurrentWareHousePtr();
};




#endif // !WARE_HOUSE_CATALOG
