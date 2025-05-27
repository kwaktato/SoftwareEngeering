#pragma once
#include <string>

#include "BikeList.h"

using namespace std;

class RentedBikeCollection {
 private:
  BikeList rentedBikeList;

 public:
  void addRentBike(Bike* bike);
  BikeList& listRentBikes();
};