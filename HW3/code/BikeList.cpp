#include "BikeList.h"

#include "Bike.h"

/*
   함수 이름 : BikeList::addNewBike()
   기능  : 자전거의 정보를 모아놓은 list에 새로운 자전거를 등록(추가)
   인자 : Bike* bike : 등록할 자전거 정보
   반환값    : 없음
*/
void BikeList::addNewBike(Bike* bike) { bikeList.push_back(bike); }

/*
   함수 이름 : BikeList::getBikeDetails()
   기능  : 자전거의 id를 가지고 해당 자전거의 정보(id, 제품명)을 알 수 있음
   인자 : string bikeId : 정보를 알고 싶은 자전거의 id
   반환값    : Bike
*/
Bike* BikeList::getBikeDetails(string bikeId) {
  for (Bike* bike : bikeList) {
    if (bike->getId() == bikeId) {
      return bike;
    }
  }
  return nullptr;
}

/*
   함수 이름 : BikeList::sortById()
   기능  : 자전거 list를 순서대로 정렬함. 대여한 자전거의 정보를 출력할 때 사용.
   인자 : 없음
   반환값    : 없음
*/
void BikeList::sortById() {
  std::sort(bikeList.begin(), bikeList.end(), [](Bike* a, Bike* b) {
    if (a == nullptr && b == nullptr) return false;

    if (a == nullptr) return true;
    if (b == nullptr) return false;

    return a->getId() < b->getId();
  });
}