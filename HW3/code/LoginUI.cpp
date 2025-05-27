#include "LoginUI.h"

#include <string>

using namespace std;

/*
   함수 이름 : LoginUI::LoginUI()
   기능  : LoginUI boundary class 생성
   인자 : ifstream& in_fp  : input.txt(사용자가 입력한 텍스트 읽기)
         ofstream& out_fp : output.txt(결과 출력)
   반환값    : 없음
*/
LoginUI::LoginUI(ifstream& in_fp, ofstream& out_fp)
    : in_fp(in_fp), out_fp(out_fp) {};

/*
함수 이름 : AddBikeUI::startInterface()
기능  : 멤버가 로그인할 수 있도록 UI를 띄움
인자 : 없음
반환값    : 없음
*/
void LoginUI::startInterface() {
  out_fp << "2.1. 로그인" << endl;

  login();
};

/*
   함수 이름 : LoginUI::login()
   기능  : 사용자가 로그인
   인자 : 없음
   반환값    : 없음
*/
void LoginUI::login() {
  string id, pw;
  in_fp >> id >> pw;

  if (control->login(id, pw)) {
    out_fp << "> " << id << " " << pw << endl << endl;
  }
};

/*
   함수 이름 : LoginUI::setControl()
   기능  : LoginUI(boundary class)의 control class를 지정
   인자 : Login* control : control class인 Login
   반환값    : 없음
*/
void LoginUI::setControl(Login* control) { this->control = control; };
