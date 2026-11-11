I. Input/Output
 1. Input
       Distance
       Travel hour
       Travel minute
       Fuel consumption
       Fuel price per liter
 2. Output
        Average speed
        Fuel used 
        Fuel cost

II. Process(Operation)
    1.Declare variables to store inputs(Distance, Travel hour, Travel minute, Fuel consumption, Fuel Price per liter) and calculated amounts(Total time, Average speed, Fuel used  and Fuel cost) 
    2. Display prompts and read the inputs
    3. Calculate the total time by dividing travel minutes by 60 and then adding it with travel hours
    4. Calculate average speed by dividing distance by total time
    5. Calculate fuel used by multiplying distance with fuel consumption and then dividing this by 100
    6. Calculate Fuel Cost by multiplying Fuel Used with Fuel Price
    8. Display all the results to two decimal place
III. Design the program
//Variable declaration
    double distance, fuelConsumption, fuelPrice;
    double totalTime, averageSpeed, fuelUsed, fuelCost;
    int travelhours, travelminutes;
//Reading the input
    cout << "Enter distance travelled ( in km): ";
    cin >> distance;

    cout << "Enter travel time (hours and minutes separated by space ): ";
    cin >> travelhours >> travelminutes;

    cout << "Enter fuel consumption (L per 100 km): ";
    cin >> fuelConsumption;

    cout << "Enter fuel price per liter (Birr): ";
    cin >> fuelPrice;
//Calculation
    totalTime = travelhours + (travelminutes / 60.0);
    averageSpeed = distance / totalTime;
    fuelUsed = (distance * fuelConsumption) / 100.0;
    fuelCost = fuelUsed * fuelPrice;
//Printing the results
    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Consumed: " << fuelUsed << " liters" << endl; 
    cout << "Fuel Cost: " << fuelCost << " Birr" << endl;