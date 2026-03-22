#include <stdio.h>
#include <string.h>


void clear_entrance() {

    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}

}

int main() {

    char name[10];
    char address [50];
    char phone [14];

    printf("Type your name: \n");
    scanf("%s", name);
    
    printf("Enter your address: \n");
    clear_entrance();
    fgets(address, 50, stdin);

    printf("Type your phone number: \n");
    scanf("%s", &phone);

    printf("Your name is %s\n", name);
    printf("This is your address: %s\n", address);
    printf("Your phone number is: %s\n", phone);


    return 0; 

}