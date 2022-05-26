#include <iostream>
using namespace std;
// function prototypes
// print Rectangle patterns
void printRectangle();
// print Hollow Rectangle patterns
void printHollowRectangle();
// Inverted Hald Pyramid
void invertedHalfPyramid();
// 180 rotated half pyramid
void rotatedHalfPyramid();
// number half pyramid
void numberHalfPyramid();
// print Floyd's Triangle
void floydsTriangle();
// print Butterfly Pattern
void butterflyPattern();

int main()
{

    // printRectangle();
    // printHollowRectangle();
    // invertedHalfPyramid();
    // rotatedHalfPyramid();
    // numberHalfPyramid();
    // floydsTriangle();
    butterflyPattern();
    return 0;
}

// print Rectangle patterns
void printRectangle()
{
    int rows, cols;
    cin >> rows >> cols;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// print Hollow Rectangle patterns
void printHollowRectangle()
{
    int rows, cols;
    cin >> rows >> cols;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Inverted Hald Pyramid
void invertedHalfPyramid()
{
    int row;
    cin >> row;
    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// 180 rotated half pyramid
void rotatedHalfPyramid()
{
    int row;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j <= row - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

// number half pyramid
void numberHalfPyramid()
{
    int row;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

// print Floyd's Triangle
void floydsTriangle()
{
    int row;
    cin >> row;
    int count = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }
}

// print Butterfly Pattern
void butterflyPattern()
{
    int row;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * row - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * row - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

