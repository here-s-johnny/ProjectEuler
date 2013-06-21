#include <iostream>



int main()
{
   int a;
   int b;
   int c;
   bool flag = true;
   int score;

    for (a = 10; a < 500; ++a)
    {
        if (flag)
        {
            for (b = a; b < 500; ++b)
            {
                if (flag)
                {
                    c = 1000 - a - b;
                    if (a*a + b*b == c*c)
                    {
                        flag = false;
                        score = a * b * c;
                    }
                }
            }
        }
    }





    std::cout << score;

    return 0;
}
