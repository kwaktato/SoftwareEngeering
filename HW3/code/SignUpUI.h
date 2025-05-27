#pragma once
#include <fstream>
#include <iostream>
#include <string>

#include "SignUp.h"

using namespace std;

class SignUp;

class SignUpUI {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  SignUp* control;

 public:
  SignUpUI(ifstream& in_fp, ofstream& out_fp);
  void startInterface();
  void signup();
  void setControl(SignUp* control);
};
