#ifndef DELTA
#define DELTA

#include<iostream>
#include<cstring>
#include"Media.h"

using namespace std;

class VideoGames : public Media{
public:
  VideoGames(char* titleMedia, int yearMedia, int ratingVideoGames, char* publisherVideoGames);
  char* getPublisher();
  int getRating();
  void print();
  protected:
  char* publisher;
  int rating;
};

#endif // DELTA
