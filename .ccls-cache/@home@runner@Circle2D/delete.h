class Circle2D {

    // Two double data fields named x and y that specify the center of the circle with constant get functions
    double x, y, radius;

    public:
    // A static int data field numberOfCircles with a static get function getNumberOfCircles().
    static int numberOfCircles;

    // A constructor that creates a circle with the specified x, y, and radius.
    Circle2D(double x, double y, double radius) {
        this->x = x;
        this->y = y;
        this->radius = radius;
        numberOfCircles++;
    }


    // A copy constructor Circle2D(const Circle2D & circle) that creates a circle with a given Circle2D object
    Circle2D(const Circle2D &circle) {
        x = circle.x;
        y = circle.y;
        radius = circle.radius;
        numberOfCircles++;
    }

    double getX() const {
        return x;
    }
    double getY() const {
        return y;
    }

    double getRadius() const {
        return radius;
    }

    static int getNumberOfCircles() {
        return numberOfCircles;
    }



    ~Circle2D() {
        numberOfCircles--;
    }

    // A constant function overlaps(const Circle2D& circle) that returns true if the specified circle overlaps with this circle.
    bool overlaps(const Circle2D &circle) const {
        if(x == circle.x && y == circle.y && radius == circle.radius) {
            return true;
        }
        return false;
    }
};
// Intitializing the static variable
int Circle2D::numberOfCircles = 0;
main fucntion to test the class


int main() {
    //Dynamically creates a Circle2D object on the heap using the constructor with the following arguments (2, 2, 5.5) and assigns the object address to the pointer pCir1
    Circle2D* pCir1 = new Circle2D(2,2,5.5);

    // Creates a Circle2D object cir2(-6, -3, 1.5).
    Circle2D cir2(-6, -3, 1.5);

    // Calls getNumberOfCircles() function from the pCir1
    cout<<"Number of objects is "<<pCir1->getNumberOfCircles()<<endl;

    // Creates a Circle2D object cir3 with the copy constructor with the cir2 object as an argument
    Circle2D cir3 = cir2;

    // Calls getNumberOfCircles() function from the cir3
    cout<<"Number of objects is "<<cir3.getNumberOfCircles()<<endl;

    // Calls overlaps(const Circle2D& circle) function from pCir1 pointer with the cir2 as an argument
    cout<<"pCir1 overlaps cir2 = "<<pCir1->overlaps(cir2)<<endl;

    // Calls overlaps(const Circle2D& circle) function from cir3 object with the cir2 as an argument
    cout<<"cir3 overlaps cir2 = "<<cir3.overlaps(cir2)<<endl;

    // Frees the memory allocated dynamically.
    delete pCir1;

    // Calls getNumberOfCircles() function.
    cout<<"Number of objects is "<<cir3.getNumberOfCircles();


    return 0;

}
