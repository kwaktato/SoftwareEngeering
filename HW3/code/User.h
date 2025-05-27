#pragma once
#include <string>
#include <vector>

#include "Member.h"
#include "RentedBikeCollection.h"

using namespace std;

class User : public Member {
 private:
  string phoneNum;
  RentedBikeCollection rentedBikeCollection;

 public:
  User(string id, string pw, string phoneNum);
  virtual void rentBike(Bike* bike) override;
  virtual BikeList& listRentBikes() override;
};