#include <QCoreApplication>
#include<iostream>
#include<string.h>
#include <conio.h>

int main()
{
  //Task 2.3
  //kg to t
  {
    double kg = 500.0;
    double t = 0.0;
    t = kg / 1000;
    std::cout << "Tonne in " << kg << " Kg :" << t << std::endl;
  }
  //Task 2.15
  //Crossed out the last digit on the right and wrote it at the beginning.
  {
    std::string str( "123" );
    std::cout << "2.15:  " << str[2] << str[0] << str[1] << std::endl;
  }
  //Task 2.27
  //2.27. В трехзначном числе x зачеркнули первую цифру. Когда полученное число
  //умножили на 10, а произведение сложили с первой цифрой числа x, то полу-
  //чилось число n. По заданному n найти число x (значение n вводится с клавиатуры, 1 ≤ n ≤ 999).
  {
    std::string str( "123" );
    int p = std::stoi( str.substr( 1, 2 ) );
    int m = std::stoi( str.substr ( 0, 1 ) );
    int n;
    n = ( p * 10 ) + m;
    std::cout << "First part of 2.27 (x -> n):  " << n << std::endl;
  }
  {
    std::cout << "Enter n" << std::endl;
    int n;
    std::cin >> n;
    std::string str = std::to_string( n );
    std::cout << "Second part of 2.27 (n -> x):  " << str[2] << str[0] << str[1] << std::endl;
    return 0;
  }

}
