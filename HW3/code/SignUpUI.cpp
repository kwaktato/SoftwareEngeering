#include "SignUpUI.h"

#include <string>

using namespace std;

SignUpUI::SignUpUI(ifstream& in_fp, ofstream& out_fp)
    : in_fp(in_fp), out_fp(out_fp) {};

void SignUpUI::startInterface() {
  out_fp << "1.1. 회원가입" << endl;

  signup();
};

void SignUpUI::signup() {
  string id, pw, phoneNum;
  in_fp >> id >> pw >> phoneNum;

  if (control->signup(id, pw, phoneNum)) {
    out_fp << "> " << id << " " << pw << " " << phoneNum << endl << endl;
  }
};

void SignUpUI::setControl(SignUp* control) { this->control = control; };