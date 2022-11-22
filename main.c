#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[] = { 1, 2, 3, 4, 5};
    int needle = 5;

    int n = sizeof(array) / sizeof(array[0]);
    
    int low = 0, high = n, v;

    do{
        int m = (int) low + (high - low)/2;
        v = array[m];
        if (v == needle)
            printf("found :-)");
        
    }while(low < high);


    return 0;
}