#pragma once
#include <fstream>
#include <iostream>
#include <string>

#include "Exit.h"

using namespace std;

class Exit;

/*
   클래스 이름 : ExitUI
   기능  : 종료하기 기능에 쓰이는 boundary class로 아래 기능들을 수행함
   1. ExitUI : ExitUI boundary class 생성
   2. startInterface() : 사용자가 시스템을 종료할 수 있도록 UI를 띄움
   3. exit() : 사용자가 시스템 접속 종료할 수 있음
   4. setControl() : ExitUI(boundary class)의 control class를 지정
*/
class ExitUI {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  Exit* control;

 public:
  ExitUI(ifstream& in_fp, ofstream& out_fp);
  void startInterface();
  void exit();
  void setControl(Exit* control);
};
