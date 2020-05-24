#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
	int data;
	struct node* link;
}node;

node* top=NULL;

void push(int n){
	node* newnode = (node*)malloc(sizeof(node));
	newnode->data=n;
	newnode->link=top;
	top=newnode;
}
int pop(){
	int re = top->data;
	node* temp= top->link;
	free(top);
	top=temp;
	return re;
}

void main(){
	int cho;
	node* head = top;
	printf("���Ḯ��Ʈ�� ���� ���� ���α׷��Դϴ�.\n");
	while(1){	
		printf("� �۾��� �Ͻðڽ��ϱ�? (1: push,  2: pop,  3: exit)\n");
		scanf("%d", &cho);	
		switch(cho){
			case 1:	
				printf("������ ���� �Է��ϼ���: "); 
				scanf("%d", &cho);	
				push(cho);	
				break;
			case 2: 	
				printf("������ ��: %d\n\n", pop());	
				break;
			case 3:
			 	printf("���α׷��� �����մϴ�...");	
				return; 
				break;
			default:
				printf("����� �� ���� �Է��Ͻʽÿ�\n\n");	
				break;
		} 
		head = top;
		while(head != NULL){
			printf("%d\n", head->data);
			head=head->link;			
		}
	}
	while(head->link != NULL){
			node * del = head;
			head=head->link;
			free(head);
		}
}
