#include<stdio.h>

int arr[10] = {1, 2, 3, 4, 5, 0, 0, 0, 0, 0}, n, arri;	

void arr_insert(){ 
	int i;
	printf("������ ������ �ε����� �� ���� �Է��ϼ���: "); 
	scanf("%d %d", &arri, &n);
	if(arri>=sizeof(arr)/sizeof(int)){
		printf("�ε��� ������ Ů�ϴ�!\n\n");
		return; 
	}		
	for(i = sizeof(arr)/sizeof(int)-1; i>arri; i--)
		if(arr[i]==0)
			break;	
	if(arr[i]!=0 && arr[i-1]!=0){
		printf("�迭�� ��� ��á���ϴ�!\n\n");
		return;
	}					
	for( ; i>=arri; i--)
			arr[i]=arr[i-1];
	arr[arri] = n;
}

void arr_remove(){
	printf("������ ������ �ε����� �Է��ϼ���: ");
	scanf("%d", &arri);	
	if(arri>=sizeof(arr)/sizeof(int)){
		printf("�ε��� ������ Ů�ϴ�!\n\n");
		return; 
	
	}else if(arr[arri]==0){
		printf("�̹� ���� ���� �Դϴ�!\n\n");
		return;
	}
	for(int i = arri+1; i<sizeof(arr)/sizeof(int); i++)
		arr[i-1] = arr[i];
	arr[sizeof(arr)/sizeof(int) -1] = 0;
}

void main(){
	while(1){
		int cho;
		for(int i = 0; i<sizeof(arr)/sizeof(int); i++)
			printf("%d�� �ε��� ��: %d\n", i, arr[i]);
		printf("\n�Ͻ� ������ �Է��ϼ���. (1 -> ����,  2 -> ����,  3 -> ����)\n");	
		scanf("%d", &cho);
		switch(cho){
			case 1:	arr_insert();	break;
			case 2: arr_remove();	break;
			case 3:	return;	break; 
			default: printf("����ε� ���ڸ� �Է��� �ֽʽÿ�. /n");	break; 
		}
	} 		
}
