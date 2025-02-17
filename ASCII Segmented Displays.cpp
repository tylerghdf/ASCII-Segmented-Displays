#include <iostream>

using namespace std;

string output[5] = {"     ", "     ", "     ", "     ", "     "};

void EmulateDisplay(bool a1, bool a2, bool b, bool c, bool d1, bool d2, bool e, bool f, bool g1, bool g2, bool h, bool i, bool j, bool k, bool l, bool m)
{
    string tempOutput[5] = {"     ", "     ", "     ", "     ", "     "};

    if (a1) tempOutput[0][1] = '-';
    if (a2) tempOutput[0][3] = '-';
    if (b) tempOutput[1][4] = '|';
    if (c) tempOutput[3][4] = '|';
    if (d1) tempOutput[4][1] = '-';
    if (d2) tempOutput[4][3] = '-';
    if (e) tempOutput[3][0] = '|';
    if (f) tempOutput[1][0] = '|';
    if (g1) tempOutput[2][1] = '-';
    if (g2) tempOutput[2][3] = '-';
    if (h) tempOutput[1][1] = '\\';
    if (i) tempOutput[1][2] = '|';
    if (j) tempOutput[1][3] = '/';
    if (k) tempOutput[3][1] = '/';
    if (l) tempOutput[3][2] = '|';
    if (m) tempOutput[3][3] = '\\';

    // This part is just to make console display look better
    if (a1 && a2) tempOutput[0][2] = '-';
    if (d1 && d2) tempOutput[4][2] = '-';
    if (g1 && g2) tempOutput[2][2] = '-';

    output[0] += tempOutput[0];
    output[1] += tempOutput[1];
    output[2] += tempOutput[2];
    output[3] += tempOutput[3];
    output[4] += tempOutput[4];
}

