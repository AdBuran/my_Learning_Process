/*#include <stdio.h>
int main()
{
printf("hello world");
printf("\nhello\\world");
printf("\nhello//world");
printf("\nhello\"world\"");

}
*/

//return 0; yazmak hatasız olduğunu  belirtmek için kullanılıyor 
/* yorum satırı bu iki şekilde açılıyor üstteki tek satır bu ise kapatana kadar 

#include <stdio.h>
<stdlib.h> bunlar kütüphaneler başına include yazmak onları dahil etmek anlamına geliyor
program main fonksiyonun içini algılar
return 0; hatasız olduğunu belirtmek için

devam eder */
//     DATA TYPES
/* 4 çeşit basit ,derived ,enumeration ,void
basic = integer(int(tam sayı)) , char(tek karakter) , float ve double (ondalık) float 4 bytes  double 8 bytes 
double la çok daha büyük sayıları tutabiliyoruz
integer hafızada 4 bytes tutar (%d)
double hafıda 8 bytes tutar büyük sayılar (%lf)
float hazıda 4 bytes tutar (%f)
char 1 bytes tek karakter (%c)
*/
/*#include <stdio.h>
int main(){
int sayi,sayi2;  sayi=13; sayi2=7;
printf("%d\t%d",sayi,sayi2);


}
*/
/*#include <stdio.h> 
int main(){

float a=12.21;
double b=6989.664465;
char x='a';
printf("%.3f %lf %c",a,b,x);

}
*/
/* #include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    printf("lutfen bir sayi giriniz:\n");
    scanf("%d",&a);
    printf("aldigimiz sayi %d",a);




    return 0;
}
*/
// & demek şu değeri tut demek gibi oluyor scanf veri girmeyi sağlıyor
// float da ve double %.2f ya da %.2lf yazılırsa noktadan sonra kaç basamak gidileceğini gösterir 
/*#include <stdio.h>
#include <stdlib.h>
int main(){
int a; float b; char x;
printf("lutfen bir sayi giriniz\n");
scanf("%d",&a);
printf("lutfen bir sayi giriniz\n");
scanf("%f",&b);
printf("lutfen bir harf giriniz\n");
scanf("\t%c",&x);
printf("ilk sayi=%d\nikinci sayi=%f\nHarf=%c",a,b,x);
return 0;

}

*/
/*#include <stdio.h>
int main(){
int a=13;
printf("a %d\n",sizeof(a));
printf("int %d\n",sizeof(int));
printf("float %d\n",sizeof(float));
printf("char %d\n",sizeof(char));
printf("double %d\n",sizeof(double));
return 0;
}
*/
/*sizeof kaç byte yer tuttuğunu gösterir. charda da intde de doubleda da floatda da %d kullanılmasının nedeni 
sizeof un doğal sayı vermesi */
/* Const(constant dan gelir sabit demektir)
define da tanımlama demektir define yazılara librarylerin altında main in içinde olmıcak şekilde tanımlanır */
/*#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main() {
const int a=13;
printf("Pi:%.5lf\tA:%d",PI,a);
    return 0;
}
*/
/* Arithmetic Operator
++ 1 ekler veriye -- 1 azaltır. + - * / % kullanılan işaretlerdir
% bir sayının bir sayıya bölümünden kalan */
/*#include <stdio.h>
#include <stdlib.h>
int main(){
int x=15;
int y=100;
printf("%d\n",x+y);
int a=21;
int b=10;
int c=a%b;
printf("%d",c);
return 0;
}
*/
// Assignment Operators atama operatorleri = -= *= /= %= +=
/*#include <stdio.h>
#include <stdlib.h>
int main() {  
int x = 13; */
/*x = x+3; aynı x += 3;*/
/*x = x-3; aynı x -= 3; */
/*x = x*3; aynı x *= 3; */
/*x = x/13; aynı x /= 13; */ 
/*x = x%5; aynı x%=5; */
//printf("%d",x);}
// Comparision Operators karşılaştırma 
/* == kullanımıı eşit mi demektir console a yazdırırsak eşitse 1 değilse 0 çıkar 
 < küçükse 1 değilse 0 , > büyükse 1 değilse 0 
 != eşit değil mi demek eşit değilse 1 eşitse 0
<= küçük eşit >= büyük eşit ( gene diğerleriyle aynı mantıkta çalışıyor)*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){
int x=25;
int y=23;
printf("%d",x<=y);
}*/
// Logical Operators &&(ve) ||(veya) ! (değili)
/*#include <stdio.h>
#include <stdlib.h>
int main(){
 int x,y; x=13; y=6;
 printf("%d",!(x<15||y>12)&&!(x<12||y>7));
}*/
//  İF ELSE 
/* if(içi 1 se {içindeki kod okunur})  else if (iften sonra yazılır içindeki kod 1 se{içi okunur }) istediğiniz kadar 'else if' konulur
 else bir koşulu yoktur if ve else if okunmamışsa okunur */
