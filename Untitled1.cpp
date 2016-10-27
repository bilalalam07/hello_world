
//my name is bilal alam

#include <string>
#include <fstream>
#include <iostream>
#include <iostream>


void sortArray(string names[], int size)
{
    int startScan, minIndex; 
    string minValue;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = names[startScan];
        for(int index = startScan + 1; index < size; index++)
        {
            if (names[index] < minValue)
            {
                minValue = names[index];
                minIndex = index;
            }
        }
        names[minIndex] = names[startScan];
        names[startScan] = minValue;
    }
    
}


int binarySearch(string names[], int size, string value)
{
    int first = 0,             // First array element
        last = size - 1,       // Last array element
        middle,                // Mid point of search
        position = -1;         // Position of search value
    bool found = false;        // Flag

    while (!found && first <= last)
    {
        middle = (first + last) / 2;     // Calculate mid point
        if (names[middle] == value)      // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (names[middle] > value)  // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1;           // If value is in upper half
    }
    return position;
}



int main()
{
  const int SIZE = 4030;
  std::string words[SIZE]; // C array? to hold our words we read in.
  std::string str; // Temp string to
  std::cout << "Read from a file!" << std::endl;

  std::ifstream fin("test.txt");
  for (int i = 0; (fin >> str) && (i < SIZE); ++i) // Will read up to eof() and stop at every
  {                                                // whitespace it hits. (like spaces!)
    //std::cout << "This string is: " << str << std::endl;
    words[i] = str;
  } // We now also need to stop before we hit the no define array space.
  fin.close();

  std::cout << std::endl;
  for (int i = 0; i < SIZE; ++i)
    std::cout << words[i] << std::endl;
 
 
 
 ////
 	// Variables 
    string empName; 
    int results;  

    // Sort array first
    sortArray(names, NUM_NAMES); 

    // Prompt for user input to enter an employee name 
    cout << "Please enter an employee's name: "; 
    getline(cin, empName); 

    // Search for name
    results = binarySearch(names, NUM_NAMES, empName); 

    // If results contains -1 the name was not found.
    if (results == -1)
        cout << "That name does not exist in the array.\n";
    else
    {
        // Otherwise results contains the subscript of
        // the specified employee ID in the array.
        cout << "That name is found at element " << results;
        cout << " in the array.\n";
    }
 
 
 
 
 
 
 
  return 0;
}
