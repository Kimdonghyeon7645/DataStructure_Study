#include<stdio.h>

void main(){
	int arr[10] = {1, 2, 3, 4, 5}, arri;				//����, �迭 ���� 
	for(int i = 0; i<sizeof(arr)/sizeof(int); i++)		//�ʱ� �迭 ��� 
		printf("%d�� �ε��� ��: %d\n", i, arr[i]); 		
	printf("������ ������ �ε����� �Է��ϼ���: ");	//���� ���� �Է� 
	scanf("%d", &arri);	
	for(int i = arri+1; i<sizeof(arr)/sizeof(int); i++)	//���� ���� - ��ĭ�� ���� 
		arr[i-1] = arr[i];
	arr[sizeof(arr)/sizeof(int) -1] = 0;
	for(int i = 0; i<sizeof(arr)/sizeof(int); i++)		//���� �� �迭 ��� 		
		printf("%d�� �ε��� ��: %d\n", i, arr[i]);
}
