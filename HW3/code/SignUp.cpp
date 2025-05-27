#include "SignUp.h"

#include <string>

#include "SignUpUI.h"

using namespace std;

SignUp::SignUp(ifstream& in_fp, ofstream& out_fp, MemberList& memberList)
    : in_fp(in_fp), out_fp(out_fp), memberList(memberList) {
  SignUpUI boundary(in_fp, out_fp);
  boundary.setControl(this);
  boundary.startInterface();
};

bool SignUp::signup(string id, string pw, string phoneNum) {
  User* user = new User(id, pw, phoneNum);
  memberList.addNewMember(user);

  return true;
};