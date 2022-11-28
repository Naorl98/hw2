#include <stdio.h>
#include "my_mat.h"


int main(){

    char func;
    while(func != 'D'){
        scanf(" %c", &func);
        if(func == 'A'){
            A();
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
