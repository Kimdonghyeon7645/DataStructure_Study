void add(int a[][MAX_SIZE]...){		// �ð� ��� �� 
	int i, j;
	for(i=0; i<rows; i++){				// rows+1 
		for(j=0; j<cols; j++){			// rows *(cols+1)
			c[i][j]= a[i][j] + b[i][j];	//rows *cols
		}
	}	
}
