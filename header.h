enum Colours
{
    RED,
    GREEN,
    BLUE,
    GRAY
};

class Point
{
public:
    int x;

    int y;

    int colors;

    Point(){}

    Point(int value_x, int value_y, Colours color)
    {
        colors = color;
        x = value_x;
        y = value_y;

    }

    int get_x()
    {
        return x;
    }

    int get_y()
    {
        return y;
    }

    int getPerumetr()
    {
        int perumetr = 2 * (x + y);
        return perumetr;
    }

    double getDiagonal()
    {
        double diagonal = sqrt(pow(x, 2) + pow(y, 2));
        return diagonal;
    }

    void printPointAndPerumetrAndDiagonalToConsole()
    {
        cout << "X = " << x << "\t" << "Y = " << y << "\t";

        cout << "Perumetr = " << getPerumetr() << "\t" << "Diagonal = " << getDiagonal() << endl;
    }

    void painting() {
        cout << endl << "  " << endl;
        int** array = new int* [y];

        for (int i = 0; i < y; i++)
        {
            array[i] = new int[x];
        }

        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                array[i][j] = colors;
            }
        }

        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                cout << array[i][j] << "  ";
            }
            cout << endl;
        }

        for (int i = 0; i < y; i++)
        {
            delete[] array[i];
        }
        delete[] array;
        cout << "    " << endl;
    }

    ~Point()
    {

    }
};



class Polynom
{
public:

    Polynom(){}

    Point array_of_points[99];
    Point array_sorted[1];
    int number_elements = 0;

    void addArray(Point point)   {
        array_of_points[number_elements] = point;
        number_elements++;
    }

    void allPointsByX() {
        for (int i = 0; i < number_elements; i++) {
            for (int j = 0; j < number_elements; j++)
                if (array_of_points[j].x < array_of_points[j + 1].x) {
                    array_sorted[0] = array_of_points[j+1];
                    array_of_points[j+1] = array_of_points[j];
                    array_of_points[j] = array_sorted[0];
                }

        }
        for (int n = 0; n < number_elements; n++) {
            array_of_points[n].printPointAndPerumetrAndDiagonalToConsole();
        }
    }

    void allPointsByY() {
        for (int i = 0; i < number_elements; i++) {
            for (int j = 0; j < number_elements; j++) {
                if (array_of_points[j].y < array_of_points[j + 1].y) {
                    array_sorted[0] = array_of_points[j+1];
                    array_of_points[j+1] = array_of_points[j];
                    array_of_points[j] = array_sorted[0];
                }
            }
        }
        for (int n = 0; n < number_elements; n++) {
            array_of_points[n].printPointAndPerumetrAndDiagonalToConsole();
        }
    }
    ~Polynom(){}
};