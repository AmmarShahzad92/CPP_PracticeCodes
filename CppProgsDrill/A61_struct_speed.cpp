#include <iostream>
#include <string>
using namespace std;

// Define the Car struct
struct Car {
    // Member variables
    int year;
    string make;
    int speed;
};

// Function to initialize the Car (acts like a constructor)
void initializeCar(Car &car, int y, string m) {
    car.year = y;
    car.make = m;
    car.speed = 0;
}

// Accessor functions
int getYear(const Car &car) {
    return car.year;
}

string getMake(const Car &car) {
    return car.make;
}

int getSpeed(const Car &car) {
    return car.speed;
}

// Function to accelerate the car (add 5 to speed)
void accelerate(Car &car) {
    car.speed += 5;
}

// Function to apply brakes (subtract 5 from speed if speed > 5)
void brake(Car &car) {
    if (car.speed > 5) {
        car.speed -= 5;
    } else {
        car.speed = 0;
    }
}

int main() {
    // Creating a Car object
    Car myCar;
    initializeCar(myCar, 2022, "Toyota");

    // Using accessor functions to display initial values
    cout << "Car Make: " << getMake(myCar) << endl;
    cout << "Car Year: " << getYear(myCar) << endl;
    cout << "Initial Speed: " << getSpeed(myCar) << " mph" << endl;

    // Accelerating the car
    accelerate(myCar);
    cout << "Speed after accelerating: " << getSpeed(myCar) << " mph" << endl;

    // Applying brakes
    brake(myCar);
    cout << "Speed after braking: " << getSpeed(myCar) << " mph" << endl;

    // Accelerating the car multiple times
    for (int i = 0; i < 5; ++i) {
        accelerate(myCar);
    }
    cout << "Speed after accelerating 5 times: " << getSpeed(myCar) << " mph" << endl;

    // Applying brakes multiple times
    for (int i = 0; i < 3; ++i) {
        brake(myCar);
    }
    cout << "Speed after braking 3 times: " << getSpeed(myCar) << " mph" << endl;

    return 0;
}
