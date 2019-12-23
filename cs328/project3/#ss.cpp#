/*
#Filename: ss.cpp

#Author: Seth Roller

#Date: 11/07/19

#Program Name: ss.cpp

#Assignment Number: 3

#Problem: Implementing sum of subsets
through a file being imported to supply
data.

#Flow: 
Starts with promising function and then
sumofsubsets, and finally main

#Sources: Foundations of Algorithms ch. 5
-Used this for the algorithms

I have thoroughly tested my code and it works properly 

 */
#include <stddef.h>  // for NULL
#include <iostream>
#include <string.h>
#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

//the one gloabl var
int called = 0;

bool prom(int ind, int weight, int total, int w[], int W) {
  //cout << "prom called" << endl;
  called++;
  return (weight + total >= W) && (weight == W || weight+ w[ind]<=W);
}


void sum_of_subsets(int ind, int weight, int total, int W, int include[],
		 int w[], int n) {

  if (prom(ind, weight, total, w, W))
    if (weight == W) {
      for (int i = 0; i < n; i++) {
        if (include[i])
  	      cout << w[i] << " ";
      }
      cout << "sum to " << W << endl;
    }
    else {
      include[ind] = 1;
      sum_of_subsets(ind+1, weight+w[ind], total-w[ind], W, include, w, n);
      include[ind] = 0;
      sum_of_subsets(ind+1, weight, total-w[ind], W, include, w, n);
    }
  
}


int main() {
  
  //declarations
  string filename;
  ifstream fin;
  int W;
  int data;
  int index = 0;
  int total = 0;
  int n;

  cout << "Author: Seth Roller\n";
  cout << "Lab: SumofSubsets\n";
  cout << "Problem: Implementing sum of subsets from\n";
  cout << "the Foundations of Algorithms book.\n\n";
  
  cout << "Please enter the name of a file: ";
  cin >> filename;
  fin.open(filename.c_str());
  assert (fin.is_open());

  cout << "You entered " << filename;
  cout << endl;

  fin >> data;
  n = data;
  cout << "n is " << n;
  cout << endl;

  //declare the arrays
  int *include = new int[n];
  int *w = new int[n];
  fin >> data;
  W = data;
  cout << "W is " << W << endl;

  //read w1 through wn
  while (true) {
    fin >> data;
    if (fin.eof())
      break;
    w[index++] = data;
    cout << data << " has been processed\n";
    total+= data;
  }

  for (int i = 0; i < n; i++)
    include[i] = 0;

  cout << "\nCalling sum_of_subsets" << endl;
  sum_of_subsets(0, 0, total, W, include, w, n);

  cout << "promising function called " << called;
  cout << endl;
  
  //deallocate
  delete[] w;
  delete[] include;

}
