#include<stdio.h>
int arr[5], cho, front = 0, rear = 0, i;

void print(){
	printf("ť�� �� : ");
		if(rear!=front){
			for(i= front+1; i<rear && i != front; ++i%5)
				printf("%d ", arr[i%5]);			
		}else
			printf("������");
}
void push(){
	if((rear+1)%5 == front)		printf("���̻� ������ �� �����ϴ�! \n");
	else{
		printf("������ ��: ");
		scanf("%d", &arr[++rear%5]);
	}
}
void pop(){
	if(front == rear)	printf("������ ���� �����ϴ�!(ť�� ���ֽ��ϴ�) \n");
	else	printf("������ ��: %d\n", arr[++front%5]);
} 

void main(){
	while(1){
		print();	
		printf("\n������ �۾��� �����ϼ���. \n����= 1, ����= 2, ����= 3 : ");
		scanf("%d", &cho);
		if(cho==1)		push();	
		else if(cho==2)		pop();
		else if(cho==3){
			printf("���α׷��� �����մϴ�...");
			break;
		}else	printf("���� ���� ���� �Է��߽��ϴ�! \n");
		printf("\n");
	}
}
