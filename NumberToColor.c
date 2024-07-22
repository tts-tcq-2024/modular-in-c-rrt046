#include <stdio.h>
#include "ColorPair.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

const int NUMBER_OF_MAJOR_COLORS = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const int NUMBER_OF_MINOR_COLORS = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void GetColorNamesFromPairNumber(int pairNumber, char* majorColorName, char* minorColorName) {
    if (pairNumber < 1 || pairNumber > NUMBER_OF_MAJOR_COLORS * NUMBER_OF_MINOR_COLORS) {
        printf("Error: Pair number out of range.\n");
        return;
    }

    int zeroBasedPairNumber = pairNumber - 1;
    int majorColorIndex = zeroBasedPairNumber / NUMBER_OF_MINOR_COLORS;
    int minorColorIndex = zeroBasedPairNumber % NUMBER_OF_MINOR_COLORS;

    sprintf(majorColorName, "%s", MajorColorNames[majorColorIndex]);
    sprintf(minorColorName, "%s", MinorColorNames[minorColorIndex]);
}
