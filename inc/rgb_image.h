#ifndef _RGB_IMAGE_H_
#define _RGB_IMAGE_H_

#include "image.h"
#include <string>

class RGBImage : public Image{
public:
    RGBImage();
    ~RGBImage();
    void LoadImage(string);
    void DumpImage(string);
    void Display_X_Server();
    void Display_CMD();
private:
    int *** pixels;
    string class_filename;
};

#endif