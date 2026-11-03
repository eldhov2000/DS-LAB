#include<stdio.h>

int main()
{

	int a[10][10],b[10][10],result[1][10];
	int r1,c1,r2,c2;
	int i,j,k,choice;

	   printf("Enter rows and columns of Matrix A:");
            scanf("%d %d",&r1,&c1);
	    printf("Enter the elements in A:\n");
	      for (i=0;i<r1;i++)
	 	 {
	  	for(j=0;j<c1;j++)
	 	 {
		  scanf("%d",&a[i][j]);
	 	 }
		
	  	}

	    printf("Enter rows and columns of matrix B:");
            scanf("%d%d",&r2,&c2);
	    printf("Enter the elements in B:\n");
	   	for(i=0;i<r2;i++)
	   	 {
	    	 for(j=0;j<c2;j++)
	    	 {
	    	 scanf("%d",&b[i][j]);
	   	 }
	    	}
	    do
	    {
	     printf("1.addition\n");
	     printf("2.subtraction\n");
	     printf("3.Multiplication\n");
	     printf("5.Transporse of Matrix A\n");
	     printf("6.Transporse of Matrix B\n");
	     printf("7.Exit\n");
	     
	     printf("Enter your choice:\n");
	     scanf("%d",&choice);
	     
	     switch(choice)
	     {
	       
	       case 1:
	            
	            if(r1==r2 && c1==c2)
	            {
	            printf("\nAddition:\n");
	             for(i = 0;i<r1;i++)
	             { 
	              for(j=0;j<c1;j++)
	               {
	              result[i][j]=a[i][j],b[i][j];
	             printf("%d",result[i][j]);
	             }
	            printf("\n");
	            }
	            }
	            else
	            {
	            printf("Addition is not possible.\n");
	            }
	            break;
	            }
	            }
	            }
	            
	     
	     
	     
	     
	 



