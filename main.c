#include <stdio.h>
#include "my_mat.h"


int main(){
    char func;
    int routeArray[10][10];
    int matArray[10][10];
    while(func != 'D'){
        scanf(" %c", &func);
        if(func == 'A'){
            A(matArray);
            makeRoute(matArray); 
        }
        else if (func =='B'){
            B(routeArray);
            printf("\n");
        }
        else if(func == 'C'){
            C(routeArray);
            printf("\n");
        }
    }
    return 0;
}
