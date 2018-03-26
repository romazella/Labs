// pp1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <QtCore/QCoreApplication>
#include <iostream>
#include <fstream>
#include <time.h>
#include <conio.h>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
#define size 500


//����������� ����������
void radix(int *ar, int *br, int *cr, int sizeC, int sizeAB)
{
	int i, k, n;
	k = sizeC;
	n = sizeAB;
	for (i = 0; i <= k; i++)
		cr[i] = 0;
	for (i = 0; i < n; i++)
		cr[ar[i]] += 1;
	for (i = 1; i < k + 1; i++)
		cr[i] += cr[i - 1];
	for (i = n - 1; i >= 0; i--)
	{
		br[cr[ar[i]] - 1] = ar[i];
		cr[ar[i]] -= 1;
	}
}

{  cout<<endl;
    clock_t end = clock();
    double sim_sort_Time = double(end - start)/ CLOCKS_PER_SEC;
    cout<<"stupidSort"<<endl;
    cout<<"Time:";
    cout<<sim_sort_Time<<endl;

for(int i=0; i<15; i++)
    
     cout<<data[i]<<"\t";
}

//������ ����������
void GnomeSort(int *data, int N)
{
    int i = 0;
    clock_t start2 = clock();
    while(i < N) {
        if(i == 0 || data[i - 1] <= data[i])
        {
            ++i;
        }
        else {
            int Temp = data[i];
            data[i] = data[i - 1];
            data[i - 1] = Temp;
            --i;
        }
    }
    clock_t end2 = clock();
    double sim_sort_Time2 = double(end2 - start2)/CLOCKS_PER_SEC;
    cout<<"GnomeSort"<<endl;
    cout<<endl;
    cout<<"Time:";
    cout<<sim_sort_Time2<<endl;

for(int i=0; i<15; i++)
    {
     cout<<data[i]<<"\t";
}


//���������� ����������
/*void N_mergeSort(int *data, int l, int r)
{

  if (l == r) return; // ������� ����������
   clock_t start3 = clock();
  int mid = (l + r) / 2; // ���������� �������� ������������������
  // � ���������� �������� ������� ���������� ��� ������ ��������
//  N_mergeSort(data, l, mid);
//  N_mergeSort(data, mid + 1, r);
  int i = l;  // ������ ������� ����
  int j = mid + 1; // ������ ������� ����
  int *tmp = (int*)malloc(r * sizeof(int)); // �������������� ������
  for (int step = 0; step < r - l + 1; step++) // ��� ���� ��������� ��������������� �������
  {
    // ���������� � ����������� ������������������ ������� �� ��������� ���� �����
    // ��� ������� ������� ���� ���� j > r
    if ((j > r) || ((i <= mid) && (data[i] < data[j])))
    {
      tmp[step] = data[i];
      i++;
    }
    else
    {
      tmp[step] = data[j];
      j++;
    }
  }
  // ������������ �������������� ������������������ � �������� ������
  for (int step = 0; step < r - l + 1; step++)
  {
      data[l + step] = tmp[step];
  }

  clock_t end3 = clock();
  double sim_sort_Time3 = double(end3 - start3) / CLOCKS_PER_SEC;
   cout<<"N_mergeSort"<<endl;
   cout<<"Time:";
  cout<<sim_sort_Time3<<endl;

for(int i=0; i<15; i++)
  {
   cout<<data[i]<<"\t";
}
}*/

//���������� ����������
/*void V_mergeSort(int *data, int n)
{
  int step = 1;                                                  // ��� ��������� ������������������
  clock_t start4 = clock();
  int *temp = (int*)malloc(n * sizeof(temp));                  // �������������� ������
  while (step < n)                                            // ���� ��� ������ ����� �������
  {
    int index = 0;                                           // ������ ��������������� �������
    int l = 0;                                              // ����� ������� �������
    int m = l + step;                                      // �������� �������
    int r = l + step * 2;                                 // ������ ������� �������
    do
    {
      m = m < n ? m : n;                               // ����������� ������� �� ������� �� ������� ������������������
      r = r < n ? r : n;
      int i1 = l, i2 = m;                            // ������� ������������ ���������
      for (; i1 < m && i2 < r; )                    // ���� i1 �� ����� �� �������� � i2 �� ����� �� �����
      {
        if (data[i1] < data[i2]) { temp[index++] = data[i1++]; }              // ��������� ������� �������������� ������������������
        else { temp[index++] = data[i2++]; }
      }
                                                                             // ��� i1 < m ��� i2 < r - ������ ���� �� ���������� while ����� �����������
      while (i1 < m) temp[index++] = data[i1++];                             // ������� ���������� �������� ����������� ��������
      while (i2 < r) temp[index++] = data[i2++];                             // � �������������� ������
      l += step * 2;                                                         // ������������ �� ��������� ����������� �������
      m += step * 2;
      r += step * 2;
    } while (l < n);                                                          // ���� ����� ������� ������������ ������� - � �������� �����������������
    for (int i = 0; i < n; i++)                                              // ��������� �������������� ������ ������� � a
      data[i] = temp[i];
    step *= 2;                                                              // ����������� � 2 ���� ��� ���������
  }
  clock_t end4 = clock();
  double sim_sort_Time4 = double(end4 - start4)/ CLOCKS_PER_SEC;
  cout<<endl;
   cout<<"V_mergeSort"<<endl;
   cout<<"Time:";
  cout<<sim_sort_Time4<<endl;

for(int i=0; i<15; i++)
  {
   cout<<data[i]<<"\t";
}

}

/*void sort()
{
const int column =13500;
int data[column];
    QFile file(":/Table.txt");

           if (!file.open(QIODevice::ReadOnly))
            {
                //qDebug() <<  "Cannot open a file";
            }

            int i = 0;
            QDataStream in(&file);
            while (!in.atEnd())
            {
                in >> data[i];
                i++;
            }

}*/
int main()
{
    ifstream f, g;
    int n=0;
    int data[size];
    string line;
    f.open("500.txt", ios::in);
    g.open("Result.txt", ios::in);
    if(f)
    {
        while(!f.eof())
        {
            f>>data[n];
            n++;
            getline(g, line);
        }
      // cout<<line<<"\t";
//        radixSort(data,n);
        GnomeSort(data, n);
//       N_mergeSort(data, 0, size-1);

//        V_mergeSort(data, n);
        f.close();
    }


   system("pause");
}
