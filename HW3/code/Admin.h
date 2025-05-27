#pragma once
#include <string>

#include "Member.h"

using namespace std;

/*
   클래스 이름 : Admin : public Member
   기능  : 멤버 클래스의 subclass인 관리자(Admin) 클래스는 아래 기능들을 수행함
   1. Admin : Admin entity 생성
*/
class Admin : public Member {
 public:
  Admin(string id, string pw);
};