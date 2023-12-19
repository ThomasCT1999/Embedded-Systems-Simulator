#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

float simulateTemperatureSensor() {
    float temp = (rand() % 460 - 100) / 10.0;
    return temp;
}

int main() {
    srand(time(NULL));
    printf("Embedded Systems Simulator: Temperature Sensor\n");

    while (1) {
        float temperature = simulateTemperatureSensor();
        printf("Current Temperature: %.1f°C\n", temperature);
        fflush(stdout);  // Flush the output buffer after printing
        Sleep(1000);
    }

    return 0;
}
