// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch
//a -> 6
//e -> 3
//i -> 1
//o -> 0


#include <cs50.h>
#include <stdio.h>

string new_string(string replace);

int main(int argc, string argv[])
{
    printf("%s\n", new_string(argv[1]));
}

string new_string(string replace)
{
    int i=0;
    do{
        if(replace[i]=='a' || replace[i]=='A'){
            replace[i]='6';
        }
        else if(replace[i]=='e' || replace[i]=='E'){
            replace[i]='3';
        }
        else if(replace[i]=='i' || replace[i]=='I'){
            replace[i]='1';
        }
        else if(replace[i]=='o' || replace[i]=='O'){
            replace[i]='0';
        }
        i++;
    }while(replace[i] != '\0');
    return replace;
}