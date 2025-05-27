#include "Exit.h"

#include <string>

#include "ExitUI.h"

using namespace std;

/*
   함수 이름 : Exit::Exit()
   기능  : 시스템 접속 종료하기 기능에 쓰이는 control class
   인자 : ifstream& in_fp  : input.txt(사용자가 입력한 텍스트 읽기)
         ofstream& out_fp : output.txt(결과 출력)
         loggedInMember   : 현재 로그인한 멤버
   반환값    : 없음
*/
Exit::Exit(ifstream& in_fp, ofstream& out_fp, Member*& loggedInMember)
    : in_fp(in_fp), out_fp(out_fp), loggedInMember(loggedInMember) {
  ExitUI boundary(in_fp, out_fp);
  boundary.setControl(this);
  boundary.startInterface();
};

/*
   함수 이름 : Exit::exit()
   기능  : 현재 로그인 중인 멤버를 없애고 접속을 종료
   인자 : 없음
   반환값    : 없음
*/
void Exit::exit() { loggedInMember = nullptr; }