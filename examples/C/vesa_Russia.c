#include <vesa.h>


#define x_start 768
#define x_end 1024


int main(){
    for (int x = x_start; x != x_end; x++){
        for (int y = 256; y != 320; y++){
            draw_pixel(x, y, VESA_WHITE);
        }
    }

    for (int x = x_start; x != x_end; x++){
        for (int y = 320; y != 384; y++){
            draw_pixel(x, y, VESA_BLUE);
        }
    }

    for (int x = x_start; x != x_end; x++){
        for (int y = 384; y != 448; y++){
            draw_pixel(x, y, VESA_RED);
        }
    }

    return 0;
}