/*#include <stdio.h>
#include <stdlib.h>
int main(){ int x,y;
printf("x\n");
scanf("%d",&x);
printf("y\n");
scanf("%d",&y);
if(x==y){printf("x ve y esittir");}
else if(x>y){printf("x buyuktur y");}
else if(x<y){printf("x kucuktur y");}


    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){int x,y,s;printf("x i giriniz\n");scanf("%d",&x);
printf("y i giriniz\n");scanf("%d",&y);
printf("s i giriniz\n");scanf("%d",&s);
if(x>y&&x>s){printf("%d en buyuktur",x);}
if(y>x&&y>s){printf("%d en buyuktur",y);}
if(s>y&&s>x){printf("%d en buyuktur",s);}
return 0;} */
/*#include <stdio.h>
#include <stdlib.h>
int main(){int x,a;printf("bir sayi giriniz\n");scanf("%d",&x);
a = x%2;
if(a==0){printf("%d sayiniz cifttir\n",x);}
else if(a==1){printf("%d sayiniz tektir\n",x);}
return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a;printf("Yasinizi giriniz\n");scanf("%d",&a);
if(a>=18){printf("Oy kullanma hakkiniz vardir\n");}
else{printf("Oy kullanmak hakkiniz yoktur\n");}
return 0;
}*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(){int x,y;printf("Iki sayi giriniz\n");scanf("%d %d",&x,&y);
if ( x > y ){printf("%d buyuktur %d\n",x,y);}
else if ( x < y ){printf("%d buyuktur %d\n",y,x);}
else if( x == y ){printf("%d esittir %d",x,y);}

}*/
// FOR (initializationstatement; testexpression;update statement){burayada for çalıştığı sürecce çalışacak kodlar yazılır}
/*forda parantez içi bölümlerin görevi for(burasıbaşlangıçdeğeri;değerin çalışma ya da denenme kriteri;değerin değişimi nasıl değişeceği)*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){int x;
for(x=-55;x<=40;x++){printf(" %d ",x);}
return 0;
}*/
// ŞUNA Bİ ÇALIŞ
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a,b;printf("Birden kaca kadar toplansin\n");scanf("%d",&a);b=1;int c=0;
for(b;b<=a;b++){c +=b;}
printf("%d",c);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
int main(){int a;
for(a=0;a<=13000;a+=2){printf("%d ",a);}
return 0;
}*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(){int a,b=1,c=0;printf("Kaca kadar toplansin ?\n");scanf("%d",&a);
for(b;b<=a;b++){c+=b;}
printf("%d",c);
return 0;}

