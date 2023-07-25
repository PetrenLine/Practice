#include <QCoreApplication>
#include<iostream>
#include <cmath>

int main()
{
  {
    //Task 6.10
    int n;
    int i = 1;

    std::cout << "Enter the number" << std::endl;
    std::cout << "Entered number:";
    std::cin >> n;
    std::cout << "a)" << std::endl;
    {
      //a
      while ( pow( i, 2 ) <= n )
      {
        // std::cout << "a)" << std::endl;
        std::cout << "  " << i << std::endl;
        i++;
      }

      {
        //b
        while ( pow( i, 2 ) <= n + 1 )
        {
          std::cout << "b)" << std::endl;
          std::cout << "  " << i << std::endl;
          i++;
        }
      }
    }
  }
}
