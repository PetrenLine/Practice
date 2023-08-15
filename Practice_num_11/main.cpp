#include <QCoreApplication>
#include <iostream>

int main()
{
//11.55

  const int b[10] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

//a
  {
    int sum = 0;

    for ( int i = 0; i < sizeof( b ) / sizeof( b[0] ); i++ )
    {
      if ( b[i] % 2 != 0 )
        sum += b[i];
    }

    std::cout << "a) Sum of odd elements: " << sum << std::endl;
  }
  //b

  {

    int n;
    int sum1 = 0;
    std::cout << "Enter the number " << std::endl;
    std::cin >> n;

    for ( int i = 0; i < sizeof( b ) / sizeof( b[0] ); i++ )
    {
      if ( b[i] % n == 0 )
        sum1 += b[i];
    }

    std::cout << "b) Sum of elements, multiples of " << n << ": " << sum1 << std::endl;
  }
  //c

  {

    int a;
    int v;
    int sum2 = 0;
    std::cout << "Enter the number " << std::endl;
    std::cin >> a;
    std::cin >> v;

    for ( int i = 0; i < sizeof( b ) / sizeof( b[0] ); i++ )
    {
      if ( b[i] % a == 0 )
        sum2 += b[i];

      if ( b[i] % v == 0 )
        sum2 += b[i];

    }

    std::cout << "c) Sum of elements, multiples of " << a << ": " << sum2 << std::endl;
    std::cout << "C) Sum of elements, multiples of " << v << ": " << sum2 << std::endl;
  }

}
