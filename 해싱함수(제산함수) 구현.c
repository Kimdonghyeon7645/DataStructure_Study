#include<stdio.h>
#include<windows.h> 
#define Table_Max 10 

int Table_is_Full = 0;
int save_index = -1;
int over_flow_check(int table[])
{
// �����÷ο� ó����� : �����ּ� > �����ּҹ� ��� 
	int searching_index = save_index+1;
    while(table[searching_index] != 0){   
	// �������� ����, != �� �񱳿���������, =!�� =(�ܼ����Կ�����)�� !(NOT������) �� �ȴ�.
	// �е� ���� ���, ���ǹ����� (���� <������> ���)�� ���� ��������, (��� <������> ����). (������ �߸� ���̸� ���� ����) 
		if(searching_index == save_index){
			Table_is_Full = 1; 
			return -1;
		}else if(searching_index > 9)	searching_index = -1;  // ���� �Ʒ��� ++ �� 
		searching_index++;
	}
	return searching_index; 	
}

int hashing_fuc(int table[], int key)
{
// �ؽ� �Լ� : ���� �Լ� ��� 
	save_index = key % Table_Max;
	if(table[save_index] != 0)	save_index = over_flow_check(table);
	if(Table_is_Full == 0)	table[save_index] = key;
}

void show_table(int table[])
{
	printf("���ؽ� ���̺��� ���� \n\n(ĭ���� ���ڴ� �ּ� ��) \n<����>");
	if(Table_is_Full == 1){
		printf(" �ؽ� ���̺��� ����á���ϴ�! (���ԺҰ�) \n");
	}else if(save_index != -1){
	    printf(" �� ��: %d\n", table[save_index]);
	}else{
		printf(" �� ó�� ���� �ܰ��Դϴ�!\n");
	}
	printf("���� 0������ 1������ 2������ 3������ 4������ 5������ 6������ 7������ 8������ 9����\n");
	for(int index = 0; index < 10; index++)
	{
		printf("�� ");
		if(table[index] != 0)    
		    printf("%3d", table[index]);
		else	
		    printf("   ");
	}
	printf("��\n");
	printf("������������������������������������������������������������������������������������������������������\n"); 
}

void main()
{
	int key;
    int hash_table[Table_Max] = {0};
	while(1){
	    show_table(hash_table);	
		printf("Ű�� �Է��ϼ��� : ");
		scanf("%d", &key);
		hashing_fuc(hash_table, key);
	    system("cls");
    }
}
