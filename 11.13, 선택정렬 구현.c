#include<stdio.h>
#define N 10

void main(){
	int arr[N] = {0};
	printf("������ �迭�� �Է��ϼ���. (����� ����, 9�� �Է�) : ");
	for(int i=1; i<N; i++)	scanf("%d", &arr[i]);

	for(int i=1; i<N-1; i++){
		int min = i;
		for(int j=i+1; j<N; j++){
			if(arr[min]>arr[j])	min = j;
		}
		if(min != i){
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}	
		printf("\n%d��° ���� ��� : ", i);
		for(int i=1; i<N; i++)	printf("%d ", arr[i]);
	}
	
	printf("\n\n���� ��� ��: ");
	for(int i=1; i<N; i++)	printf("%d ", arr[i]); 
}
