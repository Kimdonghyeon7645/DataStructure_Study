#include<stdio.h>
#define N 10

void main(){
	int arr[N] = {0};
	printf("정렬할 배열을 입력하세요. (띄어쓰기로 구분, 9개 입력) : ");
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
		printf("\n%d번째 정렬 결과 : ", i);
		for(int i=1; i<N; i++)	printf("%d ", arr[i]);
	}
	
	printf("\n\n정렬 결과 값: ");
	for(int i=1; i<N; i++)	printf("%d ", arr[i]); 
}
