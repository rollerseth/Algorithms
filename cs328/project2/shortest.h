/*

#Filename: shortest.h
#Name: Seth Roller
#Date: 10/31/19
#Program Name: assign2.cpp
#Assignment Number: 2
#Problem: assign2.cpp

#Flow: All of the public and private declartions

#Sources: Foundations of Algorithms ch. 3 and 4
-Used this source for the algorithsm

http://www.cplusplus.com/forum/beginner/38226/
-Used this as a reference for how to delete
a 2d array 

I have thoroughly tested my code and it works properly

*/

#include <iostream>
using namespace std;
#define FIN 1000000

struct edgenode {
  int e1;
  int e2;
  edgenode * next;
};

class shortest {
  
 public:
  shortest();
  ~shortest();
  void Dijkstra(int param);
  void FloydGen();
  int getVert();
  
 private:
  int** P;
  int** D;
  int** W;
  edgenode *F;
  int numofvert;
  void Floyd();
  void path(int q, int r);
  
};

