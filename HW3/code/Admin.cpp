#include "Admin.h"

/*
   함수 이름 : Admin::Admin()
   기능  : Member의 subClass인 Admin 생성
   인자 : string id : admin의 아이디
         string pw : admin의 비밀번호
   반환값    : 없음
*/
Admin::Admin(string id, string pw) : Member(id, pw) {}