*/
// WHile (koşul doğru oldduğu sürece çalışır){çalışacak kod}
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a=0;
while(a<=10){
    printf("%d\t",a);
    a++;
}return 0;}*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;printf("Bir sayi giriniz...\n");scanf("%d",&a);printf("Girdiginiz sayi %d.\n",a);
    while(a<=13000){printf("Sayiniz entegre ediliyor...      ...%d...\n",a);a+=100;}
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a=0;
while(a<10){printf("%d\n",a);a+=2;}}
*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a=10;while(1<=a){printf("%d\t",a);a--;}}*/
// Do while
/* Do while ın kullanımı do{çalışıcak kod}while(tekrar çalışması için gereken koşul);*/
//Break; kullanımı kodu durdurur
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a;
for(a=0;a<=10;a++){ printf("%d",a); if(a==7){
        break;}
}
    
  
}*/
//continue; kullanımı atlama anlamına geliyor
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a;
    for(a=0;a<=10;a++){
        if(a==7){continue;}
        printf("%d",a);
    }
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(){int a;
for (a=0;a<=10;a++){
    if(a==3){continue;}
    if(a==7){break;}


    printf("%d",a);
}} */
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a;printf("Gunu giriniz ...\n");scanf("%d",&a);
switch(a){
    case 1 : printf("Pazartesi");break;
    case 2 : printf("Sali");break;
    case 3 : printf("Carşamba");break;
    case 4 : printf("Persembe");break;
    case 5 : printf("Cuma");break;
    case 6 : printf("Cumartesi");break; 
    case 7 : printf("Pazar");break;
    default :printf("Ne ariyon ");break;
}}*/
// sayı işlerinde sayı kesirli çıkacak ise ve %d olarak gösterilmişse diğeri de %f ile gösterilmişse sayıyı yuvarlıcaktır yuvarlamama sı için
//(float)a/b parantez içinde float yazılmalı a int b floatsa 
//Aşağıda görüldüğü gibi case in switch değeri eğer int ise '' konmaz ama str ise konulur
/*#include <stdio.h>
#include <stdlib.h>
int main(){char o;printf("Bir islem giriniz\n");scanf("%c",&o);float a,b;printf("Iki sayi giriniz\n");scanf("%f%f",&a,&b);
switch(o){
    case '+' :printf("%.2f+%.2f=%.4f",a,b,a+b); break;
    case '-' :printf("%.2f-%.2f=%.4f",a,b,a-b); break;
    case '*' :printf("%.2f*%.2f=%.4f",a,b,a*b); break;
    case '/' :printf("%.2f/%.2f=%.4f",a,b,a/b); break;
    default :printf("Gecersiz islem");
}}*/
//Boolean data types verinin true veya false olduğunu gösterir kullanımı için özel library gerektirir (<stdbool.h>)
/*#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){bool x=false;printf("%d",x);return 0;}
*/
/*Math.h Library'nin yardımcı fonksiyonları ceil floor sqrt  pow abs (<math.h> librarysi eklenmeli)*/
//ceil sayıyı bir üst tam sayıya yuvarlar 3.1==> 4.00 veya 3.7==>4.00
//floor sayıyı bir alt tam sayıya yuvarlar 3.1==> 3 veya 3.7==>3.00
//sqrt karekökünü alır
//pow üssünü aldırtır pow(tabansayısı,üssü)
// abs mutlak edeğeri alır tam sayının(int %d )de kullanılabilir %f %lf de kullanılamaz
/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){printf("%f\n",ceil(4.8));
printf("%f\n",ceil(4.8));
printf("%f\n",floor(4.8));
printf("%f\n",sqrt(100));
printf("%f\n",pow(3,4));
printf("%d\n",abs(-12));
return 0;
}*/
// cast etme aşağıdaki işlemde sonuç 2çıkıcak casting yaparak gerçek 2.25 değerini alabiliriz 2. şekilde (float ) yazarak cast ettik
/*#include <stdio.h>
#include <stdlib.h>
int main(){
    float sayi=9/4;
    printf("%f",sayi);
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){float sayi=(float)9/4;
printf("%f",sayi);}*/
/* karakterileri ifade etmek için asci kodları 0-255 her karakterin asci kodu vardır */
/*#include <stdio.h>
#include <stdlib.h>
int main(){printf("%d\t %d\t %d\n",'a','b','c');}*/
// asci kodlarıyla alfabeyi yazdırma
/*#include <stdio.h>
#include <stdlib.h>
int main(){int i;
    for(i='a';i<='z';i++){printf("%c",i);}
}*/
// Diziler 
/* float dizi[10] dizinin elemanlarının türü 'float' dizinin adı 'dizi' dizinin eleman sayısı '10'
2 tip dizi var tek boyutlu çok boyutlu
Dizilerin hafızada tuttuğu yer n*s bytes kadar tutar n eleman sayısı s değişken tipinin hafızada tuttuğu bytes 
dizinin herhangi bir elemanını bastırma elemanın pozisyonunu kullanmamız gerekirr 
dizinin 1. elemanı için dizi[0] ve sırayla gider  4. eleman dizi[3] dizi[5]={1,2,3,4,5} yazarak eleman tanımlayabiliriz
printf("%d",dizi[3]); komuduyla yazdırırız*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){int adem[10]={1,2,3,4,5,6,7,8,9,10};
printf("%d",adem[3]);} */
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a[100],i=0;for(i;i<=100;i++){a[i]=2*i;printf("%d\t",a[i]);}} */
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a[5]={1,2,3,4,5},i=0;a[2]=10;for(i;i<5;i++){printf("%d\t",a[i]);}}
*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a[3];printf("Sayı kumenizi giriniz");
for(int i=0;i<3;i++){scanf("%d",&a[i]);}
for(int i=0;i<3;i++){printf("%d",a[i]);}} */
// i yi her forda sıfırlayarak aldık ki 2. for da devam etsin
/* Çok boyutlu sayı dizileri
-matris oluşturmak için kullanılır  - kodların hafızada tutulan kısmı doğrusal olmasına rağmençok boyutlu diziler doğrusal değildir
çok boyutlu dizilerin yazımı dizi[büyük boyutlubölümler][büyük boyutlu bölümleri bölen bölümler]
dizi[sutün][satır]
çok boyutlu diziler tanımlanırken çok boyutlu bir matris gibi tanımlanabilir */
// tanımlama int a[2][2]={{1,2},{2,3}};
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a[2][2]={{1,2},{3,4}};
printf("%d",a[0][1]);}*/
// Çok boyutlu sayı dizileri egzersiz TEKRARLA print("\n") f in nedenini öğren
/*
#include <stdio.h>
#include <stdlib.h>
int main(){int a[10][10];int i,j;
for(i=0;i<=9;i++){
    for(j=0;j<=9;j++){
        if(i==j){
            a[i][j]=1;
        }   
        else{a[i][j]=0;
        }
    }
}
for(i=0;i<=9;i++){
    for(j=0;j<=9;j++){
        printf("%8d",a[i][j]);
    }
    printf("\n");
}

}*/
// Çok boyutlu sayı dizileri egzersiz 2
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a[2][3]={{1,2,3},{4,5,6}};int b[2][3]={{7,8,9},{9,8,7}};
int t[2][3];
int i,j;
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        t[i][j]=a[i][j]+b[i][j];
    }
}
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("%8d",t[i][j]);
    }
    printf("\n");
}
return 0;
}*/
//3 boyutlu çoklu sayı dizileri Egzersiz Çalış
/*#include <stdio.h>
#include <stdlib.h>
int main(){int a[2][3][2];int i,j,k;
printf("12 sayı giriniz\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<2;k++){
                scanf("%d",&a[i][j][k]);
            }
            
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<2;k++){
                printf("a[%d][%d][%d]=%d\n",i,j,k,a[i][j][k]);
            }
        
    }
    }


}
*/
//STRİNGS
// karakter dizisi tanımlaması ve yazdırması \0 tane tane tanımlarken zorunludur dizinin bittiğini gösterir
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    char a[]={'a','d','e','m','\0'};
    char b[]="adem";
    printf("%s\n",b);
    printf("%s",a);
}*/
/* dışarıdan dizi alırken [içine karakter limiti belirlemek zorunludur]*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){
    char a[500];
    printf("Fikirleriniz :\n");
    scanf("%s",&a);
    printf("\n");
    printf("%s",a);

}*/
// karakter dizisinde veri değiştirme 
/*#include <stdio.h>
#include <stdlib.h> 
int main(){
    char a[]="adem buran";
    a[3]='n';
    printf("%s",a); 
}*/
// STRİNGS Fonksiyonları <string.h> kütüphanesi ile çalışır
// strlen karakter dizisindeki karakter sayısını verir \0 vermeden
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char a[]="adem madene gitmiş adem madende badem yemiş madem adem madende badem yemiş niye bize getirmemiş";
    printf("sayi dizimizin boyu %d",strlen(a));

}*/
//strcmp sayı dzilerini kıyaslar asci tablosuna göre
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{char a[10]="abc";
char b[10]="ABC";
int c;
c =strcmp(a,b);
printf("%d\n",c);
if(c<0){
    printf("a > b ilişkisi");
}
else if(c>0){
    printf("a<b ilişkisi");
}
else{printf("a=b ilişkisi");}

}*/
//strncmp c =strncmp(a,b,4); dördüncü elemanı karşılaştırır
//strcpy(a,b) yaparsak a nın değer b nin değeriyle aynı olur b nin değeri kopyalanır
//strncpy(a,b,5) b nin ilk 5 karakterini a ya kopyalar a karakter dizisinin sonucu olur
//strcat birleştirme
// strncat istediğin kadarını birleştir 5 yazarsan 2.nin ilk 5 karakterini birleştirir
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char c[500];
    strcpy(c,"abc");
    strcat(c,"def");
    strcat(c,"gsd");
    printf("%s",c);
}*/
// strncat 
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char a[100];
    char b[100];
    int c;
    printf("Cha ???\n");
    scanf("%s",&a);
    printf("Char ???\n");
    scanf("%s",&b);
    printf("add ???\n");
    scanf("%d",&c);
    printf("%s\n",strncat(a,b,c));
}
*/
// gets ile input alma
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char z[300];
    printf("Isim giriniz");
    gets(z);
   printf("%s",z);
}*/
// fgets de 3 tane parametre girmemiz lazım (ilkikarakteridiziismi,ikincisi maxkaçkaraktertutucak,dosyaysa pointer hali standart input sa stdin)
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char z[300];
    printf("Isim giriniz");
    fgets(z,sizeof(z),stdin);
    printf("%s",z);
}*/
//fgets kullanımı önerilir gets önerilmez
//strrev karakterlerin sıralarını ters çevirir []="abc" strrev(a[])="cba"
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char a[30];
    printf("bir ifade giriniz\n");
    scanf("%s",&a);
    printf("giridiğiniz ifade %s\n",a);
    printf("tersi %s\n",strrev(a));
}*/
//strlwr yazıları küçük harfli yapar
//strupr diziyi büyük harfli yapar
//strstr pointer tanımlanması lazım arama yapıp aranan yerden bitimine kalan olanı veriyor



