#ifndef VI_H
#define VI_H
#include "Types.h"
#include <boolean.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    u32 width, widthPrev, height, real_height;
    f32 rwidth, rheight;
    u32 lastOrigin;

    u32 realWidth, realHeight;
    bool interlaced;
    bool PAL;

    struct{
        u32 start, end;
    } display[16];

    u32 displayNum;

} VIInfo;

extern VIInfo VI;

void VI_UpdateSize(void);
void VI_UpdateScreen(void);

#ifdef __cplusplus
}
#endif

#endif

