#include <cs50.h>
#include <stdio.h>
#include <string.h>

string promptAndValidate(string fieldname);

int main(void)
{
    printf("Hello, thank you for signing up for: The United States\n");
    printf("I'll need to get some info from you please...\n\n");

    // get first name and make sure it's valid
    string firstname = "";
    printf("First Name: ");
    firstname = promptAndValidate(firstname);

    // get last name and make sure it's valid
    string lastname = "";
    printf("Last Name: ");
    lastname = promptAndValidate(lastname);

    // get state and make sure it's valid
    string state = "";
    printf("State of Residence: ");
    state = promptAndValidate(state);

    // get email and make sure it's valid
    string email = "";
    printf("Email Address: ");
    email = promptAndValidate(email);

    printf("\nGreat thanks, lemme just enter that into my system here...\n");
    printf("%s %s from %s, at %s\n", firstname, lastname, state, email);
    printf("Excellent! Please pay your taxes in April, or you'll be hearing from us (check your spam folder).\n");
}

string promptAndValidate(string fieldname)
{
    while(strlen(fieldname) < 2)
    {
        printf("(must be at least 2 characters long):\n ");
        fieldname = GetString();
    }
    return fieldname;
    
}