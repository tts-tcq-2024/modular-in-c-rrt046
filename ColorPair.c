#include <stdio.h>
#include "ColorPair.h"

int main() {
    // Test ColorToNumber
    printf("Pair number for White and Blue: %d\n", GetPairNumberFromColorNames("White", "Blue"));
    printf("Pair number for Red and Green: %d\n", GetPairNumberFromColorNames("Red", "Green"));
    printf("Pair number for Black and Slate: %d\n", GetPairNumberFromColorNames("Black", "Slate"));

    // Test NumberToColor
    char majorColorName[16];
    char minorColorName[16];
    
    GetColorNamesFromPairNumber(1, majorColorName, minorColorName);
    printf("Pair number 1 corresponds to: %s and %s\n", majorColorName, minorColorName);

    GetColorNamesFromPairNumber(12, majorColorName, minorColorName);
    printf("Pair number 12 corresponds to: %s and %s\n", majorColorName, minorColorName);

    GetColorNamesFromPairNumber(25, majorColorName, minorColorName);
    printf("Pair number 25 corresponds to: %s and %s\n", majorColorName, minorColorName);

    return 0; 
}
