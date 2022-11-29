#include <stdio.h>
#include "my_mat.h"

void A(int crate[10][10]){
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            int number;
            scanf("%d\n",&number);
            crate[i][j]= number;
        }
    }
}

void B(int TorF[10][10]){
    int i, j;
    scanf("%d %d\n", &i, &j);
    if(TorF[i][j] == 99999999 || TorF[i][j] <= 0)
        printf("False\n");
    else 
        printf("True\n");
  
}
void makeRoute(int route[10][10]){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
            if(route[i][j] == 0)
                route[i][j] = 99999999;
        }
    }     
    for (int i = 0; i < 10; i++)
    {
        route[i][i]=0;
    }
    
    for(int k=0;k<10;k++)
	{
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<10;j++)
			{	
                    
				if(route[i][j]>route[i][k]+route[k][j])
				{ 
                    if(route[i][k]+route[k][j]<0){
                        if(route[i][k]==99999999) 
                            route[i][j]= route[k][j];
                        else
                            route[i][j]=  route[i][k];
                    } 
					route[i][j]=route[i][k]+route[k][j];
				}
		    }
	    }
	}
}
void C(int shorter[10][10]){
    int i, j;
    scanf("%d %d\n", &i, &j);
    if (shorter[i][j] == 99999999 || shorter[i][j] <= 0 ) 
        printf("-1\n");
    else if(i==j) printf("-1\n");
    else printf("%d\n",shorter[i][j]);
}
