## Task 1: Student Course Total

## (a) Inputs and Outputs

Inputs:

- Assignment mark (out of 100)
- Midterm mark (out of 100)
- Final exam mark (out of 100)

Outputs:

- The course total, shown to 1 decimal place
- The word Pass if total is 50 or above, or Fail if total is below 50

## (b) Process

1. Start the program.
2. Declare variables for assignment, midterm, final exam, and total.
3. Ask the user to enter the assignment mark and read it.
4. Ask the user to enter the midterm mark and read it.
5. Ask the user to enter the final exam mark and read it.
6. Calculate the total: total = (assignment x 0.20) + (midterm x 0.30) + (final x 0.50)
7. Use the conditional operator to choose Pass if total >= 50, otherwise Fail.
8. Print the total with 1 decimal place, and print Pass or Fail.
9. End the program.

## Task 2: Electricity Bill

### (a) Inputs and Outputs

Input:

- Electricity units used in a month (kWh, a whole number)

Outputs:

- Energy charge (2 decimal places)
- Service charge — fixed 10.00 birr
- Total bill (2 decimal places)

### (b) Process

1. Start the program.
2. Declare the rates: first rate 1.50, second rate 2.00, first limit 50, and the service charge 10.00.
3. Ask the user to enter the electricity units used and read the units.
4. Use the conditional operator: if the units are 50 or less, energy charge = units x 1.50.
5. Otherwise, energy charge = 50 x 1.50 + (units - 50) x 2.00.
6. Calculate the total bill = energy charge + service charge.
7. Print the energy charge, the service charge, and the total bill with 2 decimal places.
8. End the program.



## Task 3: Trip Speed and Fuel Cost

### (a) Inputs and Outputs

Inputs:

- Distance of the trip (km)
- Travel time — hours and minutes (whole numbers)
- Fuel use of the car (liters per 100 km)
- Price of fuel per liter (birr)

Outputs:

- Average speed (km/h, 2 decimal places)
- Fuel used (liters, 2 decimal places)
- Fuel cost (birr, 2 decimal places)

### (b) Process

1. Start the program.
2. Declare variables for distance, hours, minutes, fuel use per 100 km, and price per liter.
3. Ask the user to enter the distance and read it.
4. Ask the user to enter the travel time as hours and minutes and read them.
5. Ask the user to enter the fuel use per 100 km and read it.
6. Ask the user to enter the price per liter and read it.
7. Convert the time to hours only: total time = hours + (minutes / 60), using casting so the division gives a decimal.
8. Calculate the average speed: average speed = distance / total time.
9. Calculate the fuel used: fuel used = (distance / 100) x fuel use per 100 km.
10. Calculate the fuel cost: fuel cost = fuel used x price per liter.
11. Print the average speed, the fuel used, and the fuel cost, each with 2 decimal places.
12. End the program