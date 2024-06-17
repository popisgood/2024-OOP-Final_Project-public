#include "gray_image.h"
using namespace std;

GrayImage::GrayImage(){
    Image();
    Data_Loader();
    pixels = new int* [h];
    for(int i=0;i<h;++i){
        pixels[i] = new int[w];    
    }
};


void GrayImage::LoadImage(string filename) {
    Data_Loader load_data;
    class_filename = filename;
    pixels = load_data.Load_Gray(filename,&w,&h);
    return ;
};

void GrayImage::DumpImage(string filename){
    Data_Loader dump_data;
    dump_data.Dump_Gray(w,h,pixels,filename);
    return ;
};

void GrayImage::Display_X_Server(){
    Data_Loader display_data_X;
    //cout<<"display x";
    display_data_X.Display_Gray_X_Server(w,h,pixels);
    return ;
};

void GrayImage::Display_CMD(){
    Data_Loader display_data_CMD;
    //cout<<"display cmd";
    display_data_CMD.Display_Gray_CMD(class_filename);
    return ;
};

GrayImage::~GrayImage(){
    for(int i=0;i<h;++i){
        delete[] pixels[i];
    }
    delete[] pixels;
};
