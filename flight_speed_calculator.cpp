#include <iostream>
#include <cmath>

float calculate_velocity(float& static_pressure, float& total_pressure, float& air_density){
    float velocity_squared = (2 * (total_pressure - static_pressure)) / air_density;
    float velocity = std::sqrt(velocity_squared);
    return velocity;
}

int main(){

    float static_pressure, dynamic_pressure, air_density;
    static_pressure = 7;
    dynamic_pressure = 8;
    air_density = 6;

    float total_pressure = static_pressure + dynamic_pressure;

    float velocity = calculate_velocity(static_pressure, total_pressure, air_density);

    std::cout << velocity << std::endl;
    return 0;
}