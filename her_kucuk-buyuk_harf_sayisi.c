#include <stdio.h>
// klavyeden girilen metindeki her küçük ve büyük harfin adetini bul

int main()

{
  
 char metin[200];
 int dizi[26] = {0}; // 26 elemanlı küçük harf dizisi(her küçük harften başlangıçta 0 tane var) 
 int Dizi[26] = {0}; // 26 elemanlı büyük harf dizisi(her büyük harften başlangıçta 0 tane var) 
 int i = 0;
 int x; 
 int y;
 
 printf("metin girin: ");
 gets(metin);
 
 while(metin[i] != '\0')
 {
     
  if(metin[i] >= 'a' && metin[i] <= 'z')
  {
    x = metin[i] - 'a';
    dizi[x]++;
  }
  
  if(metin[i] >= 'A' && metin[i] <= 'Z')
  {
   y = metin[i] - 'A';
   Dizi[y]++;
  }

  i++; 
 }
 
 for(i = 0 ; i < 26 ; i++)
 {
  printf("%c harfi metinde %d tane\n",i + 'a',dizi[i]);
 }
 
 printf("\n");
 
 for(i = 0 ; i < 26 ; i++)
 {
  printf("%c harfi metinde %d tane\n",i + 'A',Dizi[i]);
 }
 
 return 0;
 
}