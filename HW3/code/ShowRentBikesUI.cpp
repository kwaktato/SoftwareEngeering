#include "ShowRentBikesUI.h"

#include <string>

#include "Bike.h"
#include "BikeList.h"

using namespace std;

ShowRentBikesUI::ShowRentBikesUI(ifstream& in_fp, ofstream& out_fp)
    : in_fp(in_fp), out_fp(out_fp) {};

void ShowRentBikesUI::startInterface(BikeList& rentedBikeList) {
  out_fp << "5.1. 자전거 대여 리스트" << endl;

  for (Bike* bike : rentedBikeList) {
    out_fp << "> " << bike->getId() << " " << bike->getName() << endl;
  }

  out_fp << endl;
};

void ShowRentBikesUI::setControl(ShowRentBikes* control) {
  this->control = control;
};