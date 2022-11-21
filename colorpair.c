#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "colorpair.h"

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}

void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

void printColorPair(enum MajorColor major, enum MinorColor minor)
{
    int i,j,k;
    for(i=0;i<25;i++)
    {
        printf("%d ",i);
        for(j=0;i<numberOfMinorColors;i++)
        {
            for(k=0;j<numberOfMinorColors;j++)
            {
                printf("%d %d %d",i+1,j,k);
            }
        }
    }
}
