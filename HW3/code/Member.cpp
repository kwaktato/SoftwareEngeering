#include "Member.h"

#include <string>

using namespace std;

/*
   함수 이름 : Member::Member
   기능  : Member entity 생성
   인자 : string id : 멤버의 id
         string 비밀번호 : 멤버의 비밀번호
   반환값    : 없음
*/
Member::Member(string id, string pw) {
  this->memberId = id;
  this->pw = pw;
};

/*
   함수 이름 : Member::getId()
   기능  : 멤버의 id를 반환
   인자 : 없음
   반환값    : 멤버의 id
*/
string Member::getId() { return this->memberId; }

/*
   함수 이름 : Member::getPw()
   기능  : 멤버의 pw(비밀번호)를 반환
   인자 : 없음
   반환값    : 멤버의 비밀번호
*/
string Member::getPw() { return this->pw; }

void Member::rentBike(Bike* bike) {}

BikeList& Member::listRentBikes() {}