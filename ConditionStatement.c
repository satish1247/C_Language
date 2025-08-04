#include <stdio.h>

// int main() {
//     int num1;
//     int num2;
//     printf("Enter the 1st number: ");
//     scanf("%d", &num1);
//     printf("Enter the 2nd number: ");
//     scanf("%d", &num2);

//     if (num1 > num2){
//         printf("%d is greater than %d\n", num1, num2);
//     } else{
//         printf("%d is not greater than %d\n", num1, num2);
//     }
//     return 0;
// }

// int main() {
//     int num1;
//     int num2;
//     int num3;
//     printf("Enter the 1st number: ");
//     scanf("%d", &num1);
//     printf("Enter the 2nd number: ");
//     scanf("%d", &num2);
//     printf("Enter the 3rd number: ");
//     scanf("%d", &num3);

//     if (num1 > num2 && num1 > num3){
//         printf("%d is greater than %d\n", num1, num2);
//     } else if (num2 > num1 && num2 > num3) {
//         printf("%d is not greater than %d\n", num1, num2);
//     } else {
//         printf("%d is not greater than both %d and %d\n", num1, num2, num3);
//     }
//     return 0;
// }

// int main() {
//     int num1;
//     int num2;
//     printf("Enter the 1st number: ");
//     scanf("%d", &num1);
//     printf("Enter the 2nd number: ");
//     scanf("%d", &num2);

// num1>num2 ? printf("%d number is greater one",num1) : printf("%d number is greater one",num2);
//     return 0;
// }

int main() {
    int num;
    printf("Enter the number 0 - 10 : ");
    scanf("%d", &num);

    switch(num){
        case 0:
            printf("You entered zero.\n");
            break;
        case 1:
            printf("You entered one.\n");
            break;
        case 2:
            printf("You entered two.\n");
            break;
        case 3:
            printf("You entered three.\n");
            break;
        case 4:
            printf("You entered four.\n");
            break;
        case 5:
            printf("You entered five.\n");
            break;
        case 6:
            printf("You entered six.\n");
            break;
        case 7:
            printf("You entered seven.\n");
            break;
        case 8:
            printf("You entered eight.\n");
            break;
        case 9:
            printf("You entered nine.\n");
            break;
        case 10:
            printf("You entered ten.\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 0 and 10.\n");
    }

    
    return 0;
}