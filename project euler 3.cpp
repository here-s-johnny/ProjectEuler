//What is the largest prime factor of the number 600851475143 ?


#include <iostream>



int main()
{
    int i;
    bool flag;
    long long int liczba = 600851475143;
    while (liczba > 1)
    {
        i = 2;
        flag = true;
        while (flag)
        {
            if ((liczba%i == 0))
            {
                flag = false;
                liczba = liczba/i;
            }
            else
            {
                ++i;
            }
        }

    }
    std::cout << i;


    return 0;
}
