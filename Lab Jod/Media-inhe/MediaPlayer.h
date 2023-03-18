#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include "Image.h"
#include "Video.h"
#include "Media.h"

class MediaPlayer : public Media
{
  private: 
    Media list[100];
    int Track, playTrack;
  public:
    MediaPlayer();
    void addMedia(Media*);
    string play();
    void next();
    void stop();
    void showList();
};

#endif