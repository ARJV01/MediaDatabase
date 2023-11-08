#include<iostream>
#include<cstring>
#include"Music.h"

using namespace std;

Music::Music(char* titleMedia, int yearMedia, char* artistMusic, char* publisherMusic, int durationMusic) :Media(titleMedia, yearMedia) {
titleMedia = new char[80];
  strcpy(titleMedia, titleMedia);
  artist = new char[80];
  strcpy(artist, artistMusic);
  yearMedia = yearMedia;
  duration = durationMusic;
  publisher = new char[80];
  strcpy(publisher, publisherMusic);

}

char* Music :: getArtist() {
  return artist;
}

int Music :: getDuration() {
  return duration;
}

char* Music :: getPublisher() {
  return publisher;
}

void Movie :: print() {
  cout << "title: " << title << endl;
  cout << "artist : " << artist << endl;
  cout << "director: " << director << endl;
  cout << "year : " << year << endl;
  cout << "duration: " << duration << endl;
}

