#pragma once
#include <fstream>
#include <iostream>
#include <string>

#include "AddBike.h"

using namespace std;

class AddBike;

/*
   클래스 이름 : AddBikeUI
   기능  : 자전거 등록하기 기능에 쓰이는 boundary class로 아래 기능들을 수행함
   1. AddBikeUI : AddBikeUI boundary class 생성
   2. startInterface(): 관리자가 자전거를 등록할 수 있도록 UI를 띄움
   3. addNewBike(): 관리자가 새 자전거를 등록할 수 있음
   4. setControl() : AddBikeUI(boundary class)의 control class를 지정
*/
class AddBikeUI {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  AddBike* control;

 public:
  AddBikeUI(ifstream& in_fp, ofstream& out_fp);
  void startInterface();
  void addNewBike();
  void setControl(AddBike* control);
};
