#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* link;
}NODE;
//	�ڱ����� ����ü 

NODE* getnode(){
	NODE *temp = (NODE*)malloc(sizeof(NODE));
	temp->data = 0;
	temp->link = NULL;
	return temp;
}
void main(){
	printf("��� ���� ���α׷��Դϴ�.\n");
	NODE *new_node = getnode();
	printf("new_node = %d\n", new_node);
//	new_node�� ������ ����, �ּҰ�(����Ű�� ����� �����ּ� ��)�� ����
 
	printf("&new_node->data = %d\n", &new_node->data);
//	&new_node -> data == & (new_node -> data)

	printf("new_node->data = %d\n", new_node->data);
//	new_node -> data == (*new_node).data
}
