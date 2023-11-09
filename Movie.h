#ifndef CHARLIE
#define CHARLIE

#include<iostream>
#include<cstring>
#include"Media.h"

using namespace std;

class Movie : public Media{
public:
  Movie(char* titleMedia, int yearMedia, char* directorMovie, int ratingMovie, int durationMovie);//Contructor for movie class
  char* getDirector();//getter for director
  int getDuration();//getter for duration
  int getRating();//getter for rating 
  void print();// will print out the data
  ~Movie();//destructor
  protected:
  char* director;
  int duration;
  int rating;
};

#endif // CHARLIE


