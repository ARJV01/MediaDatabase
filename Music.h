#ifndef ALPHA
#define ALPHA
#include<iostream>
#include<cstring>
#include"Media.h"

using namespace std;

class Music : public Media{
public:
  Music(char* titleMedia, int yearMedia, char* artistMusic, char* publisherMusic, int durationMusic);// contructor for music class
  char* getArtist();// getter for artist
  int getDuration();// getter for duration 
  char* getPublisher();//getter for publisher
  void print();//will output the values for music
  ~Music();//destructor
  protected:
  char* artist;
  int duration;
  char* publisher;
};

#endif // ALPHA

