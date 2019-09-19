#include<iostream>

using namespace std;

int main()
{
    double france = 0.172;
    double german = 0.584;
    double british = 1.487;
    double japan = 0.00955;
    double dollar;

    cout << "Enter amount in dollars : "<< endl;
    cin >> dollar;

    cout << "British Pound : " << dollar * british<< ".\n"
    "French Franc : " <<dollar * france<< ".\n"
    "German Deutschemark : " << dollar * german<< ".\n"
    "Japanese Yen : "<< dollar * japan<< endl;

    return 0;

}