// Egzersizler
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char a[]="bonne";
    char b[]="soiree";
    char c[100]="";
    strcpy(c,a);
    strncpy(c+3,b,5);
//strncpy +3 c nin ilk kaç harfi korunacak onu gösteriyor b de bnin ilk kaç harfi kullanılacak onu
    printf("%s",c);

}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a,b,c;
    printf("Iki sayı giriniz\n");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("%d",c);
}*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    printf("3 tane ucgen kenarı giriniz");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b!=c || a==c && b!=c || b==c && a!=c )
    {
        printf("ikizkenar");
    }
    else if(a==b & b==c)
    {
    printf("eşkenardır.");
    }

    else
    printf("çeşit kenardır.");

}*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    char a[500][500]={"bir","iki","üç","dort","beş"};
    printf("4. elemanin 3.karakteri %c",a[3][2]);

}
*/
//FONKSİYONLAR !!!!!!
/*
#include <stdio.h>
#include <stdlib.h>
int main(){int a;
    printf("bir sayi giriniz");
    scanf("%d",&a);
    if(a%2==0){
        printf("sayiniz cifttir");
    }
    else{printf("tektir");}
}
*/
// ÜSTTEKİNİN FONKSİYONLA YAZILMIŞ DÖNMEYEN HALİ
/*
#include <stdio.h>
#include <stdlib.h>
void tekmiciftmi(int b){
    if(b%2==0){
        printf("Girdiğiniz sayi ciftdir");

    }
    else{printf("girdiğiniz sayi tektir");}
}
int main(){
    int a;
    printf("bir sayi giriniz ");
    scanf("%d",&a);
    tekmiciftmi(a);
} */
//DÖNERLİ FONKSİYONLU HALİ
/*
#include <stdio.h>
#include <stdlib.h>
int abc(int x){
    if(x%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){int a,b;
printf("bir sayi giriniz");
scanf("%d",&a);
b=abc(a);
if(b==1){
    printf("sayiniz cifttir");

}
else{printf("sayiniz tektir");}}
*/
// Bunu fonksiyon kullanarak yap
/* 
#include <stdio.h>
#include <stdlib.h>

int main(
){
    int a,b;
    char c;
    printf("2 sayi giriniz\n");
    scanf("%d%d",&a,&b);
    printf("islemi giriniz\n");
    scanf(" %c",&c);
    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
else if(c=='/'){
        printf("%lf",(float)a/b);
    }
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int carre(int n){
    int r = n*n;
    return r;
}
int main(){
    int x=4,c;
    c=carre(x);
    printf("%d",c);
    return 0;

}*/
/*
#include <stdio.h>
#include <stdlib.h>
void carre(int n,int *res)
{
    *res=n*n;
}
int main()
{
    int x=4;
    int r;
    carre(x,&r);
    printf("%d",r);
    return 0;
}*/

