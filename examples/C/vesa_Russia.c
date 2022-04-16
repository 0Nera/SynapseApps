#include <vesa.h>


int main(){
    for (int x = 256; x != 512; x++){
        for (int y = 256; y != 320; y++){
            draw_pixel(x, y, VESA_WHITE);
        }
    }

    for (int x = 256; x != 512; x++){
        for (int y = 320; y != 384; y++){
            draw_pixel(x, y, VESA_BLUE);
        }
    }

    for (int x = 256; x != 512; x++){
        for (int y = 384; y != 448; y++){
            draw_pixel(x, y, VESA_RED);
        }
    }

    return 0;
}