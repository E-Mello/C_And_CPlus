#include <iostream>

using namespace std;

int main()
{
    int elephant_count;

    int lion_count{}; // Initialize to 0

    int tiger_count{10}; // Initialize to 100

    int monkey_count{15}; // Initialize to 15

    // Can use expressions to initialize variables
    int domesticated_animals{lion_count + tiger_count + monkey_count};

    // int new_number{doesnt_exists}; // Compiler error
    // int narrowing_conversion{2.9}; // Compiler error
    int narrowing_conversion(2.9); // Narrowing conversion

    cout << "Number of domesticated animals: " << domesticated_animals << "\n";

    cout << "Number of monkeys: " << monkey_count << "\n";

    cout << "Number of tigers: " << tiger_count << "\n";

    cout << "Narrowing conversion: " << narrowing_conversion << "\n";

    int bike_count = 2;

    int truck_count = 7;

    int vehicle_count = bike_count + truck_count;

    int narrowing_conversion_assignment = 2.9;

    cout << "Number of vehicles: " << vehicle_count << "\n";

    cout << "Narrowing conversion assignment: " << narrowing_conversion_assignment << "\n";

    cout << "bike_count: " << bike_count << "\n";

    cout << "truck_count: " << truck_count << "\n";

    return 0;
}
