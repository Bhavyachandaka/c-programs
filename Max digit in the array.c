#include <stdio.h>
#include<conio.h>
int max(int digits[], int size)
{
    int max = digits[0];
    for (int i = 1; i < size; i++)
    {
        if (digits[i] > max)
        {
            max = digits[i];
        }
    }
    return max;
}
int main()
 {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int digits[10];
    int size = 0;
    while (num > 0)
    {
        digits[size] = num % 10;
        num /= 10;
        size++;
    }
    int result = max(digits, size);
    printf("The maximum digit is %d\n", result);
    return 0;
}
