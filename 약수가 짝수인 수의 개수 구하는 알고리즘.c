#include <stdio.h> 
#include <math.h> 
  
void main(){     
	int A,B;       
	scanf("%d %d", &A, &B);       
	printf("%d", (B-A+1) - (int)sqrt(B) + (int)sqrt(A - 1));       
}
/* sqrt(B) B������ ��� ���� �������� ���� 
ex)		sqrt(9) -> 3 �ε�, 3�� (1, 2, 3�� �������� ����)�ؼ� �������� ������ ���ϱ⵵ �Ѵ�. 
   sqrt(A) A-1������ ��� ���� �������� ����
		1~B�� �ƴ϶� A~B �̹Ƿ�, 1~A ���� ���־�� ��, �ٵ� ���⼭ A�� �����ϹǷ� A-1�� �Ű������� �־���  

#include<stdio.h>
void main(){
	int a, b, i, su;
	scanf("%d %d", &a, &b);
	for(i=1; i*i<a; i++);
	for( ; i*i<=b; i++) 
		su++;
	su--;
	printf("%d", (b-a+1)-su); 
}//		�̰͵� �Ŵµ�, �˰��� ��ȸ���� �ȸ���.. �̤� 

*/

