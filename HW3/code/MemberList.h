#pragma once
#include <string>
#include <vector>

#include "Member.h"

/*
   클래스 이름 : MemberList
   기능  : 멤버 정보(id, pw + phoneNum)를 담아두는 list로 아래 기능들을 수행함
   1. MemberList : MemberList entity 생성
   2. addNewMember() : 멤버 list에 새로운 멤버를 등록할 때 사용하는 함수
   3. findMemberById() : 멤버의 id를 가지고 해당 멤버의 정보 반환
*/
class MemberList {
 private:
  vector<Member*> memberList;

 public:
  void addNewMember(Member* member);
  Member* findMemberById(string memberId);
};