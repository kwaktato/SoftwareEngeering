#pragma once
#include <string>

#include "ExitUI.h"
#include "Member.h"

using namespace std;

/*
   클래스 이름 : Exit
   기능  : 사용자 접속 종료 시 사용하는 control class로 아래 기능들을 수행함
   1. Exit: Exit control class 생성
   2. exit() : 시스템 접속 종료
*/
class Exit {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  Member*& loggedInMember;

 public:
  Exit(ifstream& in_fp, ofstream& out_fp, Member*& loggedInMember);
  void exit();
};