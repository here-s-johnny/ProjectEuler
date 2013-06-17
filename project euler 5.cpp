//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>

bool ifEvenly(int number)
{
    bool flag = true;
    for (int i = 11; i < 21; ++i)
    {
        if ((number%i != 0) && (flag))
        {
            flag = false;
        }
    }
    if (flag)
    {
        return true;
    }
}

int main()
{
    int counter = 20;
    bool weGotIt = false;
    while (!weGotIt)
    {
        if (ifEvenly(counter))
        {
            weGotIt = true;
        }
        else
        {
            ++counter;
        }
    }
    std::cout << counter;

    return 0;
}
