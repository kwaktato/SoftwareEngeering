#pragma once
#include <string>

#include "AddBikeUI.h"
#include "Bike.h"
#include "BikeList.h"

using namespace std;

/*
   클래스 이름 : AddBike
   기능	 : 관리자가 자전거를 등록할때 사용하는 control class로 아래 기능들을
   수행함
   1. AddBike : AddBike control class 생성
   2. addNewBike() : 관리자가 자전거를 등록할 때 사용하는 함수
*/
class AddBike {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  BikeList& bikeList;

 public:
  AddBike(ifstream& in_fp, ofstream& out_fp, BikeList& bikeList);
  bool addNewBike(string id, string name);
};