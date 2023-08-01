#include <QCoreApplication>
#include <iostream>

int main()
{
  std::cout << "Task 7.105 ";
  int n;
  std::cout << "   Enter natural number n: ";
  std::cin >> n;

  int count = 0;

  for ( int i = 1; i <= n; i++ )
  {
    int c;
    std::cout << "   Enter the the value of an integer C for i = " << i << ": ";
    std::cin >> c;

    if ( c < 20 )
      count++;
  }

  std::cout << "   Number of value, less than 20: " << count << std::endl;

  if ( count == 5 )
    std::cout << "   The statement is true." << std::endl;

  else
    std::cout << "   The statement is false." << std::endl;
}
