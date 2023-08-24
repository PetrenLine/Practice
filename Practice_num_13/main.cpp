#include <QCoreApplication>
#include <iostream>
#include <string>

struct Train
{
  int Train_num;
  std::string destination;
  int arrivalHour;
  int arrivalMinute;
  int departureHour;
  int departureMinute;
};

int main()
{
  const int num_trains = 25;
  Train trains[num_trains];
  trains[1] = {2, "Moscow - Vladivostok", 10, 45, 11, 50};
  trains[2] = {3, "Moscow - Voronezh", 11, 0, 11, 30};
  trains[3] = {4, "Moscow - Vladikavkaz", 11, 30, 11, 35};
  trains[4] = {5, "Moscow - Samara", 10, 30, 11, 0};
  trains[5] = {6, "Moscow - Kazan", 12, 0, 12, 30};
  trains[6] = {7, "Moscow - Nizhny Novgorod", 13, 15, 14, 0};
  trains[7] = {8, "Moscow - Krasnoyarsk", 13, 30, 15, 45};
  trains[8] = {9, "Moscow - Rostov-on-Don", 14, 0, 15, 30};
  trains[9] = {10, "Moscow - Yekaterinburg", 15, 0, 16, 30};
  trains[10] = {11, "Moscow - Kaliningrad", 15, 30, 16, 0};
  trains[11] = {12, "Moscow - Perm", 16, 0, 17, 45};
  trains[12] = {13, "Moscow - Khabarovsk", 17, 30, 19, 0};
  trains[13] = {14, "Moscow - Tyumen", 18, 0, 19, 30};
  trains[14] = {15, "Moscow - Ufa", 18, 30, 19, 45};
  trains[15] = {16, "Moscow - Tolyatti", 19, 0, 19, 30};
  trains[16] = {17, "Moscow - Chelyabinsk", 20, 0, 21, 30};
  trains[17] = {18, "Moscow - Saratov", 20, 30, 21, 45};
  trains[18] = {19, "Moscow - Volgograd", 21, 0, 22, 0};
  trains[19] = {20, "Moscow - Irkutsk", 21, 30, 23, 0};
  trains[20] = {21, "Moscow - Petrozavodsk", 22, 0, 23, 30};
  trains[21] = {22, "Moscow - Ulan-Ude", 22, 30, 23, 45};
  trains[22] = {23, "Moscow - Yaroslavl", 23, 0, 23, 30};
  trains[23] = {24, "Moscow - Cheboksary", 23, 30, 23, 45};
  trains[24] = {25, "Moscow - Kursk", 23, 45, 0, 15};

  int hour;
  int minute;
  std::cout << "Enter current time (hours minutes): ";
  std::cin >> hour >> minute;
  std::cout << "Trains at the station: " << std::endl;

  for ( int i = 0; i < num_trains; i++ )
  {
    if ( trains[i].arrivalHour < hour || ( trains[i].arrivalHour == hour && trains[i].arrivalMinute <= minute ) )
    {
      if ( trains[i].departureHour > hour || ( trains[i].departureHour == hour && trains[i].departureMinute >= minute ) )
      {
        std::cout << "Train number: " << trains[i].Train_num << std::endl;
        std::cout << "Destination: " << trains[i].destination << std::endl;
      }
    }
  }

  return 0;
}
