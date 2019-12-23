/*
#Filename: assign2.cpp

#Author: Seth Roller

#Date: 10/31/19

#Program Name: assign2.cpp

#Assignment Number: 2

#Problem: Will be utilizing Floyds and Dijkstra's 
shortest paths for an entered adjcency matrix

#Flow: Main starts with the constructor of shortest,
then go into a loop asking the user for an option

#Sources:
No sources used for this main file
 
I have thoroughly tested my code and it works properly 

 */



#include "shortest.h" 
using namespace std; 
int main() 
{
  int option;
  shortest adj;
  bool theLoop = true;
  int dijk = 0;
  
  cout << endl;
  
  while (theLoop) {
    cout << "Enter 1: Dijkstra's shortest path\n";
    cout << "Enter 2: Floyd's shortest path\n";
    cout << "Enter 3: Exit\n";

    cin >> option;

    if (cin.good() && option >= 1 && option <= 3) {
      cout << endl; // for turnin                                        
      cout << "You entered: " << option << endl;

      switch(option) {

      case 1:
	while (true) {
	  cout << "Enter for Dijkstra: ";
	  cin >> dijk;       
	  if (cin.good() && dijk <= adj.getVert() && dijk > 0) {
	    cout << "You entered " << dijk << endl;
	    adj.Dijkstra(dijk);
	    break;
	  }
	  cin.clear();
	  cin.ignore(120, '\n');
	}
	break;

      case 2:
	adj.FloydGen();
	break;

      case 3:
	cout << endl;
	cout << "Exiting\n";
	theLoop = false;
	break;

      default:
	cout << endl;
	cout << "Please enter 1, 2, or 3\n\n";
	cin.clear();
	cin.ignore(120, '\n');
	break;

      }
      
    }

    else {
      cin.clear();
      cin.ignore(120, '\n');
      cout << endl;
      cout << "Please enter 1, 2, or 3\n\n";
    }
    
  }
  
  
}//end main
