#pragma once
#include <string>

#include "MemberList.h"
#include "SignUpUI.h"
#include "User.h"

using namespace std;

class SignUp {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  MemberList& memberList;

 public:
  SignUp(ifstream& in_fp, ofstream& out_fp, MemberList& memberList);
  bool signup(string id, string pw, string phoneNum);
};