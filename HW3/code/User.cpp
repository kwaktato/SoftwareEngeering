#include "User.h"

User::User(string id, string pw, string phoneNum) : Member(id, pw) {
  this->phoneNum = phoneNum;
};

void User::rentBike(Bike* bike) { rentedBikeCollection.addRentBike(bike); };

BikeList& User::listRentBikes() {
  return rentedBikeCollection.listRentBikes();
};