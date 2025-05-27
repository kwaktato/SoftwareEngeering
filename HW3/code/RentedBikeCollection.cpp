#include "RentedBikeCollection.h"

#include <string>

#include "Bike.h"
#include "BikeList.h"

using namespace std;

void RentedBikeCollection::addRentBike(Bike* bike) {
  rentedBikeList.addNewBike(bike);
};

BikeList& RentedBikeCollection::listRentBikes() { return rentedBikeList; }