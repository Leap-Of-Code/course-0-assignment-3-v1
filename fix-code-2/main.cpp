#include <iostream>
#include <string>
using namespace std;

int main() {
  const float gold_fish_food_weight_lbs = .4;
  const float gold_fish_tank_size_liters = 10.4;
  string const gold_fish_name = "carl";

  cout << "I own a goldfish named " << gold_fish_name << ". his tank is " << gold_fish_tank_size_liters << " liters big, and he eats " << gold_fish_food_weight_lbs << "pounds of food.";
}
