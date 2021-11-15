#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>

//AYSENUR ERKIN
//19360859072

//SORU-1
struct node{
    int data;
    struct node *next;
};

int list_length(struct node *head){
 int uzunluk = 0;

 while(head){
   uzunluk++;
   head = head->next;
  }

  return uzunluk;
}


void dugum_ekle(struct node **head, int n){
   struct node*yenidugum = NULL;
   yenidugum = (struct node *)malloc(sizeof(struct node));
   yenidugum->data = n;
   yenidugum->next = *head;
   *head = yenidugum;
}

int main(){
 struct node *head = NULL;
 dugum_ekle(&head, 1);
 dugum_ekle(&head, 2);
 dugum_ekle(&head, 3);
 dugum_ekle(&head, 4);
 dugum_ekle(&head, 5);

 printf("Bagli Listenin Uzunlugu: %d ", list_length(head));

  return 0;
}


//SORU-2
int index=0;
void palindrom_kontrol(char kelime[]){

  int n = strlen(kelime) - (index+1);

if (kelime[index] == kelime[n]){
   if (index+1 == n || index==n){
      printf("Girilen Kelime Palindromdur...");
     return 0;
     }
    index=index+1;
    palindrom_kontrol(kelime);
 }
else{
      printf("Girilen KelimePalindrom Degildir...");
 }
}

int main(){
 char kelime[20];
 printf("Kelime Girin: ");
 scanf("%s", kelime);

 palindrom_kontrol(kelime);

    return 0;
}



//SORU-3
int i=2;
int Asal_Kontrol(int n){
 if(n==i){
    return 1;
    }
 else if(n%i==0){
    return 0;
    }
 else{
    i=i+1;
    return Asal_Kontrol(n);
    }
}
int main()
{
 int n;
 printf("Pozitif Tam Sayi Girin:");
 scanf("%d",&n);

  if(Asal_Kontrol(n)==0){
    printf("Girilen Sayi Asaldir...");
    }
  else{
    printf("Girilen Sayi Asal Degildir...");
    }
}



//SORU-4
void carpanlarina_ayirma(int n, int sayac){
 if(n<1){
    return 0;
  }
 else if(n % sayac == 0){
    printf("%d ", sayac);
    carpanlarina_ayirma(n/sayac, sayac);
  }
 else{
    carpanlarina_ayirma(n, sayac+1);
  }
}


int main()
{
    int n;

    printf("Input: ");
    scanf("%d", &n);

    printf("Output: ");
    carpanlarina_ayirma(n, 2);

    return 0;
}



















