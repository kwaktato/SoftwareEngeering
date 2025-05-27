#include "AddBikeUI.h"

#include <string>

using namespace std;

/*
   함수 이름 : AddBikeUI
   기능  : AddBikeUI boundary class 생성
   인자 : ifstream& in_fp : input.txt(사용자가 입력한 텍스트 읽기)
         ofstream& out_fp : output.txt(결과 출력)
   반환값    : 없음
*/
AddBikeUI::AddBikeUI(ifstream& in_fp, ofstream& out_fp)
    : in_fp(in_fp), out_fp(out_fp) {};

/*
   함수 이름 : AddBikeUI::startInterface()
   기능  : 관리자가 자전거를 등록할 수 있도록 UI를 띄움
   인자 : 없음
   반환값    : 없음
*/
void AddBikeUI::startInterface() {
  out_fp << "3.1. 자전거 등록" << endl;

  addNewBike();
};

/*
   함수 이름 : AddBikeUI::addNewBike()
   기능  : 관리자가 자전거 등록
   인자 : 없음
   반환값    : 없음
*/
void AddBikeUI::addNewBike() {
  string id, name;
  in_fp >> id >> name;

  if (control->addNewBike(id, name)) {
    out_fp << "> " << id << " " << name << endl << endl;
  }
};

/*
   함수 이름 : AddBikeUI::setControl()
   기능  : AddBikeUI(boundary class)의 control class를 지정
   인자 : AddBike* control : control class인 AddBike
   반환값    : 없음
*/
void AddBikeUI::setControl(AddBike* control) { this->control = control; };