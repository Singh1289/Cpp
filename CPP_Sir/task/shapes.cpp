#include<iostream>
#include<string>
using namespace std;

class Shapes{
    public:
        string name;
        virtual void displayDimension() = 0;
};
class shape2d : public Shapes{
    public:
        virtual void displayDimension() = 0;
};
class shape3d : public Shapes{
    public:
        virtual void displayDimension() = 0;
};
class circle : public shape2d{
    private:
        // string name;
        int radius;
        double area, perimeter;
    public:
        void calculateArea(){
            area = 3.14*radius*radius;
        }
        void calculatePerimeter(){
            perimeter = 2*(3.14)*radius;
        }
        void displayDimension(){
            cout<<"\n Area of circle: "<<area;
            cout<<"\n Perimeter of circle: "<<perimeter;
        }
        circle(int radius){
            this->radius = radius;
            this->name = "circle";
            calculateArea();
            calculatePerimeter();
        }
};
class square : public shape2d{
    private:
        // string name;
        int side;
        double area, perimeter;
    public:
        void calculateArea(){
            area = side*side;
        }
        void calculatePerimter(){
            perimeter = 4*side;
        }
        void displayDimension(){
            cout<<"\n Area of square: "<<area;
            cout<<"\n Perimeter of square: "<<perimeter;
        }
        square(int side){
            this->side = side;
            this->name = "square";
            calculateArea();
            calculatePerimter();
        }
};
class sphere : public shape3d{
    private:
        // string name;
        int radius;
        double volume, surface;
    public:
        void calculateVolume(){
            volume = 4/3*(3.14)*radius*radius*radius;
        }
        void calculateSurface(){
            surface = 4*(3.14)*radius*radius;
        }
        void displayDimension(){
            cout<<"\n Volumne of sphere: "<<volume;
            cout<<"\n Surface area of sphere: "<<surface;
        }
        sphere(int radius){
            this->radius = radius;
            this->name = "sphere";
            calculateSurface();
            calculateVolume();
        }
};
class cube : public shape3d{
    private:
        // string name;
        int side;
        double volume, surface;
    public:
        void calculateVolume(){
            // cout<<"called";
            volume = side*side*side;
        }
        void calculateSurface(){
            // cout<<"called";
            surface = 6*side*side;
        }
        void displayDimension(){
            cout<<"\n Volume of cube: "<<volume;
            cout<<"\n Surface area of cube: "<<surface;
        }
        cube(int side){
            this->side = side;
            this->name = "cube";
            calculateSurface();
            calculateVolume();
        }
};

class my_string{
    private:
        string data;
    public:
        my_string(string str){
            this->data = str;
        }
        void display_string(){
            cout<<this->data;
        }
};

