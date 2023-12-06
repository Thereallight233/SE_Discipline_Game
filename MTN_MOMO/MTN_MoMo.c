#include "main.h"
#include <stdio.h>
#include <string.h>

int main()
{
    // Show a welcome message
    printf("Welcome to the Mobile Money Program!\n");

    // Wait for the user to type in a special code (USSD code)
    char ussdCode[10];
    printf("Enter USSD code: ");
    scanf("%s", ussdCode);

    if (strcmp(ussdCode, "*170#") == 0)
        // If the code is "*170#", go to the main menu
        displayMainMenu();

return (0);
}