void Display(string input)
{
    for (int index = 0; index < input.length(); index++)
    {
        bool a1 = false;
        bool a2 = false;
        bool b = false;
        bool c = false;
        bool d1 = false;
        bool d2 = false;
        bool e = false;
        bool f = false;
        bool g1 = false;
        bool g2 = false;
        bool h = false;
        bool i = false;
        bool j = false;
        bool k = false;
        bool l = false;
        bool m = false;

        switch (int(input[index]))
        {
            case 94: // ^ Test character
                a1 = true;
                a2 = true;
                b = true;
                c = true;
                d1 = true;
                d2 = true;
                e = true;
                f = true;
                g1 = true;
                g2 = true;
                h = true;
                i = true;
                j = true;
                k = true;
                l = true;
                m = true;

                break;
            case 32: // Space
                break;
            case 34: // "
                b = true;
                i = true;

                break;
            case 36: // $
                a1 = true;
                a2 = true;
                c = true;
                d1 = true;
                d2 = true;
                g1 = true;
                g2 = true;
                i = true;
                l = true;

                break;
            case 37: // %
                a1 = true;
                c = true;
                d2 = true;
                f = true;
                g1 = true;
                g2 = true;
                i = true;
                j = true;
                k = true;
                l = true;

                break;
            case 39: // '
                i = true;

                break;
            case 40: // (
                a2 = true;
                d2 = true;
                i = true;
                l = true;

                break;
            case 41: // )
                a1 = true;
                d1 = true;
                i = true;
                l = true;

                break;
            case 42: // *
                g1 = true;
                g2 = true;
                h = true;
                i = true;
                j = true;
                k = true;
                l = true;
                m = true;

                break;
            case 43: // +
                g1 = true;
                g2 = true;
                i = true;
                l = true;

                break;
            case 45: // -
                g1 = true;
                g2 = true;

                break;
            case 47: // /
                j = true;
                k = true;

                break;
            case 48: // 0
                a1 = true;
                a2 = true;
                b = true;
                c = true;
                d1 = true;
                d2 = true;
                e = true;
                f = true;
                j = true;
                k = true;

                break;
            case 49: // 1
                b = true;
                c = true;
                j = true;

                break;
            case 50: // 2
                a1 = true;
                a2 = true;
                b = true;
                d1 = true;
                d2 = true;
                e = true;
                g1 = true;
                g2 = true;

                break;
            case 51: // 3
                a1 = true;
                a2 = true;
                b = true;
                c = true;
                d1 = true;
                d2 = true;
                g2 = true;

                break;
            case 52: // 4
                b = true;
                c = true;
                f = true;
                g1 = true;
                g2 = true;

                break;
            case 53: // 5
                a1 = true;
                a2 = true;
                d1 = true;
                d2 = true;
                f = true;
                g1 = true;
                m = true;

                break;
            case 54: // 6
                a1 = true;
                a2 = true;
                c = true;
                d1 = true;
                d2 = true;
                e = true;
                f = true;
                g1 = true;
                g2 = true;

                break;
            case 55: // 7
                a1 = true;
                a2 = true;
                b = true;
                c = true;

                break;
            case 56: // 8
                a1 = true;
                a2 = true;
                b = true;
                c = true;
                d1 = true;
                d2 = true;
                e = true;
                f = true;

                break;
            case 57: // 9
                a1 = true;
                a2 = true;
                b = true;
                c = true;
                d1 = true;
                d2 = true;
                f = true;
                g1 = true;
                g2 = true;

                break;
            case 60: // <
                j = true;
                m = true;

                break;
            case 61: // =
                d1 = true;
                d2 = true;
                g1 = true;
                g2 = true;

                break;
            case 62: // >
                h = true;
                k = true;

                break;
            case 63: // ?
                a1 = true;
                a2 = true;
                b = true;
                g2 = true;
                l = true;

                break;
            case 65: // A
                a1 = true;
                a2 = true;
                b = true;
                c = true;
                e = true;
                f = true;
                g1 = true;
                g2 = true;

                break;
            case 66: // B
                a1 = true;
                a2 = true;
                b = true;
                c = true;
                d1 = true;
                d2 = true;
                g2 = true;
                i = true;
                l = true;

                break;
            case 67: // C
                a1 = true;
                a2 = true;
                d1 = true;
                d2 = true;
                e = true;
                f = true;

                break;
            case 68: // D
                a1 = true;
                a2 = true;
                b = true;
                c = true;
                d1 = true;
                d2 = true;
                i = true;
                l = true;

                break;
            case 69: // E
                a1 = true;
                a2 = true;
                d1 = true;
                d2 = true;
                e = true;
                f = true;
                g1 = true;

                break;
            case 70: // F
                a1 = true;
                a2 = true;
                e = true;
                f = true;
                g1 = true;

                break;
            case 71: // G
                a1 = true;
                a2 = true;
                c = true;
                d1 = true;
                d2 = true;
                e = true;
                f = true;
                g2 = true;

                break;
            case 72: // H
                b = true;
                c = true;
                e = true;
                f = true;
                g1 = true;
                g2 = true;

                break;
            case 73: // I
                a1 = true;
                a2 = true;
                d1 = true;
                d2 = true;
                i = true;
                l = true;

                break;
            case 74: // J
                b = true;
                c = true;
                d1 = true;
                d2 = true;
                e = true;

                break;
            case 75: // K
                e = true;
                f = true;
                g1 = true;
                j = true;
                m = true;

                break;
            case 76: // L
                d1 = true;
                d2 = true;
                e = true;
                f = true;

                break;
            case 77: // M
                b = true;
                c = true;
                e = true;
                f = true;
                h = true;
                j = true;

                break;
            case 78: // N
                b = true;
                c = true;
                e = true;
                f = true;
                h = true;
                m = true;

                break;
            case 79: // O
                a1 = true;
                a2 = true;
                b = true;
                c = true;
                d1 = true;
                d2 = true;
                e = true;
                f = true;

                break;
            case 80: // P
                a1 = true;
                a2 = true;
                b = true;
                e = true;
                f = true;
                g1 = true;
                g2 = true;

                break;
            case 81: // Q
                a1 = true;
                a2 = true;
                b = true;
                c = true;
                d1 = true;
                d2 = true;
                e = true;
                f = true;
                m = true;

                break;
            case 82: // R
                a1 = true;
                a2 = true;
                b = true;
                e = true;
                f = true;
                g1 = true;
                g2 = true;
                m = true;

                break;
            case 83: // S
                a1 = true;
                a2 = true;
                c = true;
                d1 = true;
                d2 = true;
                f = true;
                g1 = true;
                g2 = true;

                break;
            case 84: // T
                a1 = true;
                a2 = true;
                i = true;
                l = true;

                break;
            case 85: // U
                b = true;
                c = true;
                d1 = true;
                d2 = true;
                e = true;
                f = true;

                break;
            case 86: // V
                e = true;
                f = true;
                j = true;
                k = true;

                break;
            case 87: // W
                b = true;
                c = true;
                e = true;
                f = true;
                k = true;
                m = true;

                break;
            case 88: // X
                h = true;
                j = true;
                k = true;
                m = true;

                break;
            case 89: // Y
                b = true;
                c = true;
                d1 = true;
                d2 = true;
                f = true;
                g1 = true;
                g2 = true;

                break;
            case 90: // Z
                a1 = true;
                a2 = true;
                d1 = true;
                d2 = true;
                j = true;
                k = true;

                break;
            case 92: /* \ */
                h = true;
                m = true;

                break;
            case 95: // _
                d1 = true;
                d2 = true;

                break;
            case 97: // a
                d1 = true;
                d2 = true;
                e = true;
                g1 = true;
                l = true;

                break;
            case 98: // b
                d1 = true;
                e = true;
                f = true;
                g1 = true;
                l = true;

                break;
            case 99: // c
                d1 = true;
                e = true;
                g1 = true;

                break;
            case 100: // d
                b = true;
                c = true;
                d2 = true;
                g2 = true;
                l = true;

                break;
            case 101: // e
                d1 = true;
                e = true;
                g1 = true;
                k = true;

                break;
            case 102: // f
                a2 = true;
                g1 = true;
                g2 = true;
                i = true;
                l = true;

                break;
            case 103: // g
                a1 = true;
                d1 = true;
                f = true;
                g1 = true;
                i = true;
                l = true;

                break;
            case 104: // h
                e = true;
                f = true;
                g1 = true;
                l = true;

                break;
            case 105: // i
                l = true;

                break;
            case 106: // j
                d1 = true;
                e = true;
                i = true;
                l = true;

                break;
            case 107: // k
                i = true;
                j = true;
                l = true;
                m = true;

                break;
            case 108: // l
                e = true;
                f = true;

                break;
            case 109: // m
                c = true;
                e = true;
                g1 = true;
                g2 = true;
                l = true;

                break;
            case 110: // n
                e = true;
                g1 = true;
                l = true;

                break;
            case 111: // o
                d1 = true;
                e = true;
                g1 = true;
                l = true;

                break;
            case 112: // p
                a1 = true;
                e = true;
                f = true;
                g1 = true;
                i = true;

                break;
            case 113: // q
                a1 = true;
                f = true;
                g1 = true;
                i = true;
                l = true;

                break;
            case 114: // r
                e = true;
                g1 = true;

                break;
            case 115: // s
                a1 = true;
                d1 = true;
                f = true;
                g1 = true;
                l = true;

                break;
            case 116: // t
                d1 = true;
                e = true;
                f = true;
                g1 = true;

                break;
            case 117: // u
                d1 = true;
                e = true;
                l = true;

                break;
            case 118: // v
                e = true;
                k = true;

                break;
            case 119: // w
                c = true;
                e = true;
                k = true;
                m = true;

                break;
            case 120: // x
                h = true;
                j = true;
                k = true;
                m = true;

                break;
            case 121: // y
                b = true;
                c = true;
                d2 = true;
                g2 = true;
                i = true;

                break;
            case 122: // z
                d1 = true;
                g1 = true;
                k = true;

                break;
            case 123: // {
                a2 = true;
                d2 = true;
                g1 = true;
                i = true;
                l = true;

                break;
            case 124: // |
                i = true;
                l = true;

                break;
            case 125: // }
                a1 = true;
                d1 = true;
                g2 = true;
                i = true;
                l = true;

                break;
            default:
                cout << "Unsupported Character: " << input[index] << endl;
                return;
        }

        EmulateDisplay(a1, a2, b, c, d1, d2, e, f, g1, g2, h, i, j, k, l, m);
    }

    cout << output[0] << endl;
    cout << output[1] << endl;
    cout << output[2] << endl;
    cout << output[3] << endl;
    cout << output[4] << endl;
}

int main()
{
    string input = "";

    Display(input);
}