//Değişkenin değeri ile işlem
/*
#include "stdio.h"
#include "stdlib.h"
int carre(int a){
    int b=a*a;
    return b;
}
int main(){
    int x=4,c;
    c=carre(x);
    printf("%d",c);
    return 0;
}
*/
// değişkenin adresiyle işlem
/*
#include "stdio.h"
#include "stdlib.h"
void carre(int a,int *b){
    *b=a*a;

}
int main(){
    int x=4,c;
    carre(x,&c);
    printf("%d",c);
    return 0;
}
*/
/*
#include "stdio.h"
#include "stdlib.h"
void ustunu_al(int a,int b,int *k){
    int c;
    *k=1;
    for(c=0;c<b;c++){
        *k=*k*a;
    }
    
}
int main(){
    int x=4,y=5;
    int t;
    ustunu_al(x,y,&t);
    printf("4 uzeri 5 = %d",t);

}
*/
/*C preprocesor directives : bize macro atamammızı sağlıyor macro kullanarak compiler vasıtasıyla kodumuzu
dönüştürme görevi görüyor
#include #define #undef #ifdef #if #else #elif #endif #error #pragma
iki tip macro var
object like macro #define 3.14
functionlike macro  #define circleArea(r) (PI*r*r)
C de predefined macrolar var
_DATE_ current date
_FILE_ a string containing the file name
_LINE_ Am int representing the current line number
_STDC_ if follow ansi standart c, then  the value is a nonzero int
_TIME_ current time*/
/*
#include "stdio.h"
#include "stdlib.h"
#define PI 3.14
#define circleArea(r) (PI*r*r)

int main()
{
printf("File : %s\n", __FILE__);
printf("Date : %s\n", __DATE__);
printf("Time : %s\n", __TIME__);
printf("Line : %d\n", __LINE__);
printf("STDC : %d\n", __STDC__);
}
*/
/*
#include "stdio.h"
#include "stdlib.h"
#define pi 3.14
#define circlearea(r) (pi*r*r)
int main(){
    float b;
    printf("Enter a value for circle's radius\n");
    scanf("%fl",&b);
    float(a)=circlearea(b);
    printf("Circle area is %.2f",a);

}
*/
//define ile tanımlanan veriyi siler undef
/*
#include "stdio.h"
#include "stdlib.h"
#define PI 3.14
#undef PI
int main(){
    printf("%f",PI);
}
*/
/*ifdef macro = macro tanımlıysa ifdefin altındaki kodları okunur endif ile bitirilmesi lazım eğer tanım değilse 
içine #else koyasarsak ifdef e else in altındakileri okur eğer macro tanımlıysa else girmez*/
/*
#include "stdio.h"
#include "stdlib.h"
#define PI 3.14
#define varmi
int main(){
    int sayi; 
    #ifdef varmi
    sayi=2;
    #else 
    printf("enter a value");
    scanf("%d",&sayi);
    #endif
    printf("Digit Number is %d",sayi);
}
*/
/*aynı şekilde #if #else kullanılablir ama endif le kapatmayı unutmamalı*/
// er ror istemli hata vermedir harikalan bu
/*
#include "stdio.h"
#include "stdlib.h"
#define PI 3.14
#define SAYI 5
#define Power 3
#if !defined Power || Power < 2
#error Power is not defined or is less than 2
#endif
int main(){

}
*/
// devamı yeni dosyada
