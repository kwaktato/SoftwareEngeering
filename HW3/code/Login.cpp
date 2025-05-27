#include "Login.h"

#include <string>

#include "LoginUI.h"

using namespace std;

/*
   함수 이름 : Login::Login
   기능  : 로그인 기능에 쓰이는 control class
   인자 : ifstream& in_fp  : input.txt(사용자가 입력한 텍스트 읽기)
         ofstream& out_fp : output.txt(결과 출력)
         MemberList& memberList : 멤버 list
         Member*& loggedInMember   : 현재 로그인한 멤버
   반환값: 없음
*/
Login::Login(ifstream& in_fp, ofstream& out_fp, MemberList& memberList,
             Member*& loggedInMember)
    : in_fp(in_fp),
      out_fp(out_fp),
      memberList(memberList),
      loggedInMember(loggedInMember) {
  LoginUI boundary(in_fp, out_fp);
  boundary.setControl(this);
  boundary.startInterface();
};

/*
   함수 이름 : Login::login()
   기능  : 멤버가 id와 pw로 로그인
   인자 : string id : 멤버의 id
         string pw : 멤버의 pw
   반환값    : bool(로그인 성공/실패)
*/
bool Login::login(string id, string pw) {
  Member* member = memberList.findMemberById(id);

  if (member != nullptr && member->getPw() == pw) {
    loggedInMember = member;
    return true;
  };

  return false;
}