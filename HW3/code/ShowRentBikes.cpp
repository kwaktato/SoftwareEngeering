#include "ShowRentBikes.h"

#include <string>

#include "ShowRentBikesUI.h"

using namespace std;

ShowRentBikes::ShowRentBikes(ifstream& in_fp, ofstream& out_fp,
                             BikeList& bikeList, MemberList& memberList,
                             Member*& loggedInMember)
    : in_fp(in_fp),
      out_fp(out_fp),
      bikeList(bikeList),
      memberList(memberList),
      loggedInMember(loggedInMember) {
  showRentBikes();
};

void ShowRentBikes::showRentBikes() {
  string loggedInMemberId = loggedInMember->getId();

  Member* member = memberList.findMemberById(loggedInMemberId);

  BikeList& rentedBikeList = member->listRentBikes();
  rentedBikeList.sortById();

  ShowRentBikesUI boundary(in_fp, out_fp);
  boundary.setControl(this);
  boundary.startInterface(rentedBikeList);
};