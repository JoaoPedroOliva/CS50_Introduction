#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int size);

int main (void)
{
    int n;
    n = get_size();
    print_grid(n);
}

int get_size(void){
    int n = 0;
    do{
        if(n < 1){
            n = get_int("Try again, Size: ");
        }
    }while(n < 1);
    return n;
}

void print_grid(int size){
    for (int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("#");
        }
        printf("\n");
    }
}