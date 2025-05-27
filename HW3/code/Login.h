#pragma once
#include <string>

#include "LoginUI.h"
#include "Member.h"
#include "MemberList.h"

using namespace std;

/*
   클래스 이름 : Login
   기능	 : 멤버가 로그인할 때 사용하는 control class로 아래 기능들을
   수행함
   1. Login : Login control class 생성
   2. login() : 멤버가 로그인할 때 사용하는 함수
*/
class Login {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  MemberList& memberList;
  Member*& loggedInMember;

 public:
  Login(ifstream& in_fp, ofstream& out_fp, MemberList& memberList,
        Member*& loggedInMember);
  bool login(string id, string pw);
};