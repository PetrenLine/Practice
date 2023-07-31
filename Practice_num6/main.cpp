#include <QCoreApplication>
#include<iostream>
#include <cmath>
#include<string.h>

int main()
{

  {
    //Task 6.10
    int n;
    int i = 1;

    std::cout << "6.10" << std::endl;
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
          std::cout << "b) " << std::endl;
          std::cout << "  " << i << std::endl;
          i++;
        }
      }
    }
  }
  {

    //Task 6.113
    std::cout << "6.113" << std::endl;
    int n;
    int m;
    int count = 0;
    int sum = 0;
    std:: cout << "Enter the number n: ";
    std:: cin >> n;
    std:: cout << "Enter the number m: ";
    std:: cin >> m;

    while ( count < m )
    {
      int d = n % 10;
      sum += d;
      n /= 10;
      count++;
    }

    std::cout << "Summa " << m << " Last numbers = " << sum << std::endl;
  }
}
