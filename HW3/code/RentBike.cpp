#include "RentBike.h"

#include <string>

#include "RentBikeUI.h"
#include "User.h"

using namespace std;

/*
   함수 이름 : RentBike::RentBike
   기능  : 자전거 대여하기 기능에 쓰이는 control class
   인자 : ifstream& in_fp  : input.txt(사용자가 입력한 텍스트 읽기)
         ofstream& out_fp : output.txt(결과 출력)
         BikeList& bikeList : 자전거 list
         MemberList& memberList : 멤버 list
         Member*& loggedInMember   : 현재 로그인한 멤버
   반환값: 없음
*/
RentBike::RentBike(ifstream& in_fp, ofstream& out_fp, BikeList& bikeList,
                   MemberList& memberList, Member*& loggedInMember)
    : in_fp(in_fp),
      out_fp(out_fp),
      bikeList(bikeList),
      memberList(memberList),
      loggedInMember(loggedInMember) {
  string loggedInMemberId = loggedInMember->getId();
  RentBikeUI boundary(in_fp, out_fp, loggedInMemberId);
  boundary.setControl(this);
  boundary.startInterface();
};

/*
   함수 이름 : RentBike::rentBike
   기능  : 자전거를 대여하는 함수
   인자 : string userId : 회원의 id
         string bikeId : 자전거의 id
   반환값    : string(대여한 자전거의 제품명)
*/
string RentBike::rentBike(string userId, string bikeId) {
  Member* member = memberList.findMemberById(userId);
  Bike* bike = bikeList.getBikeDetails(bikeId);

  member->rentBike(bike);

  return bike->getName();
};