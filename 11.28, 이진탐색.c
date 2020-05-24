#include <stdio.h>
#define N 7

int BinarySearch(int arr[], int key, int n, int m){		//n = ���� �ε���, m = �� �ε���  
	int pivot = (n+m)/2;
	if(arr[pivot]==key)	return pivot;	
	if(n<m){
		if(arr[pivot]<key)	return BinarySearch(arr, key, pivot+1, m);
		else	return BinarySearch(arr, key, n, pivot-1);
	}
	return -1;
}

void main(){
	int arr[N], key, result;
	char jang;
	printf("Ž���� �迭�� �Է��ϼ���(%d�� ��ŭ): ", N);
	for(int i=0; i<N; i++)	scanf("%d", &arr[i]);
	printf("Ž���� ���� �Է��ϼ���: ");
	scanf("%d", &key);
	result = BinarySearch(arr, key, 0, N);
	if(result != -1)	printf("\n<Ž������>\nŽ���� ���� %d �ε��� �迭���� �ֽ��ϴ�!", result); 
	else	printf("\n<Ž������>\nŽ���� ���� ��ġ�ϴ� �迭�� ���� ã�� ���߽��ϴ�!");
}
