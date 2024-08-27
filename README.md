
# Online Car Rental System

This project is an implementation of an **Online Car Rental System** using **Object-Oriented Programming (OOP)** principles in C++. The structure of this program is based on the **UML Class Diagram**, providing a well-organized and scalable approach to software development.

## Project Overview

In this project, a user can rent a car for a specified number of days. The program offers a menu of different cars, allowing the user to select the one that meets their needs. Once the car is selected, the user can input the number of days they wish to rent the car. The program then calculates the total rental fee and generates an output form displaying all relevant information about the user and the owner.

### Key Features
- **Car Selection:** A variety of car models are available for selection.
- **Rent Calculation:** The program calculates the rental fee based on the selected car and the number of rental days.
- **User & Owner Details:** Information about both the user (customer) and the owner is displayed in a neatly formatted output.
- **Modular Design:** The program is divided into multiple classes, each handling specific functionalities.

- ## Classes

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


## UML Class Diagram

The **UML Class Diagram** is a blueprint that outlines the structure of the classes used in this project. It illustrates the relationships between the classes, their attributes, methods, and how they interact with each other. By following the UML diagram, the program is designed to be intuitive, maintainable, and extensible.


## How to Run the Project

1. Clone this repository to your local machine.
2. Compile the code using a C++ compiler.
3. Run the executable file.
4. Follow the prompts to select a car and input the required details.


---

## License

This project is open-source and available under the MIT License. See the [LICENSE](./LICENSE) file for more details.

