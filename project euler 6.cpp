//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>


int main()
{
    long int sumOfSquares = 0;
    long int squareOfSum = ((100/2)*101*(100/2)*101);


    for (int i = 1; i < 101; ++i)
    {
        sumOfSquares = sumOfSquares + (i * i);
    }

    std::cout << sumOfSquares << std::endl;
    std::cout << squareOfSum << std::endl;
    std::cout << sumOfSquares - squareOfSum;

    return 0;
}
