#include<stdio.h>

void main(){
	int arr[10] = {1, 2, 3, 4, 5}, n, arri;				//����, �迭 ���� 
	for(int i = 0; i<sizeof(arr)/sizeof(int); i++)		//�ʱ� �迭 ��� 
		printf("%d�� �ε��� ��: %d\n", i, arr[i]); 		
	printf("������ ������ �ε����� �� ���� �Է��ϼ���: ");	//���� ���� �Է� 
	scanf("%d %d", &arri, &n);	
	for(int i = sizeof(arr)/sizeof(int); i>arri; i--)	//���� ���� - ��ĭ�� �б� 
		arr[i] = arr[i-1];
	arr[arri] = n;			//���� ���� - ���� ���Ұ� ���� 
	for(int i = 0; i<sizeof(arr)/sizeof(int); i++)		//���� �� �迭 ��� 		
		printf("%d�� �ε��� ��: %d\n", i, arr[i]);
}
