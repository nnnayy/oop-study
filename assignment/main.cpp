//
//  main.cpp
//  project01
//
//  Created by 김나예 on 2022/09/22.
//

#include <iostream>
//  iostream 헤더파일 : 표준 입출력 클래스를 정의함.

using namespace std;
//  namespace : 이름이 기억되는 영역을 의미함.
//  std 클래스 : cout 함수가 정의되어 있음.

int main() {
    //  main 함수 : 프로그램의 시작과 끝을 의미함.
    
    cout << "Hello, World!" << endl;
    //  cout 객체 : c++ 표준 출력 함수
    //  삽입 연산자 << : 출력할 데이터를 출력 스트림에 삽입해, 문자 혹은 문자열을 명령 프롬프트에 출력함.
    //  endl : end line의 약자로, 명령 프롬프트에 개행 효과를 주어 한 줄을 밑으로 내림.
    
    return 0;
    //return 0 : 컴퓨터에게 프로그램 종료를 알림.
}
