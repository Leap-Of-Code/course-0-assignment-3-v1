#include <iostream>
#include <string>
using namespace std;

int main() {
  const float flights_cost = 350.0;
  const float num_flights = 4;

  const float food_per_day_cost = 21.6;
  const float num_days = 8;

   float trip_cost = flights_cost * num_flights + food_per_day_cost * num_days;
  const float discount_flight_voucher = 15.7;
  trip_cost = trip_cost - discount_flight_voucher;
  cout << "The total cost of the trip including the vouchers will be $" << trip_cost << endl;
}
