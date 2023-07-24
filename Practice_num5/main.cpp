#include <QCoreApplication>
#include<iostream>
#include <cmath>

int main()
{
  double length = 4.5;
  double distance = 3.0;

  for ( double height = 0.2; height <= length; height += 0.2 )
  {
    double angle = atan( height / distance );

    double angleDegrees = angle * 180.0 / M_PI;

    std::cout << "Height: " << height << " m, Angle: " << angleDegrees << " Degrees" << std::endl;
  }

  return 0;
}
