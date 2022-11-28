#include <stdio.h>
#include "my_mat.h"
void A(){
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            int number;
            scanf(" %d", &number);
            matArray[i][j]= number;
        }
    }
}

void B(int arr[10][10]){
    int i, j;
    scanf(" %d %d", &i, &j);
    if(arr[i][j] !=0 || arr[j][i] != 0) printf("True");
    else printf("False");
  
}
void makeRoute(int arr[10][10]){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(i==j) routeArray[i][j]=0;
            else routeArray[i][j]=arr[i][j];
        }
    }
    
    for(int k=0;k<10;k++)
	{
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<10;j++)
			{
				if(routeArray[i][j]>routeArray[i][k]+routeArray[k][j])
				{
					routeArray[i][j]=routeArray[i][k]+routeArray[k][j];
				}
		    }
	    }
	}
}
void C(int arr[10][10]){
    int i, j;
    scanf(" %d %d", &i, &j);
    if(arr[i][j] == 0)
        printf("-1");
    else
    printf(" %ls", &arr[i][j]);
}
