#pragma once

#include <string>
#include <vector>

#include "Bike.h"
#include "BikeList.h"

using namespace std;

/*
   클래스 이름 : Member
   기능  : member entity로 아래 기능들을 수행함
   1. Member : Member entity 생성
   2. getId() : 멤버의 id 반환
   3. getPw() : 멤버의 pw 반환
   4. rentBike() : 사용자가 자전거 대여할 때 사용하는 함수
   5. listRentBikes() : 시용자가 대여한 자전거 리스트 반환
*/
class Member {
 private:
  string memberId;
  string pw;

 public:
  Member(string id, string pw);
  string getId();
  string getPw();

  virtual void rentBike(Bike* bike);
  virtual BikeList& listRentBikes();
};