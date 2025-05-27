// 헤더 선언
#include <string.h>

#include <fstream>
#include <iostream>

#include "AddBike.h"
#include "Admin.h"
#include "BikeList.h"
#include "Exit.h"
#include "Login.h"
#include "Logout.h"
#include "MemberList.h"
#include "RentBike.h"
#include "ShowRentBikes.h"
#include "SignUp.h"

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask(ifstream& in_fp, ofstream& out_fp);

int main() {
  // 변수 선언
  ofstream out_fp;
  ifstream in_fp;

  // 파일 입출력을 위한 초기화
  in_fp.open(INPUT_FILE_NAME);
  out_fp.open(OUTPUT_FILE_NAME);

  doTask(in_fp, out_fp);

  out_fp.close();
  in_fp.close();

  return 0;
}

void doTask(ifstream& in_fp, ofstream& out_fp) {
  // 메뉴 파싱을 위한 level 구분을 위한 변수
  int menu_level_1 = 0, menu_level_2 = 0;
  int is_program_exit = 0;

  MemberList memberList;
  BikeList bikeList;

  Member* loggedInMember = nullptr;
  memberList.addNewMember(new Admin("admin", "admin"));

  while (!is_program_exit) {
    // 입력파일에서 메뉴 숫자 2개를 읽기
    in_fp >> menu_level_1 >> menu_level_2;

    // 메뉴 구분 및 해당 연산 수행
    switch (menu_level_1) {
      case 1: {
        switch (menu_level_2) {
          case 1:  // "1.1. 회원가입" 메뉴 부분
          {
            SignUp signUpControl(in_fp, out_fp, memberList);
            break;
          }
        }
        break;
      }
      case 2: {
        switch (menu_level_2) {
          case 1:  // "2.1. 로그인" 메뉴 부분
          {
            Login loginControl(in_fp, out_fp, memberList, loggedInMember);
            break;
          }
          case 2:  // "2.2. 로그아웃" 메뉴 부분
          {
            Logout logoutControl(in_fp, out_fp, loggedInMember);
            break;
          }
        }
        break;
      }
      case 3: {
        switch (menu_level_2) {
          case 1:  // "3.1. 자전거 등록" 메뉴 부분
          {
            AddBike addBikeControl(in_fp, out_fp, bikeList);
            break;
          }
        }
        break;
      }
      case 4: {
        switch (menu_level_2) {
          case 1:  // "4.1. 자전거 대여" 메뉴 부분
          {
            RentBike rentBikeControl(in_fp, out_fp, bikeList, memberList,
                                     loggedInMember);
            break;
          }
        }
        break;
      }
      case 5: {
        switch (menu_level_2) {
          case 1:  // "5.1. 자전거 대여 리스트" 메뉴 부분
          {
            ShowRentBikes showRentBikesControl(in_fp, out_fp, bikeList,
                                               memberList, loggedInMember);
            break;
          }
        }
        break;
      }
      case 6: {
        switch (menu_level_2) {
          case 1:  // "6.1. 종료“ 메뉴 부분
          {
            Exit exitControl(in_fp, out_fp, loggedInMember);
            is_program_exit = 1;
            break;
          }
        }
        break;
      }
      default: {
        break;
      }
    }
  }
}
