// week.17.cpp : 
//
using namespace std;
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include < conio.h>
#include <stdio.h>
     void SetColor(int text, int background)
     {
        HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hStdOut, (WORD)((background << 2) | text));
     }

int main()
{
        HANDLE Concole;
    setlocale(LC_ALL, "rus");
    //Задание 5.1
     //     
      srand(time(NULL));                                        
      const int m=5;
      const int n=5 ;
      int arrA[m][n];
      int arrB[m][n];
      int arrC[m][n];     
  
     cout << "Матрица A "<< endl;    
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j <n; j++)
         {
             arrA[i][j] = rand() % 3;   
             cout << arrA[i][j] << " ";
         }
         cout << endl;
     }
     cout << "Матрица B "<<endl;
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < m; j++)
         {
             for (int i = 0; i < m; i++)
                 arrB[i][j] = rand() % 3;
             cout << arrB[i][j] << " ";
         }

             cout << endl;
     }

     cout << "Матрица С " << endl;
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < n; j++)
         {
             arrC[i][j] = arrA[i][j] + arrB[i][j];
             if (arrC[i][j] == 0) 
             {
                 cout << "\x1b[32m" << arrC[i][j] << "\x1b[0m ";
             }
             else 
             {
                 cout << arrC[i][j] << " ";
             }
         }

         cout << endl;
     }
      

     //Задание 5.2   

     // srand(time(NULL));                                        

     // int arrA[6][6];
     // int arrB[6][6];
     // int arrC[6][6];

     //cout << "Матрица A "<< endl;
     //int positiv = 0;
     //int sum = 0;
     //for (int i = 0; i < 6; i++)
     //{
     //    for (int j = 0; j <6; j++)
     //    {
     //        arrA[i][j] = rand() % 10+(-2);
     //        cout << arrA[i][j] << " ";
     //    }
     //    cout << endl;
     //}

     //cout << "Матрица B "<<endl;
     //for (int i = 0; i < 6; i++)
     //{
     //    for (int j = 0; j < 6; j++)
     //    {
     //        arrB[i][j] = rand() %10+(-4);
     //        cout << arrB[i][j] << " ";
     //    }
     //    cout << endl;
     //}

     //cout << "Матрица С " << endl;
     //for (int i = 0; i < 6; i++)
     //{
     //    for (int j = 0; j < 6; j++)
     //    {
     //        arrC[i][j]= arrA[i][j] + arrB[i][j];
     //        cout << arrC[i][j] << " ";

     //        if (arrC[i][j] > 0)            
     //        {             
     //            positiv++;
     //        }
     //    }
     //    cout << endl;
     //}      
     //   cout << "Количество положительных чисел: " << positiv << endl;
      // Задание 5.3
     // srand(time(NULL));                                        
     // const int m=7;
     // const int n=8 ;    
     // const int m1 = 3;
     // const int n1 = 4;
     // int arrA[m][n];
     // int arrB[m1][n1]; 
     //
     // cout << "Матрица A "<< endl;

     //for (int i = 0; i < m; i++)
     //{
     //    for (int j = 0; j <n; j++)
     //    {
     //        arrA[i][j] = rand() % 10;
     //        cout << arrA[i][j] << " ";
     //    }
     //    cout << endl;
     //} 
     //  
     // int sum1 = 0; 
     // int col = 4;
     //for (int i = 0; i < m; i++)  
     //{
     //   sum1 += arrA[i][col];                            
     //}         
     //    cout << endl;

     //cout << "Матрица B "<<endl;
     //for (int i = 0; i < m1; i++)
     //{
     //    for (int j = 0; j < n1; j++)
     //    {
     //        arrB[i][j] = rand() %10;
     //        cout << arrB[i][j] << " ";
     //    }
     //    cout << endl;
     //}

     //int sum2 = 0;
     //int row = m1 - 1;
     //for (int j = 0; j < n1; j++)
     //{
     //    sum2 += arrB[row][j];
     //}
     //cout << endl;
     //   cout << "sum = " << sum1 <<endl ;
     //   cout << "sum = " << sum2 << endl;

        // Задание 5.4

    /*    srand(time(NULL));
        int const m = 3;
        int const n = 4;
        int arrA[m][n];
        int arrB[m][n];
        cout << "Матрица A " << endl;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arrA[i][j] = rand() % 10;
                cout << arrA[i][j] << " ";
            }
            cout << endl;
        }

        int sum1 = 0;
        int col = n-1;
        for (int i = 0; i < m; i++)
        {
            sum1 += arrA[i][col];

        }
        cout << endl;

        cout << "Матрица B " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arrB[i][j] = rand() % 10;
                cout << arrB[i][j] << " ";
            }
            cout << endl;
        }
        int sum2 = 0;
        int row = 1 ;       
        
       for (int j = 0; j < n; j++)
       {
              sum2 += arrB[row][j];

       }
        
        cout << endl;
        cout << "sum = " << sum1 << endl;
        cout << "sum = " << sum2 << endl;*/

        // Задание 5.5      
               
        //srand(time(NULL));
        //int const m=4;
        //int const n = 4;
        //int arr[m][n];
        //cout << "Матрица A " << endl;
        //for (int i = 0; i < m; i++)
        //{
        //    for (int j = 0; j < n; j++)
        //    {
        //        arr[i][j] = rand() % 20;
        //        cout << arr[i][j] << " ";
        //    }
        //    cout << endl;
        //}
        //int max = arr[0][0];
        //
       
        //for (int i = 0; i < m; i++)
        //{
        //    for(int j = 0; j < n;j++)
        //    {

        //       if (arr[i][j] > max )
        //       {
        //          
        //        max =arr[i][j];
        //       }

        //      cout << endl;
        //    }

        //}
        //      cout << "MAX = " << max << endl;

          //Задание 5.6

    //srand(time(NULL));
    //    int const m = 3;
    //    int const n = 2;
    //    int arr[m][n];
    //    int arr1[n][m];     
    //    cout << "Матрица A " << endl;
    //    for (int i = 0; i < m; i++)
    //    {
    //        for (int j = 0; j < n; j++)
    //        {
    //            arr[i][j] = rand() % 10;
    //            cout << arr[i][j] << " ";
    //        }
    //        cout << endl;
    //    }
    //    cout << "Транспортированная матрица с уменьшенными элементами в 2 раза :" << endl;
    //    for (int i = 0; i < n; i++) 
    //    {
    //        for (int j = 0; j < m; j++)
    //        {
    //            arr1[i][j] = arr[j][i]/2;
    //            cout << arr1[i][j] << " ";
    //        }
    //        cout << endl;
    //    }
    // 
      // Задание 5.7
          
     // srand(time(NULL));                                        
     // const int m=4;
     // const int n=4 ;
     // int arrA[m][n];
     // int arrB[m][n];
     // int arrC[m][n];     
     // int count = 0;
     //cout << "Матрица A "<< endl;    
     //for (int i = 0; i < m; i++)
     //{
     //    for (int j = 0; j <n; j++)
     //    {
     //        arrA[i][j] = rand() % 3;   
     //        cout << arrA[i][j] << " ";
     //    }
     //    cout << endl;
     //}
     //cout << "Матрица B "<<endl;
     //for (int i = 0; i < m; i++)
     //{
     //    for (int j = 0; j < m; j++)
     //    {
     //        for (int i = 0; i < m; i++)
     //            arrB[i][j] = rand() % 2;
     //        cout << arrB[i][j] << " ";
     //    }

     //        cout << endl;
     //}

     //cout << "Матрица С " << endl;
     //for (int i = 0; i < m; i++)
     //{
     //    for (int j = 0; j < n; j++)
     //    {
     //        arrC[i][j] = arrA[i][j] + arrB[i][j];
     //        cout << arrC[i][j] << " ";
     //    }
     //    cout << endl;
     //}
    
     //for (int i = 0; i < m; i++)
     //{
     //    for (int j = 0; j<n;  j++)
     //    {
     //        if ( i<j && arrC[i][j] == 0)
     //        {                 
     //            count++;                
     //        }            
     //    }
     //}
     //    cout << "Количество нулей справа от главной диагонали= " << count << endl;
     //
      // Задание 5.8

        //srand(time(NULL));
        //int const m = 4;
        //int const n = 4;
        //int arr[m][n];           
        //
        //for (int i = 0; i < m; i++)
        //{
        //    for (int j = 0; j < n; j++)
        //    {
        //        cout << "Введите число матрицы [" << i << ", " << j << "]:" << endl;
        //        cin >> arr[i][j]; 
        //    }
        //}
        //int max = arr[0][0];
        //for (int i = 0; i < m; i++)
        //{
        //    for (int j = 0; j < n; j++)
        //    {
        //        if (arr[i][j] > max)
        //        {
        //            max = arr[i][j];          
        //        }
        //    }
        //}
        //cout << "Матрица: " << endl;
        //for (int i = 0; i < m; i++)
        //{
        //    for (int j = 0; j < n; j++)
        //    {
        //        if (arr[i][j] == max) {
        //           cout << "\x1b[32m" << arr[i][j] << "\x1b[0m ";

        //        }

        //        else {

        //            cout << arr[i][j] << " ";
        //        }
        //    }
        //    cout << endl;
        //}
             //Задание 5.9

        // srand(time(NULL));
        //int const m =7;
        //int const n = 7;
        //int arr[m][n];           
        //cout << "Матрица A " << endl;
        //for (int i = 0; i < m; i++)
        //{
        //    for (int j = 0; j < n; j++)
        //    {
        //        arr[i][j] = rand() % 10;
        //        cout << arr[i][j] << " ";
        //    }
        //    cout << endl;
        //}
        //int sum = 0;
        //int count = 0;
        //for (int i = 0; i < m; i++)
        //{
        //    for (int j = 0 ; j < n; j++)
        //    {
        //        if (i == j)
        //        {
        //            sum += arr[i][j];
        //        }
        //        if (i > j)
        //        {
        //            if (arr[i][j] % 2 == 0) {
        //                count++;
        //            }
        //        }
        //    }
        //}
        //      cout << "sum = "<< sum << endl;
        //      cout << "Количество четных элементов слева от главной диагонали = " << count << endl;

        //Задание 5.10

        //srand(time(NULL));
        //int const m = 3;
        //int const n = 5;
        //int arr[m][n];           
        //cout << "Матрица A " << endl;
        //for (int i = 0; i < m; i++)
        //{
        //    for (int j = 0; j < n; j++)
        //    {
        //        arr[i][j] = rand() % 5;             
        //    }           
        //}            
        //int row = 0;
        //for (int i = 0; i < m; i++)
        //{
        //    for (int j = 0; j < n; j++)
        //    {
        //        if (i == row)
        //        {
        //            cout << "\x1b[32m" << arr[i][j] << "\x1b[0m ";
        //        }
        //        else
        //        {
        //            cout << arr[i][j] << " ";
        //        }
        //    }
        //    cout << endl;
        //}      
        // int sum = 0;
        // int col = 4;
        // for (int i = 0; i < m; i++)
        // {
        //     for (int j = 0; j < n; j++) 
        //     {
        //         if (j == col)
        //         {
        //             sum += arr[i][j];
        //         }
        //         else (j < col); 
        //         {
        //             col == 0;
        //         }
        //     }             
        // }
        // cout << "sum = "<< sum << endl;

    // Задание 5.11

     //srand(time(NULL));
     //   int const m = 3;
     //   int const n = 3;
     //    float arr[m][n];         
     //   float sum = 0;
     //   cout << "Матрица A " << endl;
     //   for (int i = 0; i < m; i++)
     //   {
     //       for (int j = 0; j < n; j++)
     //       {
     //           arr[i][j] = rand() % 10 + 0.2;
     //           cout << arr[i][j] << " ";
     //       }
     //       cout << endl;
     //   }
     //   for (int i = 0; i < m; i++) 
     //   {
     //       for (int j = 0; j < n; j++)
     //       {
     //           sum += arr[i][j];
     //       }
     //   }
     //          float Average = sum / (m*n);
     //   cout << "Average= " << Average << endl;
     
         //Задание 5.12(1)

 /*   int const m = 3;
    int const n = 3;
    float arr[m][n];
    float sum = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Введите число матрицы [" << i << ", " << j << "]:" << endl;
            cin >> arr[i][j];

            sum += arr[i][j];
        }
    }
    cout << "Матрица: " << endl;
    float average = sum / (m * n);
    cout << "Average = " << average << endl;
      
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > average)
            {
                cout << "\x1b[32m" << arr[i][j] << "\x1b[0m ";
            }
            else
            {
                cout << "\x1b[31m" << arr[i][j] << "\x1b[0m ";
            }
        }
        cout << endl;
    }*/

          
      //Задание 5.12(2)

        //srand(time(NULL));
        //int const m = 3;
        //int const n = 3;
        //int arr[m][n];  
        //
        //for (int i = 0; i < m; i++)
        //{
        //    for (int j = 0; j < n; j++)
        //    {
        //        cout << "Введите число матрицы [" << i<<"," << j << "]"<< endl;
        //        cin >> arr[i][j]; 
        //    }
        //    
        //}
        //int max = arr[0][0];
        //int cols = 1;
        //for (int i = 0; i < m; i++)
        //{
        //    for (int j = 0; j < n; j++)
        //    {
        //        if (arr[i][cols] > max)
        //        {
        //            max = arr[i][j];
        //        }
        //            cout << arr[i][j] << " ";
        //    }
        //    cout << endl;
        //}

        //cout << "Max = " << max << endl;

         // Задание 5.13
   
   //     srand(time(NULL));
   //     int const m = 8;
   //     int const n = 8;
   //     int arr[m][n];           
   //     cout << "Матрица A " << endl;
   //     for (int i = 0; i < m; i++)
   //     {
   //         for (int j = 0; j < n; j++)
   //         {
   //             arr[i][j] = rand() % 35 -12;            
   //         }
   //     } 

   //     int row = 1;
   //    
   //for (int i = 0; i < m; i++)
   //{
   // for (int j = 0; j < n; j++)
   // {
   //    if (i == row) 
   //    {
   //        cout << "\x1b[32m" << arr[i][j] << "\x1b[0m ";

   //    }
   //      else 
   //      {

   //        cout << arr[i][j] << " ";
   //      }
   // }
   //   cout << endl;
   //}            

    // Задание 5.14

    //int const m = 3;
    //int const n = 3;
    //float arr[m][n];
    //float sum = 0;

    //for (int i = 0; i < m; i++)
    //{
    //    for (int j = 0; j < n; j++)
    //    {
    //        cout << "Введите число матрицы [" << i << ", " << j << "]:" << endl;
    //        cin >> arr[i][j];
    //    }
    //}

    //cout << "Матрица: " << endl;
    //for (int i = 0; i < m; i++)
    //{
    //    for (int j = 0; j < n; j++)
    //    {
    //        if (i %2 == 0) {
    //            cout << "\x1b[32m" << arr[i][j] << "\x1b[0m ";
    //        }
    //        else
    //        {

    //            cout << "\x1b[33m" << arr[i][j] << "\x1b[0m ";
    //        }

    //        sum += arr[i][j];
    //    }
    //    cout << endl;
    //}

    //float average = sum / (m * n);

    //cout << "Average = " << average << endl;

} 