int main(){
    // my_string str1("Kartik");
    // str1.display_string();

    // circle circle1(2);
    // circle1.calculateArea();
    // circle1.calculatePerimeter();
    // circle1.displayDimension();
    Shapes *shapes[10];
    int shapes_arr[10] = {0,0,0,0,0,0,0,0,0,0};
    square square1(4);
    square1.calculateArea();
    square1.calculatePerimter();
    square1.displayDimension();
    int choice, radius, side, shape_ch, shapes_cnt = 0;
    do{
        cout<<"\n MAIN MENU:";
        cout<<"\n Enter 1 to calculate dimensions of Circle";
        cout<<"\n Enter 2 to calculate dimensions of Square";
        cout<<"\n Enter 3 to calculate dimensions of Sphere";
        cout<<"\n Enter 4 to calculate dimensions of Cube";
        cout<<"\n Enter 5 to Add a Shape";
        cout<<"\n Enter 6 to Search a Shape";
        cout<<"\n Enter 7 to Update a Shape";
        cout<<"\n Enter 8 to Display All Shapes";
        cout<<"\n Enter 9 to Exit";
        cout<<"\n Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1: {cout<<"\n Enter radius of the Circle: ";
                    cin >> radius;
                    circle circle2(radius);
                    // circle2.calculateArea();
                    // circle2.calculatePerimeter();
                    circle2.displayDimension();
                    break;}

            case 2: {cout<<"\n Enter side of the Square: ";
                    cin >> side;
                    square square2(side);
                    // square2.calculateArea();
                    // square2.calculatePerimter();
                    square2.displayDimension();
                    break;}

            case 3: {cout<<"\n Enter radius of sphere: ";
                    cin >> radius;
                    sphere sphere2(radius);
                    // sphere2.calculateVolume();
                    // sphere2.calculateSurface();
                    sphere2.displayDimension();
                    break;}

            case 4: {cout<<"\n Enter side of cube: ";
                    cin >> radius;
                    cube cube2(side);
                    // cube2.calculateVolume();
                    // cube2.calculateSurface();
                    cube2.displayDimension();
                    break;}

            case 5: do{
                        cout<<"\n ADD MENU: ";
                        cout<<"\n To Add a circle Press 1";
                        cout<<"\n To Add a square Press 2";
                        cout<<"\n To Add a sphere Press 3";
                        cout<<"\n To Add a cube   Press 4";
                        cout<<"\n To Exit Press 5";
                        cout<<"\n Enter your choice: ";
                        cin >> shape_ch;
                        switch(shape_ch){
                            case 1: cout<<"\n Enter radius for your circle: ";
                                    cin >> radius;
                                    shapes[shapes_cnt] = new circle(radius);
                                    cout<<"\n Shape Circle has been added";
                                    shapes[shapes_cnt]->displayDimension();
                                    shapes_arr[shapes_cnt] = 1;
                                    shapes_cnt++;
                                    break;

                            case 2: cout<<"\n Enter side for your square: ";
                                    cin >> side;
                                    shapes[shapes_cnt] = new square(side);
                                    cout<<"\n Shape Square has been added";
                                    shapes[shapes_cnt]->displayDimension();
                                    shapes_arr[shapes_cnt] = 1;
                                    shapes_cnt++;
                                    break;

                            case 3: cout<<"\n Enter radius for your sphere: ";
                                    cin >> radius;
                                    shapes[shapes_cnt] = new sphere(radius);
                                    cout<<"\n Shape Sphere has been added";
                                    shapes[shapes_cnt]->displayDimension();
                                    shapes_arr[shapes_cnt] = 1;
                                    shapes_cnt++;
                                    break;

                            case 4: cout<<"\n Enter side for your cube: ";
                                    cin >> side;
                                    shapes[shapes_cnt] = new cube(side);
                                    cout<<"\n Shape Square has been added";
                                    shapes[shapes_cnt]->displayDimension();
                                    shapes_arr[shapes_cnt] = 1;
                                    shapes_cnt++;
                                    break;

                            default: cout<<"\n Enter a valid choice";
                        }
                    }while(shape_ch != 5);
                    break;

            case 6: do{
                        cout<<"\n SEARCH MENU: ";
                        cout<<"\n To Search for circle Press 1";
                        cout<<"\n To Search for square Press 2";
                        cout<<"\n To Search for sphere Press 3";
                        cout<<"\n To Search for cube   Press 4";
                        cout<<"\n To Exit Press 5";
                        cout<<"\n Enter your choice: ";
                        cin >> shape_ch;
                        switch(shape_ch){
                            case 1: cout<<"\n searching for circles: ";
                                    for(int j = 0; shapes_arr[j] = 1; j++){
                                        if(shapes[j]->name == "circle"){
                                            shapes[j]->displayDimension();
                                        }
                                    }
                                    break;

                            case 2: cout<<"\n searching for squares: ";
                                    for(int j = 0; shapes_arr[j] = 1; j++){
                                        if(shapes[j]->name == "square"){
                                            shapes[j]->displayDimension();
                                        }
                                    }
                                    break;

                            case 3: cout<<"\n searching for spheres: ";
                                    for(int j = 0; shapes_arr[j] = 1; j++){
                                        if(shapes[j]->name == "sphere"){
                                            shapes[j]->displayDimension();
                                        }
                                    }
                                    break;

                            case 4: cout<<"\n searching for cubes: ";
                                    for(int j = 0; shapes_arr[j] = 1; j++){
                                        if(shapes[j]->name == "cube"){
                                            shapes[j]->displayDimension();
                                        }
                                    }
                                    break;

                            default: cout<<"\n Enter a valid choice";
                        }
                    }while(shape_ch != 5);
                    break;

            case 7:

            case 8: cout<<"\n List of all shapes: ";
                    for(int j = 0; j < 10; j++){
                        shapes[j]->displayDimension();
                    }
                    break;

            case 9: break;

            default:cout<<"\n Enter a valid choice.";
        }
    }while(choice != 9);
    return 0;
}
