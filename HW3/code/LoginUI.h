#pragma once
#include <fstream>
#include <iostream>
#include <string>

#include "Login.h"

using namespace std;

class Login;

/*
   클래스 이름 : LoginUI
   기능  : 로그인하기 기능에 쓰이는 boundary class로 아래 기능들을 수행함
   1. LoginUI : LoginUI boundary class 생성
   2. startInterface(): 사용자가 로그인할 수 있도록 UI를 띄움
   3. login(): 사용자가 로그인할 수 있음
   4. setControl() : LoginUI(boundary class)의 control class를 지정
*/
class LoginUI {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  Login* control;

 public:
  LoginUI(ifstream& in_fp, ofstream& out_fp);
  void startInterface();
  void login();
  void setControl(Login* control);
};