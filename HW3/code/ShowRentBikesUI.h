#pragma once
#include <fstream>
#include <iostream>
#include <string>

#include "BikeList.h"

using namespace std;

class ShowRentBikes;

class ShowRentBikesUI {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  ShowRentBikes* control;

 public:
  ShowRentBikesUI(ifstream& in_fp, ofstream& out_fp);
  void startInterface(BikeList& rentedBikeListt);
  void setControl(ShowRentBikes* control);
};
