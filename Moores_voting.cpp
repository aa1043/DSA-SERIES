//MOORES VOTING ALGORITHM
// RULE NUMBER 1: FIRST SELECT YOUR FIRST ELEMENT AS YOUR ELEMENT;
// RULE NUMBER 2: PUT A COUNTER AND INCREMENT IF YOU FIND THE ELEMENT CONSECUTIVELY
// RULE NUMBER 3: IF ANY OTHER ELEMENT ARISES DIFFERENT COUNTER--
// RULE NUMBER 4: IF COUNTER BECOMES 0 CHOSE THE NEXT ELEMENT AS YOUR NEW ELEMENT AND CONTINUE THE STEPS

#include<iostream>
using namespace std;

int main() 
{
    // Step 1: Input the size of the array
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;

    // Step 2: Input the array elements
    int arr[n];
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    // Step 3: Display the entered array
    cout << "Your Original Array is: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 4: Initialize variables for Moore's Voting Algorithm
    int count = 0;   // Keeps track of the count for the candidate element
    int elem = 0;    // Stores the potential candidate for the majority element

    // Step 5: Find the potential candidate for the majority element
    for (int i = 0; i < n; i++)
    {
        if (count == 0)  // When count is zero, pick the current element as a new candidate
        {
            elem = arr[i];
            count = 1;
        }
        else if (elem == arr[i])  // If the current element matches the candidate, increment count
        {
            count++;
        }
        else  // If the current element is different, decrement count
        {
            count--;
        }
    }

    // Step 6: Verify if the candidate element is actually the majority element
    int count1 = 0;  // Variable to count occurrences of the candidate element
    for (int i = 0; i < n; i++)
    {
        if (elem == arr[i])
        {
            count1++;
        }
    }

    // Step 7: Check if the candidate element occurs more than n/2 times
    if (count1 > n / 2)
    {
        cout << "The element that occurs more than " << n / 2 << " times is " << elem;
    }
    else
    {
        cout << "No element occurs more than " << n / 2 << " times";
    }
}

// OUTPUT

// Enter the size of the array: 
// Enter the array elements: 
// Your Original Array is: 2 3 3 3 4 2 3 3 3 4 
// The element that occurs more than 5 times is 3