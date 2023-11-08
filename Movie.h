#ifndef CHARLIE
#define CHARLIE

#include<iostream>
#include<cstring>
#include"Media.h"

using namespace std;

class Movie : public Media{
public:
  Movie(char* titleMedia, int yearMedia, char* directorMovie, int ratingMovie, int durationMovie);
  char* getDirector();
  int getDuration();
  int getRating();
  void print();
  protected:
  char* director;
  int duration;
  int rating;
};

#endif // CHARLIE


