#include <stdio.h>
#include<cursor.h>
#define MAX 8

int isFull(int r, int f);	//	ť�� ����á���� �˻��ϴ� �Լ� (48~55��) 
int isEmpty(int r, int f);	//	ť�� ������� �˻��ϴ� �Լ�	(57~63��) 
void QueueNumberPrint(char Queue[], int i, int j);	 //	ť�� ���ڸ� ����ϴ� �Լ�(QueuePrint()���� ��)  
void QueuePrint(char Que[]);	//	ť�� �ð������� ���̰� �ϴ� �Լ� (81~96��) 

void main(){
	char ch, Queue[MAX] = {0};	// ch = ���� �Է¹޴� ����, Queue[MAX] = �����ʿ����. 
	int rear = 0, front = 0;	// rear, front = ���ٸ� �ε��� �� ���� ����; 
	
	while(1){
		QueuePrint(Queue);	//ť ����ϴ� �Լ� 
		printf("rear = %d / front = %d", rear, front);
		printf(" �Է��� ��: ");
		scanf("%c", &ch);
		if(ch == 10){	//	�̻��ѹ���(����Ű) ����ó��
			clrscr();
			printf("�ػ���: �ν��� �� ���� �����Դϴ�!\n\n");
			continue;
		}
		getchar();	
		if(ch=='9')	break;	//exit(�ݺ��� Ż��!) 
		else if(ch=='0'){	//Pop(���� ����) 
			if(isEmpty(rear, front)){	//ť ����ִ��� �˻� �Լ�
				clrscr();
				printf("�ػ���: ������ ��: %c\n\n", Queue[front+1]); 
				front = (front+1)%MAX;
				Queue[front]=0;
			}
		}else{				//Push(���� ����) 
			if(isFull(rear, front)){	//ť �����ִ��� �˻� �Լ�
				rear = (rear+1)%MAX;
				Queue[rear]=ch;
				clrscr();
				printf("�ػ���: ������ ��: %c\n\n", ch);
			}
		}	
	}
	printf("\n���α׷��� ����մϴ�...");
}


int isFull(int r, int f){
	if((r+1)%MAX!=f)	return 1; 
	else{
		clrscr();
		printf("�ػ���: Queue�� ��á���ϴ�(���ԺҰ�)\n\n");
		return 0;
	}
}

int isEmpty(int r, int f){
	if(r%MAX!=f)	return 1;
	else{
		clrscr();
		printf("�ػ���: Queue�� ������ϴ�(�����Ұ�)\n\n");
		return 0;
	}	
}

void QueueNumberPrint(char Queue[], int i, int j){
	if(i<=j){
		for(int k = i; k<=j; k++){
			printf("��");
			Queue[k]!=0 ?  printf(" %c", Queue[k]) : printf("  ");
			printf("�� ");
		}
	}else{
		for(int k = i; k>=j; k--){
			printf("��");
			Queue[k]!=0 ?  printf(" %c", Queue[k]) : printf("  ");
			printf("�� ");
		}
	}
}

void QueuePrint(char Que[]){
	printf("�ƹ� ���ڸ� �Է��ϸ� ���Ұ� ����(push)�˴ϴ�.\n");
	printf("0 �Է� : ���Ҹ� ����(pop)�մϴ�.\n");
	printf("9 �Է� : ���α׷��� �����մϴ�."); 
	printf("\n�������� �������� ��������\n");	
	QueueNumberPrint(Que, 0, 2);
	printf("\n��-0�� ��-1�� ��-2�� \n");
	printf("��������      �������� \n");
	QueueNumberPrint(Que, 7, 7);
	printf("     ");
	QueueNumberPrint(Que, 3, 3);
	printf("\n��-7��      ��-3��\n"); 
	printf("�������� �������� ��������\n");	
	QueueNumberPrint(Que, 6, 4);
	printf("\n��-6�� ��-5�� ��-4��\n"); 
}
