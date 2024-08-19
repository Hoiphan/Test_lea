#include "hash1.h"
#include "hash1.cpp"

/*
  char[] a = "12fdfdfdf" =? string a = "12fdfdff";
  cout << a || Output: 12fdfdfd

  cout << *a || Output: 1
  cout << a[0] || Output: 1
  cout << &a  || Dia chi

*/

/*
  Dynamic 2D Array:

  C1: int * arr = new int[n*m];

   *Nhap:
  for i: 0 -> n-1:
    for: j: 0 -> m-1:
      arr[i*m+j] = ....
   *Xuat:
  for i: 0 -> n -1:
    for: j: 0 -> m -1:
       cout << arr[i*m+j]<<" "
    cout << endl;

  C2:
   int ** arr = new int*[m];
   for: i =0 ; i= n-1:
     a[i] = new int[n]

  *Nhap:
    for: i =0 ; i <= m -1:
     for: j = 0 ; j <= n - 1:
        a[i][i] = ...

  *Xuat:
    for: i =0 ; i <= m -1:
     for: j = 0 ; j <= n - 1:
        cout << a[i][j] <<" ";

   * Thu hoi bo nho:
    for: i =0 ; i <= m -1:
        delete [] a[i] // Giai phong bo nho cac row

    delete [] a // Giai phong bo nho mang cac con tro

*/

/*
  int * Hash[10];
  la mang cac con tro, tuy nhien ko the dung deference de truy cap cac gtri cac ptu
  trong cac con tro dc thi that xu cac con tro nay chua duoc ININIALIZED (Giong nhu con tro
  mang 2 chieu)

  => Ta phai:
  for: i = 0, i = n-1:
    Hash[i] = new int[..] => de initialize con tro

  Truy cap cac ptu nay giong nhu mang Hai chieu Hash[i][j].

*/

int main(int argc, char **argv)
{

    hash1 Ob;
    Ob.AddItem("Hoi", "Water");
    Ob.AddItem("Hoi", "Beer");
    Ob.AddItem("Hoi", "Alcohol");
    Ob.AddItem("ioH", "Alcohol");
    Ob.AddItem("ioH", "Alcohol");
    Ob.AddItem("Hiko", "SugarCan");
    cout << Ob.Hash("Hoi") << endl;
    cout << Ob.NumberOfItemsInIndex(Ob.Hash("Hoi")) << endl;
    cout << Ob.NumberOfItemsInIndex(Ob.Hash("Hiko")) << endl;
}