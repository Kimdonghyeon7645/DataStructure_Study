#include<stdio.h>

void main(){
	const int N=10;
	int arr[N], cho, front = -1, rear = -1;
	while(1){
		printf("ť�� �� : ");
		for(int i= front; i>rear; i--)		printf("%d ", arr[i]); 
		printf("\n������ �۾��� �����ϼ���. \n����= 1, ����= 2, ����= 3 : ");
		scanf("%d", &cho);
		if(cho==1){
			if(front >= N){
				printf("���̻� ������ �� �����ϴ�! \n");
				continue;
			}
			printf("������ ��: ");
			scanf("%d", &arr[++front]);
		}else if(cho==2){
			if(front == rear){
				printf("������ ���� �����ϴ�!(ť�� ���ֽ��ϴ�) \n");
				continue;
			}
			printf("������ ��: %d\n", arr[++rear]);
		}else if(cho==3){
			printf("���α׷��� �����մϴ�...");
			break;
		}else	
			printf("���� ���� ���� �Է��߽��ϴ�! \n");
		printf("\n");
	}
}
