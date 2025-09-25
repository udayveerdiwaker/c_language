#include <stdio.h>
int main() {
    // restaurant menu
    // int choice;
    // printf("===== Restaurant Menu =====\n");
    // printf("1. Burger - $5.00\n");
    // printf("2. Pizza - $8.00\n");
    // printf("3. Salad - $4.00\n");
    // printf("4. Exit\n");
    // printf("Choose an option: ");
    // scanf("%d", &choice);

    // switch(choice) {
    //     case 1:
    //         printf("You ordered a Burger.\n");
    //         break;
    //     case 2:
    //         printf("You ordered a Pizza.\n");
    //         break;
    //     case 3:
    //         printf("You ordered a Salad.\n");
    //         break;
    //     case 4:
    //         printf("Exiting...\n");
    //         break;
    //     default:
    //         printf("Invalid choice. Please try again.\n");
    // }


    int choice, qty;
    float total = 0;

    do {
        printf("\n===== Restaurant Menu =====\n");
        printf("1. Pizza - 120\n");
        printf("2. Burger - 80\n");
        printf("3. Sandwich - 60\n");
        printf("4. Cold Drink - 40\n");
        printf("5. Exit & Bill\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter quantity: ");
                scanf("%d", &qty);
                total += 150 * qty;
                break;
            case 2:
                printf("Enter quantity: ");
                scanf("%d", &qty);
                total += 80 * qty;
                break;
            case 3:
                printf("Enter quantity: ");
                scanf("%d", &qty);
                total += 60 * qty;
                break;
            case 4:
                printf("Enter quantity: ");
                scanf("%d", &qty);
                total += 40 * qty;
                break;
            case 5:
                printf("\nTotal Bill = %.2f\n", total);
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 5);

        return 0;
    }

 