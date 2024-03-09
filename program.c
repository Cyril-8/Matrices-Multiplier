#include <stdio.h>
int main(){
	int row_1,column_1,row_2,column_2;	//Dimentions
	int temp=0; //Temporary Value For The Sum
	int i,j,k;  //Counters
	int choice; //Choice
	
	printf("\t\tWelcome To My Humble Matrices Multiplier\n\n");
	
	do{
		
	printf("Enter number of Rows and Columns of Matrix A respectively: ");
	scanf("%d%d", &row_1,&column_1);
	
	printf("\n\nEnter number of Rows and Columns of Matrix B respectively: ");
	scanf("%d%d", &row_2,&column_2);
	
	int a1[row_1][column_1],a2[row_2][column_2],a3[row_1][column_2];	//Arrays
	
    if(column_1 != row_2){
    	printf("\n\nThese matrixes can't be multiplied. Please Try other dimentions\n\n");
    	printf("===========================================================\n\n");
    	return main();}
	
	printf("\n===========================================================\n");
	
	for(i=0;i<row_1;++i){	//Values of Matrix A
		printf("\nEnter values of Matrix A in row %d: " ,i+1);
		for(j=0;j<column_1;++j)
			scanf("%d" ,&a1[i][j]);
	}
	
	printf("\n===========================================================\n");
	
		for(i=0;i<row_2;++i){	//Values of Matrix B
			printf("\nEnter values of Matrix B in row %d: " ,i+1);
			for(j=0;j<column_2;j++)
				scanf("%d" ,&a2[i][j]);
	}
	
	printf("\n===========================================================\n");
	
	for(i=0;i<row_1;++i){	//Calculating The Product
		for(j=0;j<column_2;++j){
			for(k=0;k<column_1;++k){
			temp += a1[i][k] * a2[k][j];
			}
			a3[i][j] = temp;
			temp = 0;
 		}
	}
	printf("\nMatrix A:\n");
	
	for(i=0;i<row_1;++i){	//Printing Matrix A
		printf("\n");
		for(j=0;j<column_1;++j)
			printf("%d\t" ,a1[i][j]);
	}
	
	printf("\n\nMatrix B:\n");
	
	for(i=0;i<row_2;++i){	//Printing Matrix B
		printf("\n");
		for(j=0;j<column_2;++j)
			printf("%d\t" ,a2[i][j]);
	}
	
		printf("\n\nMatrix C:\n");
	
	for(i=0;i<row_1;++i){	//Printing Matrix C
		printf("\n");
		for(j=0;j<column_1;++j)
			printf("%d\t" ,a3[i][j]);
	}
				
	printf("\n\nEnter 1 To Calulate Other Matrices Or Enter Any Other Number To End The Progam: ");
	
	scanf("%d" ,&choice);
	
	switch(choice){
		case 1: {
		printf("===========================================================\n\n");
		printf("\nWelcome Again!\n\n"); break;}
		default: printf("\nTill The Next Time. Bye :)"); break;
		}
}
	while(choice==1);

	return 0;
}
