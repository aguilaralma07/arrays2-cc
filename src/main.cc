#include <iostream>

void print(int &); //blueprint o prototipo

int main()
{
    // int matrix[3][3]{
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}};
    // int matrix2[3][3][3]{
    //     {
    //         {1, 2, 3},
    //         {4, 5, 6},
    //         {7, 8, 9}
    //     },
    //     {
    //         {10, 11, 12}, 
    //         {13, 14, 15}, 
    //         {16, 17, 18}
    //     },
    //     {
    //         {19, 20, 21}, 
    //         {22, 23, 24}, 
    //         {25, 26, 27}
    //     }
    //     };

    // for (int i{}; i < 3; i++)
    // {
    //     for (int j{}; j < 3; j++)
    //     {
    //         //std::cout << matrix[i][j] << "\t";
    //         for(int k{}; k<3; k++){
    //             std::cout << matrix2[i][j][k] << "\t";
    //         }
    //         std::cout << std::endl;
    //     }
    //     std::cout << std::endl;
    // }

    //     int** doublePtr
    // {
    //     new int*
    //     {
    //         new int{5}
    //     }
    // }; 

    // int* numero{new int{5}};
    // std::cout << numero << std::endl;

    // std::cout << "doublePtr memmory: " << &doublePtr << std::endl;
    // std::cout << "doublePtr value: " << *doublePtr << std::endl;
    //  //** -> * -> & | * es el valor de **, es otro puntero
    // std::cout << "doublePtr memmory value: " << &*doublePtr << std::endl;
    // std::cout << "doublePtr value value: " << **doublePtr << std::endl;
    // std::cout << "doublePtr mammory value value: " << &**doublePtr << std::endl;
    // std::cout << "doublePtr memmory value: " << doublePtr << std::endl;

    // int*** doublePtr2
    // {
    //     new int**
    //     {
    //         new int*
    //         {

    //             new int{5}
    //         }
    //     }
    // }; 

    int** matrix2ptr
    {
        new int*[3]
        {
            new int[3]{1,2,3},
            new int[3]{4,5,6},
            new int[3]{7,8,9}
        }
    };

    //std::cout << *(*(matrix2ptr+2)) +1 << std::endl;

    for(int i{}; i< 3; i++){
        for(int j{}; j< 3; j++){
            std::cout << *(*(matrix2ptr + i)) +j << "\t";
        }
        std::cout << std::endl;
    }

    // int* ptrArray{new int[6]{5, 3, 8, 2, 9, 1}};

    // std::cout << "ptrArray memmory: " << &ptrArray << std::endl;
    // std::cout << "ptrArray memmory of the array: " << ptrArray << std::endl;
    // std::cout << "ptrArray value of memmory: " << *ptrArray << std::endl;
    // std::cout << "first element ptrArray memmory: " << &ptrArray[0] << std::endl;
    // std::cout << "first element prtArray: " << ptrArray[0] << std::endl;

    // int numbers[6]{100, 87982, 3456, 465, 885, 86};

    // std::cout << "Array memmory: " << numbers << std::endl;
    // std::cout << "Array memmory: " << *numbers << std::endl;
    // std::cout << "first element memmory: " << &numbers[0] << std::endl;
    // std::cout << "first element: " << numbers[0] << std::endl;

    //const char* myString{"hello arrays"};

    /*for(int i = 0; i < 6; i++)
    {
        std::cout << &numbers[i] << "\t";
    }*/

    // for(int i = 0; i < 6; i++)
    // {
    //     std::cout << numbers + i << "\t";
    // }

    /*for(int n : numbers)
    {
        std::cout << &n  << "\t";
    }*/

    /*for(auto n : numbers)
    {
        std::cout << n  << "\t";
    }*/

    /*int i{};
    while(i < 6)
    {
        std::cout << numbers[i] << "\t";
        i++;
    }*/

    //int n1{5};//stack

    //pasar por valor o por referencia

    //int n2{n1};//copiar n1 en un nuevo campo de memoria dentro de n2

    //int& n3{n1};// esto es un valor por referencia, estas creando literalmente no una varabile normal, si una direccion en memoria de algo

    // std::cout << "n1 value: " << n1 << std::endl;
    // std::cout << "n2 value: " << n2 << std::endl;
    // std::cout << std::endl;
    // n2++;

    // std::cout << "n1 value: " << n1 << std::endl;
    // std::cout << "n2 value: " << n2 << std::endl;
    // std::cout << std::endl;

    // std::cout << "memmory n1: " << &n1 << std::endl;
    // std::cout << "memmory n2: " << &n2 << std::endl;

    // std::cout << std::endl;

    // std::cout << "memmory n1: " << &n1 << std::endl;
    // std::cout << "memmory n3: " << &n3 << std::endl;
    // std::cout << std::endl;

    // std::cout << "n1 value: " << n1 << std::endl;
    // std::cout << "n3 value: " << n3 << std::endl;
    // std::cout << std::endl;

    // n3++;
    // n1++;

    // std::cout << "n1 value: " << n1 << std::endl;
    // std::cout << "n3 value: " << n3 << std::endl;

    // std::cout << std::endl;

    //print(n1);

    std::cin.get();

    return 0;
}

void print(int &number)
{
    std::cout << "number value: " << number << std::endl;
    std::cout << "number memmory: " << &number << std::endl;
}