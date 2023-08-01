#include <QCoreApplication>
#include <iostream>
#include <string>

void Grafic()
{
  for ( int i = 0; i < 80; ++i )
    std::cout << "*";
}
void dec( const int num, std::string& snum )
{
  if ( num % 2 == 0 )
    snum += "0";
  else snum += "1";

  if ( ( num / 2 ) != 0 ) dec( num / 2, snum );
  else return;

  reverse( snum.begin(), snum.end() );
}
int main()
{
  {
    std::cout << "Task 10.33" << std::endl;
    Grafic();
    std::cout << "" << std::endl;

    {
      std::cout << "Task 10.54" << std::endl;
      std::string snum;
      dec( 60, snum );
      std:: cout << "The value of this number inbinary system: " << snum << std::endl;
    }
  }
}
