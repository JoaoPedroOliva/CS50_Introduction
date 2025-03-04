#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    int end_size;
    int born = 0;
    int death = 0;
    int aux = 0;
    int i;
    do{
        start_size = get_int("Start Size: ");
    }while(start_size < 9);
    // TODO: Prompt for end size
    do{
        end_size = get_int("End Size: ");
    }while(end_size < start_size);
    // TODO: Calculate number of years until we reach threshold
    for (i = 0; start_size < end_size; i++){
        born = (start_size/3);
        death = (start_size/4);
        start_size = start_size + (born - death);
    }
    // TODO: Print number of years
    printf("Years: %i\n",i);
}
