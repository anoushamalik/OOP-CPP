
# Car Rental Management System

## Overview

This project is a simple **Car Rental Management System** implemented in C++. It allows customers to rent cars for a specified number of days and calculates the total rental cost based on the selected car model and the number of days. The system also displays details about the car owner and the rental information.

## Features

- **Car Selection:** The system allows users to choose from a list of 15 car models, each with different rental rates.
- **Rental Duration:** The user can specify the number of days they want to rent the car.
- **Rental Calculation:** The system calculates the total rental fee based on the car model selected and the number of days.
- **Owner Information Display:** The system displays the car owner's details.
- **Rental Information Display:** The system provides a detailed summary of the rental, including customer name, car model, car number, rental duration, and total rental cost.

## Classes

### 1. `Owner`
- **Attributes:**
  - `owner_name`: The name of the car owner.
  - `contact_number`: The contact number of the car owner.
  - `owner_address`: The address of the car owner.
- **Methods:**
  - `display()`: Displays the owner's details.

### 2. `Car`
- **Attributes:**
  - `customer_name`: The name of the customer renting the car.
  - `car_model`: The selected car model.
  - `carnumber`: The car number (pre-defined as "JPL 756").
- **Methods:**
  - `add()`: Placeholder function (not used in this program).

### 3. `Rental` (Inherits from `Car`)
- **Attributes:**
  - `days`: The number of days the car is rented (initialized to 0).
  - `rentalfee`: The calculated rental fee (initialized to 0).
- **Methods:**
  - `data()`: Captures customer information and selected car model.
  - `calculate()`: Calculates the total rental fee based on the car model and number of rental days.
  - `displayrent()`: Displays the rental information including customer name, car model, number of days, and total rental fee.

## How It Works

1. The program welcomes the user to the Car Rental System.
2. The user is prompted to enter their name and select a car model from a list of available options.
3. The user is then asked to specify the number of days they wish to rent the car.
4. The system calculates the total rental fee based on the car model selected and the number of days.
5. Finally, the program displays the owner's details and a summary of the rental, including the total rental amount.


## License

This project is open-source and available under the MIT License. See the [LICENSE](./LICENSE) file for more details.

