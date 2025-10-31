// #include <stdio.h>
// #include <math.h>
// int main(){
//     int digit, rem, sum, copy;
//     double num;
    // 3 digits Armstrong numbers are:
    // printf("Enter an integer: ");
    // scanf("%d", &num);
//     for(num = 1; num <= 10000; num++){

//     sum = 0;
//     copy = num;

//     while(copy != 0){
//         rem = copy % 10;
//         sum = sum + (rem * rem * rem);
//         copy /= 10;
//     }
//     if(num == sum){
//         printf("%d is an Armstrong number.\n", num);
//     }
// }






    // Check numbers from 1 to 1000000 (you can change the range)
    for (num = 1; num <= 1000000; num++) {

        copy = num;
        sum = 0.0;

        // Step 1: Count digits
        digits = 0;
        int temp = copy;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        // Step 2: Calculate sum of each digit raised to 'digits'
        while (copy != 0) {
            rem = copy % 10;
            sum = sum + pow(rem, digits); // pow() gives rem^digits
            copy /= 10;
        }

        // Step 3: Compare
        if ((int)sum == num) {
            printf("%d is an Armstrong number.\n", num);
        }
    }

    return 0;
}



// #include <stdio.h>

// int main() {
//     int num, rem, sum, copy;
//     printf("Armstrong numbers between 1 and 10000 are:\n");
//     // loop through numbers from 1 to 10000
//     for(num = 1; num <= 200000; num++) {

//         sum = 0;        // reset sum for each number
//         copy = num;     // make a copy of num

//         // extract digits and calculate cube sum
//         while(copy != 0) {
//             rem = copy % 10;             // get last digit
//             sum = sum + (rem * rem * rem); // add cube of digit
//             copy /= 10;                  // remove last digit
//         }

//         // check if num equals sum of cubes of its digits
//         if(num == sum) {
//             printf("%d is an Armstrong number.\n", num);
//         }
//     }

//     return 0;
// }
