//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number?

#include <iostream>


int main()
{
    int counter = 6;
    int i = 13;
    bool flag;
    while (counter < 10002)
  {
     flag = true;
     for (int j = 2; j < i; ++j)
     {
         if ((i % j == 0) && (flag))
         {
             flag = false;
         }
     }
     if (flag)
     {
         ++counter;
     }
     ++i;
  }
  std::cout <<i-1;
    return 0;
}
