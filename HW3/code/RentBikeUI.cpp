#include "RentBikeUI.h"

#include <string>

using namespace std;

/*
   함수 이름 : RentBikeUI::RentBikeUI
   기능  : RentBikeUI boundary class 생성
   인자 : ifstream& in_fp  : input.txt(사용자가 입력한 텍스트 읽기)
         ofstream& out_fp : output.txt(결과 출력)
         string& userId   : 자전거를 대여하려는 회원의 id
   반환값    : 없음
*/
RentBikeUI::RentBikeUI(ifstream& in_fp, ofstream& out_fp, string& userId)
    : in_fp(in_fp), out_fp(out_fp), userId(userId) {};

/*
함수 이름 : RentBikeUI::startInterface()
기능  : 회원이 자전거를 대여할 수 있도록 UI를 띄움
인자 : 없음
반환값    : 없음
*/
void RentBikeUI::startInterface() {
  out_fp << "4.1. 자전거 대여" << endl;

  rentBike();
};

/*
   함수 이름 : RentBikeUI::rentBike()
   기능  : 회원이 자전거 대여
   인자 : 없음
   반환값    : 없음
*/
void RentBikeUI::rentBike() {
  string bikeId;
  in_fp >> bikeId;

  string name = control->rentBike(userId, bikeId);

  out_fp << "> " << bikeId << " " << name << endl << endl;
};

/*
   함수 이름 : RentBikeUI::setControl()
   기능  : RentBikeUI(boundary class)의 control class를 지정
   인자 : RentBike* control : control class인 RentBike
   반환값    : 없음
*/
void RentBikeUI::setControl(RentBike* control) { this->control = control; };