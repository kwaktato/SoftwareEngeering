#pragma once
#include <string>
#include <vector>

#include "Bike.h"

/*
   클래스 이름 : BikeList
   기능  : 관리자가 등록한 자전거들을 담아두는 list로 아래 기능들을 수행함
   1. addNewBike() : 자전거 list에 새로운 자전거 등록
   2. getBikeDetails() : 해당 자전거의 정보를 반환
   3. begin() : list의 시작 지점
   4. end() : list의 끝 지점
   5. sortById() : 자전거 list를 정렬
*/
class BikeList {
 private:
  vector<Bike*> bikeList;

 public:
  void addNewBike(Bike* bike);
  Bike* getBikeDetails(string bikeId);

  auto begin() { return bikeList.begin(); }
  auto end() { return bikeList.end(); }

  void sortById();
};