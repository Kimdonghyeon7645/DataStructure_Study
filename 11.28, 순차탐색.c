#include <stdio.h>
#define N 7

int Sequential_Search_nojang(int arr[], int key){
	for(int i=0; i<N; i++)	if(key==arr[i])	return i;	// return key�� �ƴ϶� i�� ��ȯ!  
	return 0;
}
int Sequential_Search_jang(int arr[], int key){
	for(int i=0; key>=arr[i]; i++)	if(key==arr[i])	return i;	// return key�� �ƴ϶� i�� ��ȯ!  
	return 0;
}

void main(){
	int arr[N], key, result;
	char jang;
	printf("Ž���� �迭�� �Է��ϼ���(%d�� ��ŭ): ", N);
	for(int i=0; i<N; i++)	scanf("%d", &arr[i]);
	printf("Ž���� ���� �Է��ϼ���: ");
	scanf("%d", &key);
	getchar();
	printf("Ž���� �迭�� ���ĵǾ� �ֽ��ϱ�? y/n : ");
	scanf("%c", &jang);
	if(jang=='y')	result = Sequential_Search_jang(arr, key);
	else if(jang=='n')	result = Sequential_Search_nojang(arr, key);
	if(result)	printf("\n<Ž������>\nŽ���� ���� %d �ε��� �迭���� �ֽ��ϴ�!", result); 
	else	printf("\n<Ž������>\nŽ���� ���� ��ġ�ϴ� �迭�� ���� ã�� ���߽��ϴ�!");
}
