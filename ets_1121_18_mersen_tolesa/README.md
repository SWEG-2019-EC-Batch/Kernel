
## (a) Inputs and outputs
**Inputs:**

-student Assignment mark

-student Midterm mark 

-student Final exam mark 


**Outputs:**


-The course total, shown to 1 decimal place

-The word Pass if total is 50 or above, or Fail if total is below 50

## (b) Process 


1.Declare variables for assignment, midterm, final exam, and total.

2.Ask the user to enter the assignment mark and read it.

3.Ask the user to enter the midterm mark and read it.

4.Ask the user to enter the final exam mark and read it.

5.Calculate the total: total = (assignment x 0.20) + (midterm x 0.30) + (final x 0.50)

6.Use the conditional operator to choose Pass ? total >= 50:Fail.

7.Print the total with 1 decimal place, and print Pass or Fail.




## Task 2: Electricity Bill

### (a) Inputs and Outputs

**Input:**

- Electricity units used in a month (kWh, a whole number)

**Outputs:**

- Energy charge (2 decimal places)

- Service charge — fixed 10.00 birr

- Total bill (2 decimal places)


### (b) Process


1. Declare the rates: first rate 1.50, second rate 2.00, first limit 50, and the service charge 10.00.

2. Ask the user to enter the electricity units used and read the units.

3. Use the conditional operator: if the units are 50 or less, energy charge = units x 1.50.

4. Otherwise, energy charge = 50 x 1.50 + (units - 50) x 2.00.

5. Calculate the total bill = energy charge + service charge.

6. Print the energy charge, the service charge, and the total bill with 2 decimal places.


