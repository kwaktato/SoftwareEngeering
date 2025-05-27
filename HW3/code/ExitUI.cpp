#include "ExitUI.h"

#include <string>

using namespace std;

/*
   함수 이름 : ExitUI::ExitUI()
   기능  : ExitUI boundary class 생성
   인자 : ifstream& in_fp  : input.txt(사용자가 입력한 텍스트 읽기)
         ofstream& out_fp : output.txt(결과 출력)
   반환값    : 없음
*/
ExitUI::ExitUI(ifstream& in_fp, ofstream& out_fp)
    : in_fp(in_fp), out_fp(out_fp) {};

/*
함수 이름 : ExitUI::startInterface()
기능  : 사용자가 시스템 접속을 종료할 수 있도록 UI를 띄움
인자 : 없음
반환값    : 없음
*/
void ExitUI::startInterface() {
  out_fp << "6.1. 종료" << endl;

  exit();
};

/*
   함수 이름 : ExitUI::exit()
   기능  : 사용자가 접속 종료
   인자 : 없음
   반환값    : 없음
*/
void ExitUI::exit() { control->exit(); };

/*
   함수 이름 : AddBikeUI::setControl()
   기능  : AddBikeUI(boundary class)의 control class를 지정
   인자 : AddBike* control : control class인 AddBike
   반환값    : 없음
*/
void ExitUI::setControl(Exit* control) { this->control = control; };
