#include <stdio.h>
// int main(){
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

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x=10, y=20;
    swap(&x, &y);
    printf("%d %d", x, y);

    return 0;
}

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
