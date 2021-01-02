#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string y_name;
    cout << "Enter your name: " ;
    cin>> y_name;
    string yn_name;
    cout<< "Enter your nick name: ";
    cin>> yn_name;
    string y_surname;
    cout << "Enter your surname: ";
    cin >> y_surname;

    string your [3] { y_name, yn_name, y_surname};

    string p_name;
    cout<< "Enter your partners name: ";
    cin>> p_name;
    string pn_name;
    cout<< "Enter your partners nickname: ";
    cin>> pn_name;
    string p_surname;
    cout << "Enter your partners surname: ";
    cin >> p_surname;

    string partner [3] {p_name, pn_name, p_surname};


    string year;
    cout << "Enter your wedding year: ";
    cin >> year;

    string key [7] {"Weds" , "SayIDo", "TieTheKnot", "KissAndTell", "Loves", "GetHitched", "Forever", } ;

    for (int i=0; i<50; i++)
    {
        cout <<"#" << your[rand()%3] << key[rand()%7] << partner[rand()%3] << endl;
    }





    return 0;
}
