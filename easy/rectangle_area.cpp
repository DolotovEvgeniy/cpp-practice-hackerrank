#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
public:
    Rectangle() = default;
    Rectangle(int width, int height)
        : width_(width)
        , height_(height)
    {}

    void display() const {
        cout << width_ << " " << height_ << "\n";
    }

protected:
    int width_, height_;
};

class RectangleArea : public Rectangle {
public:
    void read_input() {
        cin >> width_ >> height_;

    }

    void display() const {
        cout << width_ * height_ << "\n";
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}