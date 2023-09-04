#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include <string>

int main()
{
  std::ifstream inputFile( "input.txt" );
  std::ofstream outputFile( "output.txt" );

  if ( inputFile.is_open() && outputFile.is_open() )
  {
    std::string line;

    while ( std::getline( inputFile, line ) )
    {
      if ( line.length() > 30 )
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Successfully" << std::endl;
  }
  else
    std::cerr << "Error" << std::endl;

  return 0;
}
