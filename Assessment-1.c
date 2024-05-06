#include<stdio.h>
mul(int a[2][2], int b[2][2])    // Give Parameters and Function Defination
{         
	int i,j,k,c[2][2];        
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			/*first i=0 and j=0 that's why c[i][j]=c[0][0] then third loop first k=0 and k<3 
			  condtition satisfied then logic will work like this c[0][0]+=a[0][0]*b[0][0] after 
			  that third loop will do increment and k will be 1(k=1) and k<3 condition satisfied
			   and logic will be c[0][0]+=a[0][1]*b[1][0] after that third loop will do increment 
			   and k will be 2(k=2) and k<3 condition satisfied and logic will be 
			   c[0][0]+=a[0][2]*[2][0] after that loop third will do increment and k will be 
			   3(k=3) and k<3 condition not satisfied that's why this loop will be go start again
			   to i=1 and j=1 like that this loop will work.........
			*/
			c[i][j]=0;
			for(k=0;k<2;k++){
				c[i][j]+=a[i][k]*b[k][j];  
			}
		}
	}
	printf("\n-----------Multiplication Matrix-----------\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
main(){
	int x[2][2],y[2][2],i,j;                         
	printf("\n-----------first Matrix-----------\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter numbers : ");
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",x[i][j]);	
		}
		printf("\n");
	}
	printf("\n-----------Second Matrix-----------\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter numbers : ");
			scanf("%d",&y[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",y[i][j]);	                                                     
		}
		printf("\n");
	}
	
	mul(x,y);                          //Function Calling and Arguments
}
