#include <stdio.h>
#include <string.h>
#include "ColorPair.h"

int GetPairNumberFromColorNames(const char* majorColorName, const char* minorColorName) {
    int majorColorIndex = -1;
    int minorColorIndex = -1;

    // Find major color index
    for (int i = 0; i < NUMBER_OF_MAJOR_COLORS; i++) {
        if (strcmp(MajorColorNames[i], majorColorName) == 0) {
            majorColorIndex = i;
            break;
        }
    }

    // Find minor color index
    for (int i = 0; i < NUMBER_OF_MINOR_COLORS; i++) {
        if (strcmp(MinorColorNames[i], minorColorName) == 0) {
            minorColorIndex = i;
            break;
        }
    }

    if (majorColorIndex == -1 || minorColorIndex == -1) {
        printf("Error: Invalid color names.\n");
        return -1;
    }

    return majorColorIndex * NUMBER_OF_MINOR_COLORS + minorColorIndex + 1;
}
