#include<stdio.h>
#define N 10

int arr[N] ={0};
void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void quickSort(int arr[], int left, int right);

void main(){
	printf("������ �迭 �Է� (%d�� ��ŭ) : ", N);
	for(int i=0; i<10; i++)	scanf("%d", &arr[i]);
	
	quickSort(arr, 0, N-1);
	
	printf("\n\n�� ���� ��� : ");
	for(int i=0; i<10; i++) printf("%d ", arr[i]);
}

void quickSort(int arr[], int left, int right){
	if(left<right){
		int i=left, j=right+1, pivot=left, temp;
		while(i<j){
			do	i++;	while(arr[i]<arr[pivot]);	 
			do	j--;	while(arr[j]>arr[pivot]);	
			if(i<j)	swap(&arr[i], &arr[j]);
		}
		swap(&arr[j], &arr[pivot]);
		for(int i=0; i<N; i++) printf("%d ", arr[i]);
		printf("\n");
		quickSort(arr, left, j-1);
		quickSort(arr, j+1, right);	
	}
}
