#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  int age;
  cout << "Enter your age: ";
  cin >> age;
  if ( age <= 25)
  {
    int height;
    cout << "Enter your height: ";
    cin >> height;
    if(height < 100 || height < 180){  
        if( height < 100 )
    {
        cout << "Your character = Chopper";
    }
    else 
    {
        cout <<  "Your character = Usopp";
    }
    }
    else{
        int bounty;
        cout << "Enter your bounty: ";
        cin >> bounty;
        if (bounty > 1100000000){
            cout << "Your character = Zoro";
        }
        else {
            cout << "Your character = Sanji";
        }
    }
  }
  else if ( age > 60)
  {
    cout << "Your character = Brook";
  }
  else if ( age <= 60)
  {
    int bounty;
    cout << "Enter your bounty: ";
    cin >> bounty;
    if (bounty > 500000000){
        cout << "Your character = Jinbe";
        }
        else {
            cout << "Your character = Franky";
        }
  }


}