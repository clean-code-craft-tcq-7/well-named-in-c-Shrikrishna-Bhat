enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const int MAX_COLORPAIR_NAME_CHARS = 16;
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern int numberOfMinorColors;
extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
extern void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
extern void printColorPair(enum MajorColor major, enum MinorColor minor);
