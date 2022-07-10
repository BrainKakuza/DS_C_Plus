#include <iostream>

void log(int num[])
{
    // O(n^3)
    for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) // O(n)
    {
        for (int j = 0; j < sizeof(num) / sizeof(num[0]); j++) // O(n)
        {
            for (int k = 0; k < sizeof(num) / sizeof(num[0]); k++) // O(n)
            {
                std::cout << num[k];
            }
        }
    }
}

int main(void)
{

    return 0;
}