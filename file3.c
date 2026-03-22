#include <stdio.h>

// Recursive function to check prime
int isPrime(int n, int i) {
    // Base cases
    if (n <= 2)
        return (n == 2) ? 1 : 0;
    
    if (n % i == 0)
        return 0;
    
    if (i * i > n)
        return 1;

    // Recursive call
    return isPrime(n, i + 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Neither Prime nor Composite\n");
    } 
    else if (isPrime(num, 2)) {
        printf("Prime Number\n");
    } 
    else {
        printf("Composite Number\n");
    }

    return 0;
}
update 
