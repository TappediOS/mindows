/*******************************************************
 *      @file   main.c
 *
 *      @brief  カーネルのメイン処理
 *
 *      @author vxdora
 *
 *      @update mindows02a [New]
 ******************************************************/

#define GRAPHICS_INFO 0x100000

typedef struct GraphicsInfo {
    unsigned long *vram;
    unsigned short int width;
    unsigned short int height;
} GraphicsInfo;

int KernelMain() {
    GraphicsInfo *gInfo = (GraphicsInfo*)GRAPHICS_INFO;
    int x, y;
    for (y = 0; y < gInfo->height; y++) {
        for (x = 0; x < gInfo->width; x++) {
            gInfo->vram[y * gInfo->width + x] = 0x00FFFF;
        }
    }


    while (1);
    return 0;
}
