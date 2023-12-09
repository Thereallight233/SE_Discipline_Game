#include "main.h"
#include <stdio.h>
#include <string.h>

void displayMainMenu(void)
{
    	// Print the main menu options
    	printf("Main Menu:\n");
    	printf("1. Transfer Money\n");
    	printf("2. Airtime and Bundles\n");
    	printf("3. Allow Cashout\n");
    	printf("0. Exit\n");
}
void displayTransferOptions()
{
	printf("Transfer Options:\n");
   	printf("1. Momo User\n");
   	printf("2. Non Momo User\n");
   	printf("3. Other Networks\n");
   	printf("4. Bank Account\n");
   	printf("5. Back to Main Menu\n");
}
// Function to display airtime and bundles submenu
void displayAirtimeBundlesOptions()
{
 	printf("Airtime and Bundles Options:\n");
    	printf("1. Airtime\n");
    	printf("2. Internet Bundle\n");
    	printf("3. Fixed Broadband\n");
    	printf("4. Just4U\n");
    	printf("5. Back to Main Menu\n");
}

// Function to perform transfer for Momo User
void transferMomoUser()
{
    	char recipientNumber[20];
    	printf("Enter recipient's mobile number: ");
    	scanf("%s", recipientNumber);

    	// Validation and transfer logic would go here
   	printf("Transfer to %s successful!\n", recipientNumber);
}
// Function to perform transfer to Non Momo User
void transferNonMomoUser()
{
	char recipientName[20];
	printf("Enter reciever's name: ");
	scanf("%s", recipientName);

	// Validation and transfer logic would go here
	printf("Transfer to %s successful!\n", recipientName);
}
//Function to perform transfer to Other Networks
void transferOtherNetworks()
{
	printf("Other Networks\n");
	printf("1. AirtelTigo\n");
 	printf("2. Vodaphone\n");
 	printf("3. E-zwich\n");
 	printf("4. Zeepay\n");
 	printf("5. GhanaPay\n");
 	printf("6. G-money\n");
       	printf("0. Back\n");
}
// Function to perform transfer to Bank Account
void transferBankAccount()
{
	printf("Transfer to Bank");
}
// Function to perform airtime purchase
void purchaseAirtime()
{
    	// Airtime purchase logic would go here
    	printf("Airtime purchased successfully!\n");
}

// Function to perform cashout
void performCashout()
{
    	// Cashout logic would go here
    	printf("Cashout successful!\n");
}

// Function to implement the main program flow
void mobileMoneyProgram()
{
    	char ussdCode[10];
    	char userChoice;

    	// Step 1-4
    	printf("Welcome to Mobile Money!\nEnter USSD code: ");
    	scanf("%s", ussdCode);

    	if (strcmp(ussdCode, "*170#") == 0)
	{
        do {
            // Step 5-6
            displayMainMenu();

            // Step 7
            printf("Enter your choice: ");
            scanf(" %c", &userChoice);

            switch (userChoice) {
                case '1':
                    // Step 8
                    displayTransferOptions();
                    printf("Enter your transfer choice: ");
                    scanf(" %c", &userChoice);

                    switch (userChoice) {
                        case '1':
                            transferMomoUser();
                            break;
			case '2':
			    transferNonMomoUser();
			    break;
			case '3':
			    transferOtherNetworks();
			    break;
			case '4':
			    transferBankAccount();
			    break;
                        case '5':
			    displayMainMenu();
                            break;

                        default:
                            printf("Invalid choice for transfer option.\n");
                    }
                    break;

                case '2':
                    // Step 9
                    displayAirtimeBundlesOptions();
                    printf("Enter your airtime/bundle choice: ");
                    scanf(" %c", &userChoice);

                    switch (userChoice) {
                        case '1':
                            // Step 9a
                            purchaseAirtime();
                            break;
                        // Handle other airtime/bundle options here

                        case '5':
                            // Step 9b
                            // User chose to go back to the main menu
                            break;

                        default:
                            printf("Invalid choice for airtime/bundle option.\n");
                    }
                    break;

                case '3':
                    // Step 10
                    performCashout();
                    break;

                case '4':
                    // Step 11
                    printf("Exiting Mobile Money program.\n");
                    break;

                default:
                    printf("Invalid choice. Please choose a valid option.\n");
            }

            // Step 12
            printf("Do you want to perform another operation? (y/n): ");
            scanf(" %c", &userChoice);

        } while (userChoice == 'y');

        // Step 13-15
        printf("Thank you for using Mobile Money. Have a great day!\n");
    } else {
        // Step 4 (Error handling)
        printf("Error: Invalid USSD code. Exiting program.\n");
    }
}
