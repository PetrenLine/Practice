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
    std::string word;

    while ( inputFile >> word )
    {
      if ( !word.empty() && word[0] == 'k' )
        word[0] = 'K';

      outputFile << word << " ";
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Successfully" << std::endl;
  }
  else
    std::cerr << "Error" << std::endl;

  return 0;
}
