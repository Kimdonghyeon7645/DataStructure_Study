#include<stdio.h>

int i=0;
int fc(int n, int s, int f, int m){
	if(n>2){
	fc(n-1, s, m, f);
	printf("%d�� %d����\n", s, f);
	i++; 
	fc(n-1, m, f, s);
	}else{
	printf("%d�� %d����\n", s, m);
	printf("%d�� %d����\n", s, f);
	printf("%d�� %d����\n", m, f);
	i+=3;		
	}
}

void main(){
	int n, start_bar, middle_bar, final_bar;
	printf("���ʴ�� n��, ù��° ���� ��ȣ, ������ ���� ��ȣ, �߰� ���� ��ȣ�� �Է��ϼ���: ");
	scanf("%d %d %d %d", &n, &start_bar, &middle_bar, &final_bar);
	fc(n, start_bar, middle_bar, final_bar);
	printf("\n �� Ƚ��: %d��", i);
}
