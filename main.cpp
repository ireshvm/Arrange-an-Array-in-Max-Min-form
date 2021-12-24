#include <iostream>
#include<algorithm>


using namespace std;


   void x(int a[], int size)
   {
      int max = size - 1;
      int min = 0;

   int y = a[size - 1] + 1;

   for (int i = 0; i < size; i++)
      {
      if (i % 2 == 0)
      {
         a[i] += (a[max] % y) * y;
         max--;
      }
      else{
         a[i] += (a[min] % y) * y;
         min++;
      }
   }
   for(int i = 0; i < size; i++){
      a[i] = a[i] / y;
   }
}
int main(){

         int n;
    cout<<"Please enter how many numbers you want to arrange"<<endl;
    cin>>n;
   int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
      int size = sizeof(a) / sizeof(a[0]);

      sort(a, a + size);
      x(a, size);


      cout<<"arranged numbers is "<<endl;
      for(int i = 0; i < size; i++)
        {
         cout<< a[i] <<endl;
      }

}








