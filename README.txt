﻿# README file for TEAM[4,3]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.

File Ownership List

 * README File - 박상우
 * Header File - 이지윤
 * Function File - 김다빈 최동우
 * Main File - 오준석


header file

1. #include <stdio.h> :  함수의 매크로 정의, 상수, 여러 형의 입출력 함수가 포함된 헤더파일
2. #include <stdlb.h> : malloc과 free가 선언된 헤더파일
3. #include <string.h> : 메모리 블록이나 문자열을 다룰 수 있는 함수들을 포함하는 헤더파일
4. #include <conio.h> :  consol 입출력 함수가 포함된 헤더파일
5. #include <malloc.h>: memory(메모리)의 allocation(할당)과 deallocation(반환)을 담당하는
                        함수의 선언을 갖고 있는 헤더파일


Function Descriptions

 * appendnode(node *head, int value)
  - 새로운 노드를 생성 후 value의 값을 저장한 후 맨 마지막에 연결하는 함수
 * deletenode(node *head, int n)
  -  n번째 노드를 삭제하는 함수
 * printvalue(node *head, int n)
  - n번째 노드에 저장된 값 반환하는 함수
 * int countnode(node *head)
  - 총 노드의 개수를 반환하는 함수
 * printorder(node *head)
  - 모든 노드의 저장된 값들을 입력받은 순서대로 출력하는 함수
 * void printreverse(node *head)
  - 모든 노드의 저장된 값들을 역순으로 출력하는 함수
 * void printmid(node *head, int count)
  - 노드의 총 개수인 count를 인자로 받아 count가 짝수면 중간값 2개를, 홀수면 1개를 출력하는 함수
 * void delodd(node *head, int count)
  - 홀수번째(1, 3, 5, 7 ...)에 있는 노드들을 삭제하는 함수
 * void deleven(node *head, int count)
  - 짝수번째(2, 4, 6, 8 ...)에 있는 노드들을 삭제하는 함수

 Team's Ideas of Implementations
  * 정순출력, 역순출력의 함수를 재귀함수을 이용해 출력
  * 기본이 되는 deletenode, printvalue 함수를 사용하여 다른 함수를 만듬



Main Function

- printvalue() 함수를 통해 연결 리스트에서 원하는 순서의 노드의 저장 값을 확인할 수 있고
  while() 반복문을 통해 Ctrl-Z가 입력될 때까지 계속 확인 가능

- printvalue()를 통해 특정 순서의 노드 저장 값을 확인하는 도중 특정 순서가 입력된
  노드 개수의 범위를 벗어날 시 오류 검출 및 재입력 요청

- delodd()와 deleven()을 통해서 홀수 번째 또는 짝수 번째의 노드들을 제거한 후 출력
  이 과정에서 switch() 함수를 통해 둘 중 하나를 선택하도록 구현

- 홀수 번째 또는 짝수 번째 노드들을 제거하는 과정에서 주어진 선택지를 벗어날 시
  오류 검출 및 재입력 요청하도록 do-while() 반복문을 사용
