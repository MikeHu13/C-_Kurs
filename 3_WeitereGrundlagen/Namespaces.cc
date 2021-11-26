#include <iostream>

// Vorteil Namespace:
// Eigene Funktion schreiben die es mit dem Namen schon gibt
// Durch Namespace kann die eigene Funktion gekappselt werden -> zugehöirgkeit


namespace ad
{
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
} // namespace ad

constexpr int DEFAUL_VEHICLE_ID = -1;
constexpr int NUM_VEHICLES = 3;


int main()
{
    ad::Vehicle v1 = {1, 100.3f, ad::Lane::RIGHT_LANE};
    ad::Vehicle v2 = {2, 110.3f, ad::Lane::CENTER_LANE};
    ad::Vehicle v3 = {3, 130.3f, ad::Lane::LEFT_LANE};


    ad::Vehicle vehicles_in_scene[NUM_VEHICLES] = {v1, v2, v3};

    for (int i = 0; i < NUM_VEHICLES; i++)
    {
        ad::print_vehicle_data(vehicles_in_scene[i]);
    }


    return 0;
}
