#include <QCoreApplication>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
  std::srand( std::time( nullptr ) );
  char choice;

  do
  {

    int result = std::rand() % 7;

    std::cout << "Result: " << result << std::endl;

    std::cout << "If you want to continue ? (y-YES, n-NOT) ";
    std::cin >> choice;
  } while ( choice != 'n' );

  return 0;
}
