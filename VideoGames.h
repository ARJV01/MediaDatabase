#ifndef DELTA
#define DELTA

#include<iostream>
#include<cstring>
#include"Media.h"

using namespace std;

class VideoGames : public Media{
public:
  VideoGames(char* titleMedia, int yearMedia, int ratingVideoGames, char* publisherVideoGames);//videogame contructor
  char* getPublisher();//getter for publisher
  int getRating();//getter for rating
  void print();//will print the values for videogames
  ~VideoGames();//destructor
  protected:
  char* publisher;
  int rating;
};

#endif // DELTA
