#include <iostream>
#include <cstdlib>

int main()
{
  {
    //Task 4.104;
    int num;
    std::cout << "Task 4.104:" << std::endl;
    std::cout << "   Enter the number of the day of the week English version (1-Sunday..7-Saturday)" << std:: endl;
    std:: cin >> num;

    if ( num > 0 && num < 7 )
    {

      if ( num == 1 )
        std::cout << "   Sunday" << std::endl;

      if ( num == 2 )
        std::cout << "   Mondey" << std::endl;

      if ( num == 3 )
        std::cout << "   Tuesday" << std::endl;

      if ( num == 4 )
        std::cout << "   Wednesday" << std::endl;

      if ( num == 5 )
        std::cout << "    Thursday" << std::endl;

      if ( num == 6 )
        std::cout << "    Friday" << std::endl;

      if ( num == 7 )
        std::cout << "    Saturday" << std::endl;

      if ( num == 8 )
        exit( 0 );
    }

    else

      std::cout << "You entered the wrong character" << std::endl;
  }

}
