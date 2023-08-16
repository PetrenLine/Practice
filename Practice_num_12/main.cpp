#include <QCoreApplication>
#include <iostream>

bool checkSum( int arr[5][5], int rowNumber, int targetSum )
{
  int sum = 0;

  for ( int col = 0; col < 5; col++ )
    sum += arr[rowNumber][col];

  return sum > targetSum;
}

int main()
{
  int arr[5][5] = {{1, 2, 3, 4, 5},
    {4, 5, 6, 7, 8},
    {7, 8, 9, 10, 11},
    {7, 8, 9, 10, 11},
    {7, 8, 9, 10, 11}
  };
  //a
  {
    int proz = 1;

    for ( int i = 0; i < 5; i++ )
      proz *= arr[i][1];

    if ( proz >= 100 && proz <= 999 )
      std::cout << "The product of the elements of the second column is a three-digit number." << std::endl;

    else
      std::cout << "The product of the elements of the second column does't a three-digit number." << std::endl;

    //b

    int rowNumber;
    int targetSum;

    std::cout << "Enter the number for 5 ";
    std::cin >> rowNumber;

    std::cout << "Enter the number for sum: ";
    std::cin >> targetSum;

    if ( rowNumber >= 0 && rowNumber < 5 )
    {
      if ( checkSum( arr, rowNumber, targetSum ) )
        std::cout << "Sum of line elements " << rowNumber << " more " << targetSum <<
                  std::endl;

      else
        std::cout << "Sum of line elements" << rowNumber << " does not exceed " << targetSum <<
                  std::endl;
    }

  }
}
