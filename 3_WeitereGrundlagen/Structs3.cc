#include <iostream>

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

void print_vehicle_data_pointer(Vehicle *vehicle)
{
    std::cout << "Vehicle ID: " << vehicle->id << std::endl;
    std::cout << "Vehicle Vel in kph: " << vehicle->velocity << std::endl;
    switch (vehicle->lane)
    {
    case Lane::RIGHT_LANE:
        std::cout << "Right Lane " << std::endl;
        break;
    case Lane::CENTER_LANE:
        std::cout << "Center Lane " << std::endl;
        break;
    case Lane::LEFT_LANE:
        std::cout << "Left Lane " << std::endl;
        break;

    default:
        break;
    }
}

int main()
{
    // so übersichtlicher
    Vehicle v1 = {.id = 1, .velocity = 100.3f, .lane = Lane::RIGHT_LANE};

    // c++ 20 Alternative da die eingabe der Daten unübersichtlich ist
    // man weiß so nicht für das z.B. die 1 steht


    print_vehicle_data(v1);
    print_vehicle_data_pointer(&v1);
    return 0;
}
