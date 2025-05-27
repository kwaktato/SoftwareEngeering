#include "Bike.h"

#include <string>

using namespace std;

/*
   함수 이름 : Bike::Bike()
   기능  : Bike entity 생성자
   인자 : string id : 자전거의 id
         string name : 자전거의 제품명
   반환값    : 없음
*/
Bike::Bike(string id, string name) {
  this->bikeId = id;
  this->bikeName = name;
};

/*
   함수 이름 : Bike::getId()
   기능  : 자전거의 id를 반환
   인자 : 없음
   반환값    : 자전거의 id
*/
string Bike::getId() { return this->bikeId; }

/*
   함수 이름 : Bike::getName()
   기능  : 자전거의 name(제품명)을 반환
   인자 : 없음
   반환값    : 자전거의 제품명
*/
string Bike::getName() { return this->bikeName; }
