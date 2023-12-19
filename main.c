#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to simulate temperature sensor data
float simulateTemperatureSensor() {
    // Generating a random temperature between -10.0 and 35.0 degrees
    float temp = (rand() % 460 - 100) / 10.0;
    return temp;
}

int main() {
    // Initialize random number generator
    srand(time(NULL));

    printf("Embedded Systems Simulator: Temperature Sensor\n");

    while (1) {
        float temperature = simulateTemperatureSensor();
        printf("Current Temperature: %.1f°C\n", temperature);

        // Delay for a bit (simulating sensor read interval)
        sleep(1);
    }

    return 0;
}