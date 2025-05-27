#include "MemberList.h"

#include "User.h"

/*
   함수 이름 : MemberList::addNewMember()
   기능  : 멤버의 정보를 모아놓은 list에 새로운 멤버를 등록(추가)
   인자 : Member* member : 등록할 멤버 정보
   반환값    : 없음
*/
void MemberList::addNewMember(Member* member) { memberList.push_back(member); }

/*
   함수 이름 : MemberList::findMemberById()
   기능  : 멤버의 id를 가지고 해당 멤버의 정보(id, pw + 전화번호)를 알 수 있음
   인자 : string memberId : 정보를 알고 싶은 멤버의 id
   반환값    : Member
*/
Member* MemberList::findMemberById(string memberId) {
  for (Member* member : memberList) {
    if (member->getId() == memberId) {
      return member;
    }
  }
  return nullptr;
}
