#include <iostream>

using namespace std;

class Matrix
{
    int row;
    int **data;

public:
    // constructor
    Matrix(int x) : row(x)
    {
        data = new int *[row];
        for (int i = 0; i < row; ++i)
        {
            data[i] = new int[row];
        }

        // Initialize all with zero
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < row; ++j)
            {
                data[i][j] = 0;
            }
        }
    }

    // Destructor
    ~Matrix()
    {
        cout << "\n Destructor is called...";
        for (int i = 0; i < row; ++i)
        {
            delete[] data[i];
        }
        delete[] data;
    }

    void input()
    {
        for (int i = 0; i < row; ++i)
        {
            data[i] = new int[row]; // Allocate memory for each row
            for (int j = 0; j < row; ++j)
            {
                cout << "[" << i << "][" << j << "] = ";
                cin >> data[i][j];
            }
            cout << "\n";
        }
    }

    void display()
    {
        cout << "\nHere is matrix :\n";
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < row; ++j)
            {
                cout << "  " << data[i][j] << "  ";
            }
            cout << "\n";
        }
    }

    Matrix &operator=( Matrix &b)
    {
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < row; ++j)
            {
                this->data[i][j] = b.data[i][j];
            }
        }
        return *this;
    }

    Matrix &operator+( Matrix &b)
    {
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < row; ++j)
            {
                this->data[i][j] += b.data[i][j];
            }
        }

        return *this;
    }

    Matrix &operator-( Matrix &b)
    {
        // cout << "\n - called \n";
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < row; ++j)
            {
                this->data[i][j] = this->data[i][j] - b.data[i][j];
            }
        }
        // cout << "Display m1 :\n";
        // for (int i = 0; i < row; ++i)
        // {
        //     for (int j = 0; j < row; ++j)
        //     {
        //         cout << "  " << this->data[i][j] << "  ";
        //     }
        //     cout << "\n";
        // }
        // cout << "\nexiting..";
        return *this;
    }

    Matrix operator*( Matrix &b)
    {
        Matrix temp(this->row);
        for (int i = 0; i < this->row; ++i)
        {
            for (int j = 0; j < this->row; ++j)
            {
                for (int k = 0; k < this->row; ++k)
                {
                    temp.data[i][j] += this->data[i][k] * b.data[k][j];
                }
            }
        }
        return temp;
    }

    Matrix &operator+=( Matrix &b)
    {
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < row; ++j)
            {
                this->data[i][j] += b.data[i][j];
            }
        }
        return *this;
    }

    Matrix &operator-=( Matrix &b)
    {
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < row; ++j)
            {
                this->data[i][j] = this->data[i][j] - b.data[i][j];
            }
        }
        return *this;
    }

    Matrix &operator*=( Matrix &b)
    {
        // Initialize temp to all zeros
        Matrix temp(this->row);
        //  multiplying
        for (int i = 0; i < this->row; ++i)
        {
            for (int j = 0; j < this->row; ++j)
            {
                for (int k = 0; k < this->row; ++k)
                {
                    temp.data[i][j] += this->data[i][k] * b.data[k][j];
                }
            }
        }
        // Copy elements for dangling
        for (int i = 0; i < this->row; ++i)
        {
            for (int j = 0; j < this->row; ++j)
            {
                this->data[i][j] = temp.data[i][j];
            }
        }

        return *this;
    }


};

int main()
{
    cout << "\n~~ START ~~\n";
    Matrix m1(3), m2(3), m3(3);
    cout << "m1 input :\n";
    m1.input();
    m1.display();
    cout << "m2 input :\n";
    m2.input();
    m2.display();

    // cout << "\n : + :";
    // m3 = m1 + m2;
    // m3.display();

    cout << "\n : - :";
    m3 = m1 - m2;
    m3.display();
    /*
        cout << "\n : * :";
        m3 = m1 * m2;
        m3.display();

        cout << "\n : += :";
        m1 += m2;
        m1.display();

        cout << "\n : -= :";
        m1 -= m2;
        m1.display();

        cout << "\n : *= :";
        m1 *= m2;
        m1.display();
    */
    cout << "\n~~ END ~~\n";
    return 0;
}
