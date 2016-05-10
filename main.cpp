#include <iostream>

using namespace std;
string unhash(int64_t h); // defining function

int main()// program will start from  here
{
    int64_t hash_value=930846109532517;
    cout<< unhash(hash_value);//calling function and printing the output



}
string unhash(int64_t h) {
   int displacement[15];
   string letters = "acdegilmnoprstuw";
   int i = 0;
   int count=0;
   while ( h > 37 ) {
      displacement[i] = h % 37; //storing to remainder in displacement
      //cout<< displacement[i]<<endl;
      h /= 37;
      //cout<< h<<endl;
      i++;
      count++;

   }


   string revHash = "";
   for(int j = count-1; j >= 0; j--) {
      revHash += letters[ displacement[j] ];
      //cout<<unhashedWord;
   }

  return (revHash);
}
