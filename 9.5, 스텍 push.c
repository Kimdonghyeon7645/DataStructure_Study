#include<stdio.h>

int top = -1;
int arr[30];
void push(int data){
	top++;
	arr[top] = data;
}
int pop(){
	int re = arr[top];
	arr[top] = 0;
	top--;
	return re;
}
void prt(){
	printf("������ ����� ����\n\n");
	for(int i=top; i>=0; i--)
		printf("������%d��° ��: %d\n", top-i+1, arr[i]);
	if(top>=29){
		printf("<����> - ������ �� á���ϴ�!");
		return;
	}
}

void main(){
	int n;
	while(1){
		prt();
		printf("�� ����� �Է��ϼ���(1: push, 2: pop, �׿� Ű: exit): ");	
		scanf("%d", &n);
		
		if(n==1){
			printf("\npush�� ���� �Է��ϼ��� :");
			scanf("%d", &n);
				if(n<0){
					printf("<����> - �������� �ԷµǾ����ϴ�. push�� �����մϴ�.");
					break;
				}
			push(n);
		}else if(n==2){
			printf("pop�� ������: %d\n", pop()); 
		}else{
			printf("���α׷��� �����մϴ�...");
			break;
		}
	}
}
