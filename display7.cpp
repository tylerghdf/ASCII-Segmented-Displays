#include <iostream>
#include "displays.h"

using namespace std;

string output7[3] = { "   ", "   ", "   " };

void EmulateDisplay7(bool a, bool b, bool c, bool d, bool e, bool f, bool g)
{
    string tempOutput[5] = { "   ", "   ", "   " };

    // This is easily replaced with actual logic for a segmented display.
    if (a) tempOutput[0][1] = '_';
    if (b) tempOutput[1][2] = '|';
    if (c) tempOutput[2][2] = '|';
    if (d) tempOutput[2][1] = '_';
    if (e) tempOutput[2][0] = '|';
    if (f) tempOutput[1][0] = '|';
    if (g) tempOutput[1][1] = '_';

    output7[0] += tempOutput[0];
    output7[1] += tempOutput[1];
    output7[2] += tempOutput[2];
}

void Display7(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        bool a = false;
        bool b = false;
        bool c = false;
        bool d = false;
        bool e = false;
        bool f = false;
        bool g = false;

        switch (int(input[i]))
        {
        case 32: // Space
            break;
        case 48: // 0
            a = true;
            b = true;
            c = true;
            d = true;
            e = true;
            f = true;

            break;
        case 49: // 1
            b = true;
            c = true;

            break;
        case 50: // 2
            a = true;
            b = true;
            d = true;
            e = true;
            g = true;

            break;
        case 51: // 3
            a = true;
            b = true;
            c = true;
            d = true;
            g = true;

            break;
        case 52: // 4
            b = true;
            c = true;
            f = true;
            g = true;

            break;
        case 53: // 5
            a = true;
            c = true;
            d = true;
            f = true;
            g = true;

            break;
        case 54: // 6
            a = true;
            c = true;
            d = true;
            e = true;
            f = true;
            g = true;

            break;
        case 55: // 7
            a = true;
            b = true;
            c = true;

            break;
        case 56: // 8
            a = true;
            b = true;
            c = true;
            d = true;
            e = true;
            f = true;
            g = true;

            break;
        case 57: // 9
            a = true;
            b = true;
            c = true;
            d = true;
            f = true;
            g = true;

            break;
        default:
            cout << "Invalid character: " << input[i] << endl;

            return;
        }

        EmulateDisplay7(a, b, c, d, e, f, g);
    }

    cout << output7[0] << endl;
    cout << output7[1] << endl;
    cout << output7[2] << endl;
}