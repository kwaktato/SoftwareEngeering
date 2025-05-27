#pragma once
#include <fstream>
#include <iostream>
#include <string>

#include "Logout.h"
#include "Member.h"

using namespace std;

class Logout;

/*
   클래스 이름 : LogoutUI
   기능  : 로그아웃 기능에 쓰이는 boundary class로 아래 기능들을 수행함
   1. LogoutUI : LogoutUI boundary class 생성
   2. startInterface(): 멤버가 로그아웃할 수 있도록 UI를 띄움
   3. logout(): 멤버가 로그아웃할 수 있음
   4. setControl() : LogoutUI(boundary class)의 control class를 지정
*/
class LogoutUI {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  Logout* control;
  string& loggedInMemberId;

 public:
  LogoutUI(ifstream& in_fp, ofstream& out_fp, string& loggedInMemberId);
  void startInterface();
  void logout();
  void setControl(Logout* control);
};
