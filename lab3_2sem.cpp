
#include <iostream>


class Rectangle
    {
protected:
    double A, B;

public:
    Rectangle (double a, double b) : A(a), B (b) {}

    double Area()
        {
        return A*B;
        }

    virtual void print()
        {
        std::cout << std::endl;
        std::cout << "Side a: " << A << std::endl;
        std::cout << "Side b: " << B << std::endl;
        std::cout << "Area: " << Area() << std::endl;
        }
    };

class Priamo: public Rectangle
    {
    protected:
    double H;

    public:
        
    Priamo (double a, double b, double h) : Rectangle (a, b), H(h) {}

    double Vol()
        {
        return H * Area ();
        }

    void print() override
        {
        Rectangle::print();
        std::cout << "H: " << H << std::endl;
        std::cout << "Volume: " << Vol () << std::endl;
        }
    };

int main() {
    Rectangle r(3, 4);
    Priamo p(5, 6, 11);

    r.print();
    std::cout << std::endl;
    p.print();
    std::cout << std::endl;

    Rectangle* rr = new Rectangle (2, 3);
    Priamo* pp = new Priamo(5, 7, 9);

    rr->print();
    std::cout << std::endl;
    pp->print();
    std::cout << std::endl;
    return 0;
}



