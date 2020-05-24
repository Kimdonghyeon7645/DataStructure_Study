#include <stdio.h>
#define SIZE 10

int top = -1;
int stack[SIZE];
int output[SIZE * SIZE];
int out = 0;

void push(int item)
{
	if(top >= SIZE - 1)
	{
		printf("\n Overflow!! \n");
		return;
	}
	else
		stack[++top] = item;
}

int pop()
{
	if(top == -1)
	{
		printf("\n Underflow!! \n");
		return 0;
	}
	else
		return stack[top--];
}

void stackprint()
{
	int i;
	printf("\n STACK [ ");
	for(i=0; i<=top; i++)
		printf("%d ", stack[i]);
	printf("]");
	printf("\n output : ");
		for(i=0; i<out; i++)
			printf(" %d ", output[i]);
}

int main()
{
	int item, i;
	printf("\t ---------------------------------------------\n");
	printf("\t        ���ÿ� ���ϴ� ���� �Է��ϼ���.\n");
	printf("\t        POP�� �Ϸ��� 9999�� �Է��ϼ���.\n");
	printf("\t    ���α׷��� �����Ϸ��� 8888�� �Է��ϼ���.\n");
	printf("\t ---------------------------------------------\n");
	
	stackprint();
	while(1)
	{
		printf("\t input : ");
		scanf("%d", &item);
		if(item != 9999 & item != 8888)
		{
			push(item);
			stackprint();
		}
		if(item == 8888)
			break;
		if(item == 9999)
		{
			int temp = pop();
			if(temp !=0)
				output[out++]=temp;
			stackprint();
		}
	}
}
