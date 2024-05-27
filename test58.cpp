#include <stdio.h>
#include <conio.h>
int main() 
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int even_count = 0;
    int odd_count = 0;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);

    return 0;
}

