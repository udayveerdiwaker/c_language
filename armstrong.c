#include <stdio.h>
#include <math.h> // for pow()

// int main() {
//     int num, rem, sum, copy;

//     // loop from 1 to 10000
//     for(num = 1; num <= 10000; num++) {

//         sum = 0;        // har number ke liye sum ko 0 se start karte hain
//         copy = num;     // copy banate hain num ki, taki asli num badle na

//         // har digit ka cube nikalne ke liye loop
//         while(copy != 0) {
//             rem = copy % 10;               // last digit nikalo
//             sum = sum + (rem * rem * rem); // us digit ka cube add karo
//             copy = copy / 10;              // last digit hata do
//         }

//         // agar cube ka total number ke barabar hai → Armstrong number
//         if(num == sum) {
//             printf("%d is an Armstrong number.\n", num);
//         }
//     }





int main() {
    int num, copy, rem, digits;
    double sum;

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


