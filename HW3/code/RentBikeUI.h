#pragma once
#include <fstream>
#include <iostream>
#include <string>

#include "RentBike.h"

using namespace std;

class RentBike;

/*
   클래스 이름 : RentBikeUI
   기능  : 자전거 대여하기 기능에 쓰이는 boundary class로 아래 기능들을 구현함
   1. RentBikeUI : RentBikeUI boundary class 생성
   2. startInterface(): 회원이 자전거를 대여할 수 있도록 UI를 띄움
   3. rentBike(): 회원이 자전거 id를 가지고 해당 자전거 대여
   4. setControl() : RentBikeUI(boundary class)의 control class를 지정
*/
class RentBikeUI {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  RentBike* control;
  string& userId;

 public:
  RentBikeUI(ifstream& in_fp, ofstream& out_fp, string& userId);
  void startInterface();
  void rentBike();
  void setControl(RentBike* control);
};
