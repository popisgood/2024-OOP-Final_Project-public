#include "rgb_image.h"
using namespace std;

RGBImage::RGBImage(){
    Image();
    Data_Loader();
    pixels = new int** [3];
    for(int i=0;i<3;++i){
        pixels [i] = new int *[h];
        for(int j=0;j<h;++j){
            pixels[i][j] = new int[w];    
        }
    }
    
};


void RGBImage::LoadImage(string filename) {
    Data_Loader load_data;
    class_filename = filename;
    pixels = load_data.Load_RGB(filename,&w,&h);
    return ;
};

void RGBImage::DumpImage(string filename){
    Data_Loader dump_data;
    dump_data.Dump_RGB(w,h,pixels,filename);
    return ;
};

void RGBImage::Display_X_Server(){
    Data_Loader display_data_X;
    //cout<<"display x";
    display_data_X.Display_RGB_X_Server(w,h,pixels);
    return ;
};

void RGBImage::Display_CMD(){
    Data_Loader display_data_CMD;
    //cout<<"display cmd";
    display_data_CMD.Display_RGB_CMD(class_filename);
    return ;
};

RGBImage::~RGBImage(){
    for(int i=0;i<3;++i){
        for(int j=0;j<h;++j){
            delete [] pixels[i][j];    
        }
        delete [] pixels[i];
    }
    delete[] pixels;
};
