#ifndef _IMAGE_H_
#define _IMAGE_H_

#include<string>
#include "data_loader.h"
using namespace std;

class Image{
protected:
    int w;
    int h;

public:
    Image();
    ~Image();
    virtual void LoadImage(string); 
    virtual void DumpImage(string);
    virtual void Display_X_Server();
    virtual void Display_CMD();
};

#endif