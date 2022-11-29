#include <stdio.h>
#include "my_mat.h"


int main(){
    char func;
    int matArray[10][10]= {0};
    while(func != 'D'){
        scanf("%c\n", &func);
        if(func == 'A'){
            A(matArray);
            makeRoute(matArray); 
        }
        else if (func =='B'){
            B(matArray);
        }
        else if(func == 'C'){
            C(matArray);
        }
    }
    return 0;
}
