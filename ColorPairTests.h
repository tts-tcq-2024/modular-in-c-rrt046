#ifndef COLORPAIRTESTS_H
#define COLORPAIRTESTS_H

#include "ColorPair.h"

void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber);

#endif // COLORPAIRTESTS_H
