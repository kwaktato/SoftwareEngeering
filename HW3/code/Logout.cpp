#include "Logout.h"

#include <string>

#include "LogoutUI.h"

using namespace std;

/*
   함수 이름 : Logout::Logout
   기능  : 로그아웃 기능에 쓰이는 control class
   인자 : ifstream& in_fp  : input.txt(사용자가 입력한 텍스트 읽기)
         ofstream& out_fp : output.txt(결과 출력)
         Member*& loggedInMember   : 현재 로그인한 멤버
   반환값: 없음
*/
Logout::Logout(ifstream& in_fp, ofstream& out_fp, Member*& loggedInMember)
    : in_fp(in_fp), out_fp(out_fp), loggedInMember(loggedInMember) {
  string loggedInMemberId = loggedInMember->getId();
  LogoutUI boundary(in_fp, out_fp, loggedInMemberId);
  boundary.setControl(this);
  boundary.startInterface();
};

/*
   함수 이름 : Login::login()
   기능  : 멤버가 로그아웃하면 현재 로그인 중인 멤버를 비움
   인자 : 없음
   반환값    : 없음
*/
void Logout::logout() { loggedInMember = nullptr; };