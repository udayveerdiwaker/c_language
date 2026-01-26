#include <stdio.h>
int main(){
    // int a[5], i, max;

    // for(i = 0; i < 5; i++)
    //     scanf("%d", &a[i]);

    // max = a[0];
    // for(i = 1; i < 5; i++) {
    //     if(a[i] > max)
    //         max = a[i];
    // }

    // printf("Largest = %d", max);
    FILE *fp;
    fp = fopen("test2.txt","w");
    fprintf(fp,"Hello File");
    fclose(fp);
    return 0;

    return 0;
}

//     int a[5],i,max;
//     for(i=0;i<5;i++)
//         scanf("%d",&a[i]);
//     max=a[0];
//     for(i=1;i<5;i++){
//         if(a[i]>max)
//             max=a[i];
//     }
//     printf("Max=%d\n",max);

//     int *p;
// p = (int*)malloc(5*sizeof(int));
// free(p);

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x=10, y=20;
//     swap(&x, &y);
//     printf("%d %d", x, y);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *p;
//     p = (int*)malloc(5 * sizeof(int));

//     if(p == NULL)
//         printf("Memory not allocated");
//     else
//         printf("Memory allocated");

//     free(p);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int age = 20;
//     float marks = 85.5;
//     char grade = 'A';

//     printf("Age = %d\n", age);
//     printf("Marks = %f\n", marks);
//     printf("Grade = %c", grade);
//      int i;
//     for(i = 1; i <= 5; i++) {
//         printf("%d ", i);
//     }
//     return 0;
// }
// void display() {
//     printf("Hello World");
// }
// int main() {
//     display();
//     return 0;
// }

