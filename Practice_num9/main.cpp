#include <QCoreApplication>
#include <cctype>
#include<iostream>

int main()
{
  std::cout << "Task 9.138" << std::endl;
  char ch;
  std::cout << "  Enter ths sybol(english layout) " << std::endl;
  std::cin >> ch;

  if ( isdigit( ch ) )
    std::cout << "    This is a digit" << std::endl;
  else if ( isalpha( ch ) )
    std::cout << "    This is a letter" << std::endl;

}
