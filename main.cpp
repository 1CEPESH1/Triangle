// MainDiagonal.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
const int M = 10, N = 10;

void MainDiagonal(const int x, const int y, int matrix[][M])
{
    std::cout << std::endl;

    for (int i = 0; i < 5; i++)
    {
        int j = i;
        std::cout << matrix[i][j] << " ";

    }
    std::cout << std::endl;
}

void AdditionalDiagonal(const int x, const int y, int matrix[][M])
{
    std::cout << std::endl;
    int j = 4;
    for (int i = 0; i < 5; i++)
    {
        std::cout << matrix[i][j] << " ";
        j--;
    }
    std::cout << std::endl;
}

int EvenNotEven(int z) {
    z %= 2;
    return z;
}

void triangle(const int x, const int y, int matrix[][M])
{
    if (x == y) {
        std::cout << std::endl;
        int b = y, r = 0, k = x - 1, p = y / 2;
        for (int i = 0; i < x; i++)
        {

            int j = i;
            for (; j < b; j++) // заполнение треугольника
            {
                int z = matrix[i][j];

                std::cout << EvenNotEven(z) << "\t";
            }

            if (i != 0 && k > p) // заполнение матрицы с права
            {
                int e = k;
                for (; e < y; e++)
                {
                    std::cout << matrix[i][e] << "\t";
                }
                k--;
            }
            r++;
            if (EvenNotEven(x) == 1)
            {
                if (r < p + 1) //заполнение матрицы слева
                {
                    std::cout << std::endl;
                    for (int k = 0; k < r; k++)
                    {
                        std::cout << matrix[i + 1][k] << "\t";
                    }
                }
            }
            else
            {
                if (r < p) //заполнение матрицы слева
                {
                    std::cout << std::endl;
                    for (int k = 0; k < r; k++)
                    {
                        std::cout << matrix[i + 1][k] << "\t";
                    }
                }
            }

            if (i > p) // заполнение матрицы после прохождения треуголника по i
            {
                std::cout << std::endl;
                for (int j = 0; j < x; j++)
                {
                    std::cout << matrix[i][j] << "\t";
                }
            }
            b--;
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "enter a square matrix" << std::endl;
    }
}


//main////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() //i cols, j rows
{

    int matrix[M][N];
    int x = 9, y = 9;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            matrix[i][j] = rand() % 20;
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    triangle(x, y, matrix);

}