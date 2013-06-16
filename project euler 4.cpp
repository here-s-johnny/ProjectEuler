//Find the largest palindrome made from the product of two 3-digit numbers.


#include <iostream>
#include <cmath>

bool ifPalindrome(long int number)              //this function checks, whether the first digit of the number is the same as
{                                               //the last, second as fifth, and so on (I am aware, that the comments are
    int number1 = number%10;                    //probably unnecessary, but I decided to practice them a bit ;) )
    int number10 = floor((number%100)/10);
    int number100 = floor((number)%1000/100);
    int number1000 = floor((number)%10000/1000);
    int number10000 = floor((number)%100000/10000);
    int number100000 = floor(number/100000);

    if ((number1 == number100000) && (number10 == number10000) && (number100 == number1000))
    {
       return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int theNumber;
    int multiple;
    bool flag = true;
    for (int i = 998001; i > 9999; --i)
    {
        if(ifPalindrome(i) && (flag))
        {
            for (int j = 999; j > 99; --j)
            {
                if ((i%j == 0) && (flag))
                {
                    theNumber = i;
                    multiple = j;
                    if ((i/j > 99) && (i/j < 1000))
                    {
                        flag = false;
                    }
                }
            }
        }
    }

    std::cout << theNumber << std::endl;
    std::cout << multiple << std::endl;
    std::cout << theNumber/multiple << std::endl;

    return 0;
}
