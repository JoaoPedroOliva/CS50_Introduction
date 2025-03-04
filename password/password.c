// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library
//True is right the password
//False the passoword need things

#include <cs50.h>
#include <stdio.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int i = 0;
    bool lower, upper, number, symbol = false;
    do{
        if(password[i] >= 'a' && password[i] <= 'z'){
            lower = true;
        }
        else if(password[i] >= 'A' && password[i] <= 'Z'){
            upper = true;
        }
        else if(password[i] >= '0' && password[i] <= '9'){
            number = true;
        }
        else if(password[i] >= ' ' && password[i] <= '/'){
            symbol = true;
        }
        i++;
    }while(password[i] != '\0');
    if(lower == true && upper == true && number == true && symbol == true){
        return true;
    }
    else{
        return false;
    }
}
