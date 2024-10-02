#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    vector<string> businesses;

    cout << "Welcome to the sorting program!\n\n";

    string proceed = "y";

    while (proceed == "y" || proceed == "Y" || proceed == "yes" || proceed == "Yes" || proceed == "YES")
    {
        cout << "Please enter the name of a business:\n";
        string business;
        getline(cin, business);
        businesses.push_back(business);
        
        sort(businesses.begin(), businesses.end());
        
        cout << "\nList of businesses:\n";
        for (int i = 0; i < businesses.size(); i++)
        {
            cout << "\t" << businesses[i] << "\n";
        }

        cout << "\nDo you want to add another business?\n";
        getline(cin, proceed);
    }

    cout << "Goodbye!\n";
}