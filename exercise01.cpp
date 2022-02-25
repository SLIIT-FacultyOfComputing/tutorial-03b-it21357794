#include <iostream>
#include<iomanip>
using namespace std;
int main() {
 float marks[5] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[5][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout <<setw(5)<<"No";
 cout<<setw(20)<<"Name";
 cout<<setw(30)<<"Marks"<< endl;
 for (int r = 0; r < 5; r++) {
     cout <<setw(5)<<r+1 
          <<setw(20)<<names[r]
          <<setw(30)<<setiosflags(ios::fixed)<<setprecision(2)<<marks[r]<< endl;
   
 }
  return 0;
}