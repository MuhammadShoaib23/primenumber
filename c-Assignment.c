// Name : Muhammad Shoaib.
// F/N  : Abdul Rasheed Alizai.
// R/N  : 15.

#include <stdio.h>
int isprime(int num)
{
    if (num < 2 && num>100)
        return 0;
    for (int n= 2; n*n<= num; n++)
	{
        if (num % n == 0)
            return 0;
    }
    return 1;
}
int main() {
    int input;
    while (1) {
        printf("PLEASE ENTER A NUMBER BETWEEN 2 and 100: ");
        scanf("%d", &input);
        if (input >= 2 && input <= 100) {
            int result = isprime(input);
            if (result == 1)
                printf("THIS NUMBEER IS PRIME.\n");
            else
                printf("THIS NUMBER IS NOT PRIME.\n");
            break;
        } else {
            printf(" THIS NUMBER IS OUT OF RANGE . PRESS 1 to RETRY: ");
            int retry;
            scanf("%d", &retry);
            if (retry != 1)
               break;
        }
    }
    return 0;
}
