#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern const int NUMBER_OF_MAJOR_COLORS;
extern const int NUMBER_OF_MINOR_COLORS;

int GetPairNumberFromColorNames(const char* majorColorName, const char* minorColorName);
void GetColorNamesFromPairNumber(int pairNumber, char* majorColorName, char* minorColorName);

#endif // COLOR_PAIR_H 
