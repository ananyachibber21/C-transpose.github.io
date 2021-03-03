#include<stdio.h>

int main()
{
	int m[10][10];
	int transpose[10][10];
	int i,j,r,c;
	printf("Enter the no of rows: ");
	scanf("%d",&r);
	printf("Enter the no of cols: ");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
			printf("Enter the val: ");
			scanf("%d",&m[i][j]);
			
		}
    } 
		
	for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    
    }  
    
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            transpose[j][i] = m[i][j];
        }

    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i){
        for (j = 0; j < r; ++j) {
            printf("%d  ", transpose[i][j]);
        }
        printf("\n");
}
    return 0;
}
