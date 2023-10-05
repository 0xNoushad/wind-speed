#include <stdio.h>

int main() {
    double distance;  
    double time;      
    double windSpeed; 

    
    printf("Enter the distance (in meters): ");
    scanf("%lf", &distance);

    printf("Enter the time (in seconds): ");
    scanf("%lf", &time);

    
    windSpeed = distance / time;

    
    printf("The wind speed is %.2lf meters per second.\n", windSpeed);

    return 0;
}
