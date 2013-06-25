//Find the sum of all the primes below two million.

#include <iostream>
#include <vector>

int main()
{
    long long int sum = 0;
    std::vector<long long int> primes (2);
    for (long long int i = 2; i < 2000001; ++i)
    {
        primes.push_back(i);
    }

    for (long long int j = 2; j < primes.size(); ++j)
    {
        if (primes[j] != 0)

        {
            for (long long int x = j+j; x < primes.size(); x = x + j)
            {
                primes[x] = 0;
            }
        }
    }
    for (long long int s = 2; s < primes.size(); ++s)
    {
        sum = sum + primes[s];
    }



    std::cout << sum;


    return 0;
}
