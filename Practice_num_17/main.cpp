#include <QCoreApplication>
#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

bool sortirovka( int a, int b )
{
  std::string strA = std::to_string( a );
  std::string strB = std::to_string( b );
  std::sort( strA.begin(), strA.end() );
  std::sort( strB.begin(), strB.end() );

  if ( strA == strB )
    return true;
  else
    return false;
}
int main()
{
  int a;
  int b;
  std::cout << "Enter the first number" << std::endl;

  std::cin >> a;
  std::cout << "Enter the second number" << std::endl;

  std::cin >> b;

  if ( sortirovka( a, b ) )
    std::cout << "True" << std::endl;
  else
    std::cout << "False" << std::endl;

}
