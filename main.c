#include <stdio.h>
#include <assert.h>

#include "colorpair.h"

int main() {
    //ColorPair colorPair;
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    //printColorPair(colorPair.majorColor, colorPair.minorColor);

    return 0;
}
