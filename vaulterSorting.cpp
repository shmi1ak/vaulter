#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declaring the neccessary variables
    string name, date1, date2, date3;
    double height1, height2, height3;
    
    // a message for user
    cout << "Hi there! Please input the name of your favorite pole vaulter: ";
    cin >> name;
    
    // instructs user how to input values
    cout << "Input the date (MM/DD/YYYY) and height (in meters) of the three best vaults -- please click enter everytime you input a value: ";
    // takes values from user and stores them in variables
    cin >> date1 >> height1;
    cin >> date2 >> height2;
    cin >> date3 >> height3;
    
    
    // checks conditions required for this program through if-else statement
    if (height1 >= 5.0 || height1 <= 2.0 || height2 >= 5.0 || height2 <= 2.0 || height3 >= 5.0 || height3 <= 2.0)
    {
        cout << "You have entered an invalid number for the height, please make sure your value is between 2.0 & 5.0\n";
    }
    // runs normally if none of the conditions given have been broken
    else
    {
        cout << "The wins ordered by height = \n";
        cout << endl;
        
        //this if condition ensures that the order is proper by height
        if (height1 > height2 && height1 > height3)
        {
            // gives the output in a structured manner, easy to understand
            cout << "Highest height & day achived: " << height1 << " " << date1 << endl;
            if (height2 > height3)
            {
                cout << "2nd Highest height & day achived: " << height2 << " " << date2 << endl;
                cout << "3rd Highest height & day achived: " << height3 << " " << date3 << endl;
            }
            else
            {
                cout << "2nd Highest height & day achived: " << height3 << " " << date3 << endl;
                cout << "3rd Highest height & day achived: " << height2 << " " << date2 << endl;
            }
        }
        else if (height2 > height1 && height2 > height3)
        {
            cout << "Highest height & day achived: " << height2 << " " << date2 << endl;
            if (height1 > height3)
            {
                cout << "2nd Highest height & day achived: " << height1 << " " << date1 << endl;
                cout << "3rd Highest height & day achived: " << height3 << " " << date3 << endl;
            }
            else
            {
                cout << "2nd Highest height & day achived: " << height3 << " " << date3 << endl;
                cout << "3rd Highest height & day achived: " << height1 << " " << date1 << endl;
            }
        }
        else if (height3 > height1 && height3 > height2)
        {
            cout << "Highest height & day achived: " << height3 << " " << date3 << endl;
            if (height2 > height1)
            {
                cout << "2nd Highest height & day achived: " << height2 << " " << date2 << endl;
                cout << "3rd Highest height & day achived: " << height1 << " " << date1 << endl;
            }
            else
            {
                cout << "2nd Highest height & day achived: " << height1 << " " << date1 << endl;
                cout << "3rd Highest height & day achived: " << height2 << " " << date2 << endl;
            }
        }
    }
    
    // program returns 0 when the program has been successfully run
    return 0;
}
