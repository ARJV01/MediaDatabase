#include<iostream>
#include<cstring>
#include"Music.h"

using namespace std;

Music::Music(char* titleMedia, int yearMedia, char* artistMusic, char* publisherMusic, int durationMusic) :Media(titleMedia, yearMedia) {//contructor for music
  strcpy(title, titleMedia);
  artist = new char[80];
  strcpy(artist, artistMusic);
  year = yearMedia;
  duration = durationMusic;
  publisher = new char[80];
  strcpy(publisher, publisherMusic);

}

char* Music :: getArtist() {//This funtion will return artist
  return artist;
}

int Music :: getDuration() {// this funrion will return duration
  return duration;
}

char* Music :: getPublisher() {//this funtion will return duration
  return publisher;
}

void Music :: print() {//this funtion will print out the values for music
  cout << "title: " << title << endl;
  cout << "artist : " << artist << endl;
  cout << "year : " << year << endl;
  cout << "duration: " << duration << endl;
  cout << "Publisher: " << publisher << endl;
}

Music :: ~Music() {//destructor

}



