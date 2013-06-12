//By considering the terms in the Fibonacci sequence whose values do not exceed four million,
// find the sum of the even-valued terms.


#include <iostream>
#include <vector>

int main()
{
    size_t rozmiar = 4000000;
    std::vector<long int> sequence(rozmiar);
    sequence[1] = 3;                            //the sum of an even term and an odd term is always odd, thus the only terms that are
    sequence[2] = 5;                            //of interest to us are the sums of two odd terms, which makes it
    int i = 3;                                  //every third term, starting from 3 as the first term.
    bool ifOver = true;
    long int licznik = 2;                       //since we skipped the first even term of Fibonacci progression, we have to add it
    while (ifOver)
    {
        sequence[i] = sequence[i-1] + sequence[i-2];
        if (sequence[i] > 4000000)
        {
            ifOver = false;
        }
        if ((i%3 == 0) && (ifOver))
        {
            licznik = licznik + sequence[i];
        }
        ++i;
    }

    std::cout << licznik;



    return 0;
}
