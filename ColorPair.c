#include <stdio.h>
#include "ColorPair.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

const int MAX_COLORPAIR_NAME_CHARS = 16;
const int NUMBER_OF_MAJOR_COLORS = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const int NUMBER_OF_MINOR_COLORS = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (enum MajorColor)(zeroBasedPairNumber / NUMBER_OF_MINOR_COLORS);
    colorPair.minorColor = (enum MinorColor)(zeroBasedPairNumber % NUMBER_OF_MINOR_COLORS);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * NUMBER_OF_MINOR_COLORS + colorPair->minorColor + 1;
}

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

void PrintColorCodingManual(void) {
    printf("Color Coding Reference Manual:\n");
    for (int i = 1; i <= NUMBER_OF_MAJOR_COLORS * NUMBER_OF_MINOR_COLORS; i++) {
        ColorPair colorPair = GetColorFromPairNumber(i);
        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
        ColorPairToString(&colorPair, colorPairNames);
        printf("Pair Number %d: %s\n", i, colorPairNames);
    }
}
