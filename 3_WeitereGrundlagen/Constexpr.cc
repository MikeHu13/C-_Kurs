#include <iostream>

// Define keine gute moderen Methode da der compiler den Text nur mit dem Wert ersetzt
//#define NUM_VEHICLES 3

// Besser so das ist keine Textersetzung sondern eine richtige Variable -> Besser beim Debuggen
// Wird zur kompilzeit bekannt gemacht
constexpr int DEFAUL_VEHICLE_ID = -1;
constexpr int NUM_VEHICLES = 3;

// enum class zwingt dazu dass man Lane:: mit angeben muss
enum class Lane
{
    RIGHT_LANE,
    CENTER_LANE,
    LEFT_LANE
};

struct Vehicle
{
    int id;
    float velocity;
    Lane lane;
};

void print_vehicle_data(Vehicle &vehicle)
{
    std::cout << "Vehicle ID: " << vehicle.id << std::endl;
    std::cout << "Vehicle Vel in kph: " << vehicle.velocity << std::endl;
    switch (vehicle.lane)
    {
    case Lane::RIGHT_LANE:
        std::cout << "Right Lane " << vehicle.id << std::endl;
        break;
    case Lane::CENTER_LANE:
        std::cout << "Center Lane " << vehicle.id << std::endl;
        break;
    case Lane::LEFT_LANE:
        std::cout << "Left Lane " << vehicle.id << std::endl;
        break;

    default:
        break;
    }
}


int main()
{
    Vehicle v1 = {1, 100.3f, Lane::RIGHT_LANE};
    Vehicle v2 = {2, 110.3f, Lane::CENTER_LANE};
    Vehicle v3 = {3, 130.3f, Lane::LEFT_LANE};

    Vehicle vehicles_in_scene[NUM_VEHICLES] = {v1, v2, v3};

    for (int i = 0; i < NUM_VEHICLES; i++)
    {
        print_vehicle_data(vehicles_in_scene[i]);
    }


    return 0;
}
