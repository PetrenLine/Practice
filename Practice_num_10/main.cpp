#include <QCoreApplication>
#include <iostream>

void Grafic()
{
  for ( int i = 0; i < 80; ++i )
    std::cout << "*";
}

int main()
{
  std::cout << "Task 10.33" << std::endl;
  Grafic();
  std::cout << "" << std::endl;
  return 0;
}
