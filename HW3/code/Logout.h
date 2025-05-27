#pragma once
#include <string>

#include "LogoutUI.h"
#include "Member.h"

using namespace std;

/*
   클래스 이름 : Logout
   기능  : 멤버가 로그아웃할 때 사용하는 control class로 아래 기능들을
   수행함
   1. Logout : Logout control class 생성
   2. logout() : 사용자가 로그아웃할 때 사용하는 함수
*/
class Logout {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  Member*& loggedInMember;

 public:
  Logout(ifstream& in_fp, ofstream& out_fp, Member*& loggedInMember);
  void logout();
};