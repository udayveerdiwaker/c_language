// int main(){
//     int num, fact;
//     printf("Enter a number to find its factorial: ");
//     scanf("%d", &num);

//     for(fact = 1; fact <= num; fact++){
//         if(num % fact == 0){
//            printf("%d\n", fact);
//         }
//     }
//     printf("The factorial of %d\n", num);
//     system("pause");
//     return 0;
// }

#include <stdio.h>
#include <math.h>


int main() {
    int a[10], n, key, low, high, mid, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            printf("Element found");
            return 0;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element not found");
    system('pause');
    return 0;
}
