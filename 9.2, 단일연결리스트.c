#include<stdio.h>
#include<stdlib.h>

typedef struct NODE{
	int data;
	struct NODE* link;	
}node;

void main(){
	int i = 1;
	node* ptr = (node*)malloc(sizeof(node));
	node* temp = ptr;
	ptr->data = 10; 
	ptr->link = NULL;
	while(1){
		do{
			printf("%d�� ���Ḯ��Ʈ ��: %d\n", i++, temp->data);
			temp = temp->link;
		}while(temp->link!=NULL);
		temp = ptr;
		printf("\n�� ����� �Է� �ϼ���\n(1: ����, 2: ����, 3: ����) : ");
		break;
	}
	free(ptr);
}

//���� ���Ḯ��Ʈ ����, ����:	https://codevkr.tistory.com/49
//���� ���Ḯ��Ʈ ���, �˻�: 	https://codevkr.tistory.com/50?category=699626
