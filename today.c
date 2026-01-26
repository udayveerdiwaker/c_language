#include <stdio.h>
// int main() {
    // int n, sum = 0;

    // printf("Enter a number: ");
    // scanf("%d", &n);

    // for (int i = 1; i <= n; i++) {
    //     sum += i;   // sum = sum + i
    // }

    // printf("Sum of first %d numbers = %d\n", n, sum);


    // flow chart
// int a,b,c;
// a=5;
// b=10;
// c = a + b;
// printf("Sum is %d\n",c);



    // int n;
    // printf("Enter number: ");
    // scanf("%d", &n);
    // if(n % 2 == 0)
    //     printf("Even\n");
    // else
    //     printf("Odd\n");

//  int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b && a>c)
//         printf("Largest = %d",a);
//     else if(b>c)
//         printf("Largest = %d",b);
//     else
//         printf("Largest = %d",c);

//  int n,i;
//     long fact=1;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//         fact=fact*i;
//     printf("Factorial = %ld",fact);

    // int n,rev=0,rem;
    // printf("Enter number: ");
    // scanf("%d",&n);
    // while(n!=0){
    //     rem=n%10;
    //     rev=rev*10+rem;
    //     n=n/10;
    // }
    // printf("Reverse = %d",rev);

    // int n,temp,rev=0,rem;
    // printf("Enter number: ");
    // scanf("%d",&n);
    // temp=n;
    // while(n!=0){
    //     rem=n%10;
    //     rev=rev*10+rem;
    //     n=n/10;
    // }
    // if(temp==rev)
    //     printf("Palindrome");
    // else
    //     printf("Not Palindrome");


    //     int i,j;
    // for(i=1;i<=4;i++){
    //     for(j=1;j<=i;j++)
    //         printf("*");
    //     printf("\n");
    // }
    // int a[5],i,max;
    // for(i=0;i<5;i++)
    //     scanf("%d",&a[i]);
    // max=a[0];
    // for(i=1;i<5;i++){
    //     if(a[i]>max)
    //         max=a[i];
    // }
    // printf("Max=%d\n",max);


//     return 0;
// }

// int fact(int n) {
//     if(n == 1)
//         return 1;
//     else
//         return n * fact(n-1);
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     printf("Factorial = %d", fact(n));
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    p = (int*)malloc(5 * sizeof(int));

    if(p == NULL)
        printf("Memory not allocated");
    else
        printf("Memory allocated");

    free(p);
    return 0;
}