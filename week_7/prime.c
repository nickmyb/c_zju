#include <stdio.h>

// 申明数组要写 type name[], 不能写 type[] name
int is_prime(int x, int known_primes[], int length)
{
    int is_prime = 1;
    for (int i = 0; i < length; i++)
    {
        if (x % known_primes[i] == 0)
        {
            is_prime = 0;
            break;
        }
    }
    return is_prime;
}

int main()
{
    const int length_of_prime_array = 100;
    int prime_array[length_of_prime_array] = {2};
    int prime_count = 1;
    int current_num = 3;

    while (prime_count < length_of_prime_array)
    {
        if (is_prime(current_num, prime_array, prime_count))
        {
            prime_array[prime_count++] = current_num;
        }
        current_num++;
    }

    for (int i = 0; i < length_of_prime_array; i++)
    {
        printf("%d ", prime_array[i]);
    }
}