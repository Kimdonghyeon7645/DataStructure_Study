#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* link;
}node;
node* top = NULL;
node* front = NULL;
node* rear = NULL;

void push(){
	int n;
	printf("�Է��� ��: ");
	scanf("%d", &n);
	node* Nnode = (node*)malloc(sizeof(node));
	Nnode->link = NULL;
	Nnode->data = n;
	if(front){
		rear->link = Nnode;
		rear = Nnode;
	}else{ 
		top = front = rear = Nnode;
	}
}
void pop(){
	if(front){
		node* temp = front;
		front = front->link;
		free(front);  
	}else{
		printf("������ �� �����ϴ�!(ť�� �񿴽��ϴ�) ");
	}
}
void exitpg(){
	printf("���α׷��� �����մϴ�..");
	while(top==NULL){
		node* temp = top;
		top = top->link;	
		free(temp);
	}
}

void main(){
	int i;
	while(1){
		printf("ť: ");
		while(top!=NULL){
			printf("%d ", top->data);
			top = top->link;
		}	
		printf("\n������ ����� �Է��ϼ���. \n1=����, 2=����, 3=���� : ");
		scanf("%d", &i);
		if(i==1)	push();
		else if(i==2)	pop();
		else if(i==3)	exitpg();
		else	printf("�������� ���� �� �Դϴ�!"); 
	}	
}
