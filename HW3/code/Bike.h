#pragma once
#include <string>

using namespace std;

/*
   클래스 이름 : Bike
   기능  : 자전거 entity로 아래 기능들을 수행함
   1. Bike : Bike entity 생성
   2. getId() : 자전거의 id 반환
   3. getName() : 자전거의 제품명 반환
*/
class Bike {
 private:
  string bikeId;
  string bikeName;

 public:
  Bike(string id, string name);
  string getId();
  string getName();
};