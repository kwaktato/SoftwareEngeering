#include "LogoutUI.h"

#include <string>

using namespace std;

/*
   함수 이름 : LogoutUI::LogoutUI
   기능  : LogoutUI boundaary class 생성
   인자 : ifstream& in_fp  : input.txt(사용자가 입력한 텍스트 읽기)
         ofstream& out_fp : output.txt(결과 출력)
         string& loggedInMemberId   : 현재 로그인한 멤버의 id
   반환값    : 없음
*/
LogoutUI::LogoutUI(ifstream& in_fp, ofstream& out_fp, string& loggedInMemberId)
    : in_fp(in_fp), out_fp(out_fp), loggedInMemberId(loggedInMemberId) {};

/*
함수 이름 : LogoutUI::startInterface()
기능  : 멤버가 로그아웃할 수 있도록 UI를 띄움
인자 : 없음
반환값    : 없음
*/
void LogoutUI::startInterface() {
  out_fp << "2.2. 로그아웃" << endl;

  logout();
};

/*
   함수 이름 : LogoutUI::logout()
   기능  : 사용자가 로그아웃
   인자 : 없음
   반환값    : 없음
*/
void LogoutUI::logout() {
  out_fp << "> " << loggedInMemberId << endl << endl;

  control->logout();
};

/*
   함수 이름 : LogoutUI::setControl()
   기능  : LogoutUI(boundary class)의 control class를 지정
   인자 : Logout* control : control class인 Logout
   반환값    : 없음
*/
void LogoutUI::setControl(Logout* control) { this->control = control; };
