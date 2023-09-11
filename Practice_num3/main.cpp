#include <QCoreApplication>
#include<iostream>

int main()
{
  std:: cout.setf( std::ios::boolalpha );
  // Task 3.1
  {
    const bool A = true;
    const bool B = false;
    const bool C = false;
    std::cout << "Task 3.1:" << std::endl;
    std:: cout << "   (A or B) = " << ( A || B ) << std::endl;
    std:: cout << "   (A and B) = " << ( A && B ) << std::endl;
    std:: cout << "   (B or C) = " << ( B || C ) << std::endl;

    //Task 3.5
    std::cout << "Task 3.5:" << std::endl;
    {
      std:: cout << "   a)(A or B and not C) = " << ( A || B && !C ) << std::endl;
      std:: cout << "   b)(not A and not B) = " << ( !A && !B ) << std::endl;
      std:: cout << "   c)(not (A and C) or B) = " << ( ( !( A && C ) ) || B ) << std::endl;
      std:: cout << "   d)(A and not B or C) = " << ( A && !B || C ) << std::endl;
      std:: cout << "   e)(A and (not B or C)) = " << ( A && ( !B || C ) ) << std::endl;
      std:: cout << "   f)(A or (not (B and C)) = " << ( A || ( !( B && C ) ) ) << std::endl;
    }
  }
  {
    //Task 3.11
    std::cout << "Task 3.11:" << std::endl;
    bool r;
    {
      //a)
      const int x = 1;
      const int y = -1;
      r = ( pow( x, 2 ) + pow( y, 2 ) <= 4 );
      std:: cout << "   a) Expression: " << r << std::endl;
    }
    {
      //b)
      const int x = 1;
      const int y = 2;
      r = ( ( x >= 0 ) || ( pow( y, 2 ) != 4 ) );
      std:: cout << "   b) Expression: " << r << std::endl;

    }
    {
      //c)
      const int x = 1;
      const int y = 2;
      r = ( ( x >= 0 ) && ( pow( y, 2 ) != 4 ) );
      std:: cout << "   c) Expression: " << r << std::endl;
    }
    {
      //d)
      const int x = 2;
      const int y = 1;
      r = ( ( x * y != 0 ) && ( y > x ) );
      std:: cout << "   d) Expression: " << r << std::endl;
    }
    {
      //e)
      const int x = 2;
      const int y = 1;
      r = ( ( x * y == 0 ) || ( y < x ) );
      std:: cout << "   e) Expression: " << r << std::endl;
    }
    {
      //f)
      const int x = 2;
      const int y = 1;
      r = ( ( !( x * y < 0 ) ) && ( y > x ) );
      std:: cout << "   f) Expression: " << r << std::endl;
    }
    {
      //g)
      const int x = 1;
      const int y = 2;
      r = ( ( !( x * y < 0 ) ) || ( y > x ) );
      std:: cout << "   g) Expression: " << r << std::endl;
    }
  }

  {
    //Task 3.28
    std::cout << "Task 3.28:" << std::endl;
    int r;
    const int A = 156;
    const int B = 651;
    const int C = 50;
    {
      //a)
      r = ( A > B ) && 100 ;
      bool result = ( A > B );
      r = result && 100;
      std:: cout << "   a) Expression: " << r << std::endl;
    }
    {
      //b)
      r = ( A ^ B ) / 2 ;
      std:: cout << "   b) Expression: " << r << std::endl;
    }
    {
      //c)
      r = ( ( A ^ B ) > 0 );
      std:: cout << "   c) Expression: " << r << std::endl;
    }
    {
      //d)
      r = ( A > B && B > C ) / 3;
      std:: cout << "   d) Expression: " << r << std::endl;
    }
    {
      //e)
      r = ( ( A ^ B ^ C ) < 50 );
      std:: cout << "   e) Expression: " << r << std::endl;
    }
    {
      //f)
      r = ( ( A ^ B ^ C ) > 0 );
      std:: cout << "   f) Expression: " << r << std::endl;
    }
  }
}
