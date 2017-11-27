# README file for TEAM[4,3]:

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

Function Descriptions

 * appendnode appendnode(node *head, int value)
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
 * void printmid(node *head, int crt)
  - 노드의 총 개수인 crt 인자로 받아 crt가 짝수면 중간값 2개를, 홀수면 1개를 출력하는 함수
 * void delodd(node *head, int count)
  - 홀수번째(1, 3, 5, 7 ...)에 있는 노드들을 삭제하는 함수
* void deleven(node *head, int count)
  - 짝수번째(2, 4, 6, 8 ...)에 있는 노드들을 삭제하는 함수
