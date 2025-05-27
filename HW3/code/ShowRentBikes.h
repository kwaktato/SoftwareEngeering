#pragma once
#include <string>

using namespace std;

#include "BikeList.h"
#include "Member.h"
#include "MemberList.h"
#include "User.h"

class ShowRentBikes {
 private:
  ifstream& in_fp;
  ofstream& out_fp;
  BikeList& bikeList;
  MemberList& memberList;
  Member*& loggedInMember;

 public:
  ShowRentBikes(ifstream& in_fp, ofstream& out_fp, BikeList& bikeList,
                MemberList& memberList, Member*& loggedInMember);
  void showRentBikes();
};