#pragma once
#include <string>

using namespace std;

#include "BikeList.h"
#include "MemberList.h"

/*
   클래스 이름 : Bike
   기능  : 회원이 자전거를 대여할 때 사용하는 control class로 아래 기능들을
   수행함
   1. RentBike : RentBike control class 생성
   2. rentBike() : 회원 id와 자전거 id를 가지고 자전거를 대여함
*/
class RentBike {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  BikeList& bikeList;
  MemberList& memberList;
  Member*& loggedInMember;

 public:
  RentBike(ifstream& in_fp, ofstream& out_fp, BikeList& bikeList,
           MemberList& memberList, Member*& loggedInMember);
  string rentBike(string userId, string bikeId);
};