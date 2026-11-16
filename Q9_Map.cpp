#include <iostream>
#include <map>
#include <string>
using namespace std;

class StatePopulation
{
    map<string, int> population;

public:
    void insertData()
    {
        population["Maharashtra"] = 112374333;
        population["Gujarat"] = 60439692;
        population["Goa"] = 1458545;
        population["Rajasthan"] = 68548437;
    }

    void searchState()
    {
        string state;

        cout << "Enter state name: ";
        cin >> state;

        if (population.count(state))
        {
            cout << "Population: " << population[state];
        }
        else
        {
            cout << "State not found";
        }
    }
};

int main()
{
    StatePopulation s;

    s.insertData();
    s.searchState();

    return 0;
}