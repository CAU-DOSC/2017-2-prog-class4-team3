NEW BRANCH FOR 2ND PROJECT
# README file for TEAM[4,3]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.

Function Ownership List

 Trivial Swap Function - 오준석
 Juggling Swap Function - 최동우
 Block-Swap Function - 이지윤
 Reverse Swap Function - 김다빈
 README File - 박상우

Function Descriptions
 *gendata()
  -문자열 길이 n, rotate할 수 d를 입력받고 랜덤문자열을 입력받는 함수
 *strgen()
  -str에 랜덤문자열을 입력하는 함수
 *countdistance(int d)
  -d의 크기에 따라 시계방향으로 움직일 지 시계반대방향으로 움직일지 d를 설정하는 함수
 *void reverse(char *str, int start, int end)
  -리버스 로테이션을 하기 위해 이용하는 함수
 *void reversal(char *str)
  -reverse함수를 3번 사용하여 str 문자열을 d만큼 움직이게 하는 함수
 *void trivial(char *str)
  -트리비얼 로테이션을 이용해 str 문자열을 d만큼 움직이게 하는 함수
 *int gcd(int a, int b)
  -저글링 로테이션을 하기 위해 a와 b의 최대공약수를 구하는 함수
 *void juggling(char *str)
  -저글링 로테이션을 이용해 str 문자열을 d만큼 움직이게 하는 함수
 *void blockswap(char *arr)
  -블록스왑 로테이션을 이용해 str 문자열을 d만큼 움직이게 하는 함수

 실행 결과
 strlen  rotate d T.trivial T.juggle T.blockswap T.reverse
 1000000 7        0.009000  0.007000 0.006000    0.003000
 
