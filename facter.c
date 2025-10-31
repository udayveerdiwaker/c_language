int main(){
    int num, fact;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    for(fact = 1; fact <= num; fact++){
        if(num % fact == 0){
           printf("%d\n", fact);
        }
    }
    printf("The factorial of %d\n", num);
    return 0;
}