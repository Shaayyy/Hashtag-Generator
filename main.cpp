#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Asking the user for input //
    string y_name;
    cout << "Enter your name: " ;
    cin>> y_name;
    string yn_name;
    cout<< "Enter your nick name: ";
    cin>> yn_name;
    string y_surname;
    cout << "Enter your surname: ";
    cin >> y_surname;
    
    // storing all info regarding 'you' in an array (for accessing via a complex random utility (; ) //
    string your [3] { y_name, yn_name, y_surname};

    // asking user for input PART2 //
    string p_name;
    cout<< "Enter your partners name: ";
    cin>> p_name;
    string pn_name;
    cout<< "Enter your partners nickname: ";
    cin>> pn_name;
    string p_surname;
    cout << "Enter your partners surname: ";
    cin >> p_surname;
  
    // storing info regarding your partner in an array (for accessing via a complex random utility PART2 (; //
    string partner [3] {p_name, pn_name, p_surname};

    // turned out useless ); // 
    string year;
    cout << "Enter your wedding year: ";
    cin >> year;
    
    // an array storing all of the 'hashtag words' // 
    string key [7] {"Weds" , "SayIDo", "TieTheKnot", "KissAndTell", "Loves", "GetHitched", "Forever", } ;

    
    // this is the complex part. we are doing mod by the array length so that we get indexes as results for the random function to access from the respective arrays // 
    for (int i=0; i<50; i++)
    {
        cout <<"#" << your[rand()%3] << key[rand()%7] << partner[rand()%3] << endl;
    }





    return 0;
}
