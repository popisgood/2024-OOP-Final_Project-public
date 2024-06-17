#include "image.h"
#include "gray_image.h"
#include "rgb_image.h"
#include "photo_mosaic.h"
#include "bit_field_filter.h"

int main(int argc, char *argv[]){
    Image *img1 = new GrayImage();
    //cout<<"load"<<endl;
    img1->LoadImage("Image-Folder/4k_owl.jpg");
    //cout<<"dump"<<endl;
    img1->DumpImage("img1.jpg");
    //cout<<"display x"<<endl;
    img1->Display_X_Server();
    //cout<<"display cmd"<<endl;
    img1->Display_CMD();
    

    Image *img2 = new RGBImage();
    img2->LoadImage("Image-Folder/lena.jpg");
    img2->DumpImage("img2.jpg");
    img2->Display_X_Server();
    img2->Display_CMD();

    // some bit field filter design driven code here

    // some photo mosaic driven code here

    // more ...
    return 0;
}
