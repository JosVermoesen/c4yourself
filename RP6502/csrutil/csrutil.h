#ifndef SCRUTIL_H_INCLUDED
#define SCRUTIL_H_INCLUDED

#include <stdbool.h>

/** Colors */
typedef enum _Color
{
    scrBlack,
    scrBlue,
    scrRed,
    scrMagenta,
    scrGreen,
    scrCyan,
    scrYellow,
    scrWhite,
    scrUndefinedColor
} Color;

/** Stores a screen position */
typedef struct _scrPosition
{
    unsigned short int row;
    unsigned short int column;
} scrPosition;

/** Stores screen attributes (paper&ink) */
typedef struct _scrAttributes
{
    Color paper;
    Color ink;
} scrAttributes;

/** Clear screen */
void scrClear();

/**
    Sets next text colors as (paper, ink).
    @param tinta Ink color
    @param papel Paper color
*/
void scrSetColors(Color ink, Color paper);

/**
    Set next text colors as attributes
    @param color Paper & ink attributes
    @see scrAttributes
*/
void scrSetColorsWithAttr(scrAttributes color);

/**
    Inverts the given colors.
    @param colors An scrAttributes structure.
    @return A new scrAttributes structure with inverted colors.
    @see scrAttributes
*/
scrAttributes scrInvertColors(scrAttributes colors);

/**
    Gets the colors in use
    @return Paper&ink colors as scrAttributes
    @see scrAttributes
*/
scrAttributes scrGetCurrentAttributes();

/**
    Gets the char in a given position
    @param pos The position as scrPosition
    @return The integer value of char
    @see scrAttributes
*/
int scrGetCharacterAt(scrPosition pos);

/**
    Moves the cursor to a given position
    @param row The row to move the cursor to
    @param col The column to move the cursor to
*/
void scrMoveCursorTo(unsigned short int row, unsigned short int col);

/**
    Moves the cursor to a given position
    @param pos An scrPosition containing the new position
    @see scrPosition
*/
void scrMoveCursorToPos(scrPosition pos);

/**
    Returns the maximum number of rows and columns.
    @return The info as an scrPosition struct.
    @see scrPosition
    @note always returns 25x80 on *nix.
*/
scrPosition scrGetConsoleSize();

/**
    Returns the maximun number of rows
    @return Max rows
    @see scrPosition
    @note if not supported, returns -1
*/
unsigned short int scrGetMaxRows();

/**
    Returns the maximum number of columns
    @return Max columns
    @see scrGetConsoleSize
*/
unsigned short int scrGetMaxColumns();

/**
    Returns the cursor position
    @return The cursor position as an scrPosition
    @see scrGetConsoleSize
    @see Always returns -1, -1 in *nix
*/
scrPosition scrGetCursorPosition();

/**
    Shows or hides the cursor
    @param see true to show it, false otherwise.
*/
void scrShowCursor(bool see);

/**
    Shows a card (inverse colors).
    @param row The top left corner.
    @param col The top left corner.
    @param width The width of the card.
    @param height The height of the card.
*/
void scrPrintCard(int row, int col, int width, int height);

#endif // SCRUTIL_H_INCLUDED