#include <QCoreApplication>
#include <iostream>

int Powsum( int num )
{

  int sum = 0;

  while ( num > 0 )
  {
    sum += num % 10;
    num /= 10;
  }

  return sum;
}
bool AscPowSum( int num, int m )
{
  int sum = Powsum( num );
  return sum * sum == m;
}

int main()
{
  std::cout << "Task 8.49" << std::endl;
  int m;
  int n;
  std::cout << "Enter the value of n" << std::endl;
  std::cin >> n;
  std::cout << "Enter the value of m" << std::endl;
  std::cin >> m;
  std::cout << "Nambers less than " << n << ", with the square of the sum of digits equal to " << m <<
            ":" << std::endl;

  for ( int i = 1; i < n; i++ )
  {
    if ( AscPowSum( i, m ) )
      std::cout << i << std::endl;
  }
}
