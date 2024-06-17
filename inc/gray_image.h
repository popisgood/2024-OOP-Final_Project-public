#ifndef _GRAY_IMAGE_H_
#define _GRAY_IMAGE_H_

#include "image.h"
#include <string>

class GrayImage : public Image{
public:
    GrayImage();
    ~GrayImage();
    void LoadImage(string);
    void DumpImage(string);
    void Display_X_Server();
    void Display_CMD();
private:
    int ** pixels;
    string class_filename;
};

#endif