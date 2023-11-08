#ifndef ALPHA
#define ALPHA
#include<iostream>
#include<cstring>
#include"Media.h"

using namespace std;

class Music : public Media{
public:
  Music(char* titleMedia, int yearMedia, char* artistMusic, char* publisherMusic, int durationMusic);
  char* getArtist();
  int getDuration();
  char* getPublisher();
  void print();
  protected:
  char* artist;
  int duration;
  char* publisher;
};

#endif // ALPHA
