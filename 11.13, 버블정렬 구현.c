#include<stdio.h>
#define N 10

void main(){
	int arr[N] = {0};
	printf("������ �迭�� �Է��ϼ���. (����� ����, 9�� �Է�) : ");
	for(int i=1; i<N; i++)	scanf("%d", &arr[i]);

	for(int i=1; i<N-1; i++){
		for(int j=1; j<N-i; j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		printf("\n%d��° ���� ��� : ", i);
		for(int i=1; i<N; i++)	printf("%d ", arr[i]);
	}
	
	printf("\n\n���� ��� ��: ");
	for(int i=1; i<N; i++)	printf("%d ", arr[i]); 
}
