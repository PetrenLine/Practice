#include <QCoreApplication>
#include<iostream>
#include<math.h>

int main()
{
  // task 1.22
  //calculating the value of the function.
  {

    int x = 6;
    double y = 0.0;
    y = 7 * x * x - 3 * x + 6;
    std:: cout << "Value of the function:" << y << std::endl;
  }

  //Task 1.25
  // The side of the square is given. Find its perimeter.
  {
    int x = 10;
    int P;
    P = pow( x, 4 );
    std:: cout << "Perimetr of the square:" << P << std::endl;
  }
  //Task 1.31
  //Two integers are given.
  {
    int a = 2;
    int b = 32;
    double G = 0.0;
    double k = 0.5;
    G = a * b;
    std::cout << "Arithmetic mean:" << ( a + b ) / 2 << std::endl;
    std::cout << "Geometric mean:" << pow( G, k ) << std::endl;
  }
  //Task 1.62
  //Using only the multiplication operation (double or float)
  {
    double a = 2.0;
    // a^3 and a^10 (4 operation)
    std:: cout << "a)" << std::endl;
    {
      double x = 0.0;
      double y = 0.0;
      double z = 0.0;
      double b = 0.0;
      double n = 0.0;
      double m = 0.0;
      //a^10
      {
        x = a * a;//a^2
        y = x * x;//a^4
        z = y * y;//a^8
        b = z * x;//a^10
        std:: cout << "   a^10 =" << b << std::endl;
      }
      // a^3
      {
        x = a * a;//a^2
        y = x * a;//a^3
        z = y * 1;//a^3
        b = z * 1;//a^3
        std:: cout << "    a^3 =" << b << std::endl;
      }

      // a^20 and a^4 (5 operation)
      std:: cout << "b)" << std::endl;

      //a^20
      {
        x = a * a;//a^2
        y = x * x;//a^4
        z = y * y;//a^8
        b = z * x;//a^10
        n = b * b;//a^20
        std:: cout << "   a^20 =" << n << std::endl;
      }

      // a^4
      {
        x = a * a;//a^2
        y = x * a;//a^3
        z = y * a;//a^4
        b = z * 1;//a^4
        n = b * 1;//a^4
        std:: cout << "   a^4 =" << n << std::endl;
      }

      // a^13 and a^5 (5 operation)
      std:: cout << "c)" << std::endl;

      //a^13
      {
        x = a * a;//a^2
        y = x * x;//a^4
        z = y * y;//a^8
        b = z * y;//a^12
        n = b * a;//a^13
        std:: cout << "   a^13 =" << n << std::endl;
      }

      // a^5
      {
        x = a * a;//a^2
        y = x * a;//a^3
        z = y * a;//a^4
        b = z * a;//a^5
        n = b * 1;//a^5
        std:: cout << "   a^5 =" << n << std::endl;
      }
      std:: cout << "d)" << std::endl;
// a^19 and a^5 (5 operation)
      //a^19
      {
        x = a * a;//a^2
        y = x * x;//a^4
        z = y * y;//a^8
        b = z * z;//a^16
        n = b * x * a; //a^19
        std:: cout << "   a^19 =" << n << std::endl;
      }

      // a^5
      {
        x = a * a;//a^2
        y = x * a;//a^3
        z = y * a;//a^4
        b = z * a;//a^5
        n = b * 1;//a^5
        std:: cout << "   a^5 =" << n << std::endl;
      }
      // a^2, a^5 and a^19 (6 operation)
      std:: cout << "e)" << std::endl;
      //a^2
      {
        x = a * a;//a^2
        y = x * 1;//a^2
        z = y * 1;//a^2
        b = z * 1;//a^2
        n = b * 1; //a^2
        m = n * 1; //a^2
        std:: cout << "   a^2 =" << m << std::endl;
      }

      // a^5
      {
        x = a * a;//a^2
        y = x * a;//a^3
        z = y * a;//a^4
        b = z * a;//a^5
        n = b * 1;//a^5
        m = n * 1; //a^2
        std:: cout << "   a^5 =" << m << std::endl;
        // a^17
        {
          x = a * a;//a^2
          y = x * x;//a^4
          z = y * y;//a^8
          b = z * z;//a^16
          n = b * a; //a^17
          m = n * 1; //a^17
          std:: cout << "   a^17 =" << m << std::endl;
        }
        // a^4, a^12 and a^28 (6 operation)
        std:: cout << "f)" << std::endl;
        //a^4
        {
          x = a * a;//a^2
          y = x * a;//a^3
          z = y * a;//a^4
          b = z * 1;//a^4
          n = b * 1; //a^4
          m = n * 1; //a^4
          std:: cout << "   a^4 =" << m << std::endl;
        }

        // a^12
        {
          x = a * a;//a^2
          y = x * x;//a^4
          z = y * y;//a^8
          b = z * y;//a^12
          n = b * 1;//a^12
          m = n * 1; //a^12
          std:: cout << "   a^12 =" << m << std::endl;
        }
        // a^28
        {
          x = a * a;//a^2
          y = x * x;//a^4
          z = y * y;//a^8
          b = z * z;//a^16
          n = b * y; //a^20
          m = n * z; //a^28
          std:: cout << "   a^28 =" << m << std::endl;
        }
      }
    }
  }
}
