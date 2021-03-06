#include <iostream>
#include <cstring>
using namespace std;

int stepWays(int array[], int size, int N){
   int count[N + 1];
   memset(count, 0, sizeof(count));
   count[0] = 1;
   for (int i = 1; i <= N; i++)
      for (int j = 0; j < size; j++)
         if (i >= array[j])
            count[i] += count[i - array[j]];
   return count[N];
}
int main() {
   int array[] = {1, 2, 3};
   int size = sizeof(array) / sizeof(array[0]);
   int N;
   cout<<"enter the number of steps : ";
   cin>>N;
   cout<<"Total number of ways in which the frogs can jump up "<<N<<" stairs is "      <<stepWays(array, size, N);
   return 0;
}
