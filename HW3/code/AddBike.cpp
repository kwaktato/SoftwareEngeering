#include "AddBike.h"

#include <string>

#include "AddBikeUI.h"

using namespace std;

/*
   함수 이름 : AddBike
   기능  : 자전거 등록하기 기능에 쓰이는 control class
   인자 : ifstream& in_fp  : input.txt(사용자가 입력한 텍스트 읽기)
         ofstream& out_fp : output.txt(결과 출력)
         BikeList& bikeList : 자전거 list
   반환값: 없음
*/
AddBike::AddBike(ifstream& in_fp, ofstream& out_fp, BikeList& bikeList)
    : in_fp(in_fp), out_fp(out_fp), bikeList(bikeList) {
  AddBikeUI boundary(in_fp, out_fp);
  boundary.setControl(this);
  boundary.startInterface();
};

/*
   함수 이름 : AddBike::addNewBike()
   기능  : 새로운 자전거를 등록하는 함수
   인자 : string id : 자전거의 id
        string name : 자전거의 제품명
   반환값    : bool
*/
bool AddBike::addNewBike(string id, string name) {
  Bike* bike = new Bike(id, name);
  bikeList.addNewBike(bike);

  return true;
};