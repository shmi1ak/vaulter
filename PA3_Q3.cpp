#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, date1, date2, date3;
    double height1, height2, height3;
    
    cout << "Hi there! Please input the name of your favorite pole vaulter: ";
    cin >> name;
    
    cout << "Input the date (MM/DD/YYYY) and height (in meters) of the three best vaults -- please click enter everytime you input a value: ";
    cin >> date1 >> height1;
    cin >> date2 >> height2;
    cin >> date3 >> height3;
    
    
    if (height1 >= 5.0 || height1 <= 2.0 || height2 >= 5.0 || height2 <= 2.0 || height3 >= 5.0 || height3 <= 2.0)
    {
        cout << "You have entered an invalid number for the height, please make sure your value is between 2.0 & 5.0\n";
    }
    else
    {
        cout << "The wins ordered by height = \n";
        cout << endl;
        
        if (height1 > height2 && height1 > height3)
        {
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
    
    
    return 0;
}
