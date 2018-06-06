#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>


#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))


#define PAGE_UP     73
#define HOME        71
#define END         79
#define PAGE_DOWN   81
#define UP_ARROW    21
#define LEFT_ARROW  22
#define DOWN_ARROW  23
#define RIGHT_ARROW 24
#define F1          59
#define F2          60
#define F3          61
#define F4          62
#define F5          63
#define F6          64
#define F7          65
#define F8          66
#define F9          67
#define F10         68




int main()
{
    
    setlocale(LC_ALL, "Turkish");
    system("color F0");
	int okunan;
    
	
	
	
	
	
	
	
	int a=0;
	int k=1;
	int l=1;
	for (a=0;a<=56;a++){
		
		printf(" ");
		
	}
	printf("NOTEPAD\n");
    
    
    
    printf("F1: YENÝ");
    
    for (a=0;a<=29;a++){
		
		printf(" ");
		
	}
    
    printf("F2: AÇ");
    
    for (a=0;a<=29;a++){
		
		printf(" ");
		
	}
    
    printf("F3: KAYDET");
    
    for (a=0;a<=26;a++){
		
		printf(" ");
		
	}
    
    printf("F4: ÇIKIÞ\n");
    for (a=0;a<120;a++){
		
		printf("_");
		
	}
    
    printf("\n\nBir tuþa basýnýz...");
    
    okunan=getch();
    if (okunan !=NULL) {	
        system("CLS");
    }
    
    
	system("color F0");
    
    
	FILE *dosya;
	
	
	
	
	
	
	 
	
    char dizi[999999];
   	int i=0;
    int j=0;
   
   
   
   
   
   
   
   
   
    while(1) {
	
	
	
	if (l==120) {
		k++;
		
		l=0;
		
	}
	
	/*if (l<0) {
		
		l=120;
		k--;
		
	}*/
	
	
	
    okunan=getch();
//SAYILAR
    if (okunan==48) {	
        printf("0");
        dizi[i]=0;
        i++;
        l++;
    }

    if (okunan==49) {	
        printf("1");
        dizi[i]=1;
        i++;
        l++;
    }

    if (okunan==50) {	
        printf("2");
        dizi[i]=2;
        i++;
        l++;
    }

    if (okunan==51) {	
        printf("3");
        dizi[i]=3;
        i++;
        l++;
    }

    if (okunan==52) {	
        printf("4");
        dizi[i]=4;
        i++;
        l++;
    }

    if (okunan==53) {	
        printf("5");
        dizi[i]=5;
        i++;
        l++;
    }

    if (okunan==54) {	
        printf("6");
        dizi[i]=6;
        i++;
        l++;
    }

    if (okunan==55) {	
        printf("7");
        dizi[i]=7;
        i++;
        l++;
    }

    if (okunan==56) {	
        printf("8");
        dizi[i]=8;
        i++;
        l++;
    }

    if (okunan==57) {	
        printf("9");
        dizi[i]=9;
        i++;
        l++;
    }









//KUCUK HARFLER
    if (okunan==113) {	
        printf("q");
        dizi[i]='q';
        i++;
        l++;
    }

    if (okunan=='w') {
        printf("w");
        dizi[i]='w';
        i++;
        l++;
    }

    if (okunan=='e') {
        printf("e");
        dizi[i]='e';
        i++;
        l++;
    }

    if (okunan=='r') {
        printf("r");
        dizi[i]='r';
        i++;
        l++;
    }

    if (okunan=='t') {
        printf("t");
        dizi[i]='t';
        i++;
        l++;
    }

    if (okunan=='y') {
        printf("y");
        dizi[i]='y';
        i++;
        l++;
    }
    
     if (okunan=='u') {
        printf("u");
        dizi[i]='u';
        i++;
        l++;
    }   
    
        
         if (okunan=='i') {
        printf("i");
        dizi[i]='i';
        i++;
        l++;
    }   

    
    if (okunan=='o') {
        printf("o");
        dizi[i]='o';
        i++;
        l++;
    }    
    
    if (okunan=='p') {
        printf("p");
        dizi[i]='p';
        i++;
        l++;
    }    
    
     if (okunan=='a') {
        printf("a");
        dizi[i]='a';
        i++;
        l++;
    }   
    
         if (okunan=='s') {
        printf("s");
        dizi[i]='s';
        i++;
        l++;
    }   
    
         if (okunan=='d') {
        printf("d");
        dizi[i]='d';
        i++;
        l++;
    }   
    
         if (okunan=='f') {
        printf("f");
        dizi[i]='f';
        i++;
        l++;
    }   
    
         if (okunan=='g') {
        printf("g");
        dizi[i]='g';
        i++;
        l++;
    }   
    
         if (okunan=='h') {
        printf("h");
        dizi[i]='h';
        i++;
        l++;
    }   
    
         if (okunan=='j') {
        printf("j");
        dizi[i]='j';
        i++;
        l++;
    }   
    
         if (okunan=='k') {
        printf("k");
        dizi[i]='k';
        i++;
        l++;
    }   
    
         if (okunan=='l') {
        printf("l");
        dizi[i]='l';
        i++;
        l++;
    }   
    
         if (okunan=='z') {
        printf("z");
        dizi[i]='z';
        i++;
        l++;
    }   
    
         if (okunan=='x') {
        printf("x");
        dizi[i]='x';
        i++;
        l++;
    }   
    
         if (okunan=='c') {
        printf("c");
        dizi[i]='c';
        i++;
        l++;
    }   
    
         if (okunan=='v') {
        printf("v");
        dizi[i]='v';
        i++;
        l++;
    }   
    
         if (okunan=='b') {
        printf("b");
        dizi[i]='b';
        i++;
        l++;
    }   
    
         if (okunan=='n') {
        printf("n");
        dizi[i]='n';
        i++;
        l++;
    }   
    
         if (okunan=='m') {
        printf("m");
        dizi[i]='m';
        i++;
        l++;
    }   
    
//BUYUK HARFLER
	
	
	    if (okunan=='Q') {
    	printf("Q");
    	dizi[i]='Q';
        i++;
        l++;
    }

    if (okunan=='W') {
        printf("W");
        dizi[i]='W';
        i++;
        l++;
    }

    if (okunan=='E') {
        printf("E");
        dizi[i]='E';
        i++;
        l++;
    }
    
    

    if (okunan=='R') {
        printf("R");
        dizi[i]='R';
        i++;
        l++;
    }

    if (okunan=='T') {
        printf("T");
        dizi[i]='T';
        i++;
        l++;
    }

    if (okunan=='Y') {
        printf("Y");
        dizi[i]='Y';
        i++;
        l++;
    }
    
     if (okunan=='U') {
        printf("U");
        dizi[i]='U';
        i++;
        l++;
    }   
    
        
         if (okunan=='I') {
        printf("I");
        dizi[i]='I';
        i++;
        l++;
    }   

    
    if (okunan=='O') {
        printf("O");
        dizi[i]='O';
        i++;
        l++;
    }    
    
    if (okunan=='P') {
        printf("P");
        dizi[i]='P';
        i++;
        l++;
    }    
    
     if (okunan=='A') {
        printf("A");
        dizi[i]='A';
        i++;
        l++;
    }   
    
         if (okunan=='S') {
        printf("S");
        dizi[i]='S';
        i++;
        l++;
    }   
    
         if (okunan=='D') {
        printf("D");
        dizi[i]='D';
        i++;
        l++;
    }   
    
         if (okunan=='F') {
        printf("F");
        dizi[i]='F';
        i++;
        l++;
    }   
    
         if (okunan=='G') {
        printf("G");
        dizi[i]='G';
        i++;
        l++;
    }   
    
         if (okunan=='H') {
        printf("H");
        dizi[i]='H';
        i++;
        l++;
    }   
    
         if (okunan=='J') {
        printf("J");
        dizi[i]='J';
        i++;
        l++;
    }   
    
         if (okunan=='K') {
        printf("K");
        dizi[i]='K';
        i++;
        l++;
    }   
    
         if (okunan=='L') {
        printf("L");
        dizi[i]='L';
        i++;
        l++;
    }   
    
         if (okunan=='Z') {
        printf("Z");
        dizi[i]='Z';
        i++;
        l++;
    }   
    
         if (okunan=='X') {
        printf("X");
        dizi[i]='X';
        i++;
        l++;
    }   
    
         if (okunan=='C') {
        printf("C");
        dizi[i]='C';
        i++;
        l++;
    }   
    
         if (okunan=='V') {
        printf("V");
        dizi[i]='V';
        i++;
        l++;
    }   
    
         if (okunan=='B') {
        printf("B");
        dizi[i]='B';
        i++;
        l++;
    }   
    
         if (okunan=='N') {
        printf("N");
        dizi[i]='N';
        i++;
        l++;
    }   
    
         if (okunan=='M') {
        printf("M");
        dizi[i]='M';
        i++;
        l++;
    }   
    
    
    
    //TURKCE KARAKTERLER
         if (okunan==167) {
        printf("ð");
        dizi[i]='ð';
        i++;
        l++;
    }   
    
         if (okunan==129) {
        printf("ü");
        dizi[i]='ü';
        i++;
        l++;
    }   
    
         if (okunan==154) {
        printf("Ü");
        dizi[i]='Ü';
        i++;
        l++;
    }   
    
         if (okunan==159) {
        printf("þ");
        dizi[i]='þ';
        i++;
        l++;
    }   
    
         if (okunan==158) {
        printf("Þ");
        dizi[i]='Þ';
        i++;
        l++;
    }   
    
         if (okunan==152) {
        printf("Ý");
        dizi[i]='Ý';
        i++;
        l++;
    }   
    
         if (okunan==148) {
        printf("ö");
        dizi[i]='ö';
        i++;
        l++;
    }   
    
         if (okunan==153) {
        printf("Ö");
        dizi[i]='Ö';
        i++;
        l++;
    }   
    
         if (okunan==135) {
        printf("ç");
        dizi[i]='ç';
        i++;
        l++;
    }   
    
         if (okunan==128) {
        printf("Ç");
        dizi[i]='Ç';
        i++;
        l++;
    }   
    
         if (okunan==166) {
        printf("Ð");
        dizi[i]='Ð';
        i++;
        l++;
    }   
    
    if (okunan==141) {	
        printf("ý");
        dizi[i]='ý';
        i++;
        l++;
    }







	
         if (okunan==32) {
        printf(" ");
        dizi[i]=' ';
        i++;
        l++;
    }   
        
         if (okunan==13) {
        printf("\n");
        dizi[i]='\n';
        i++;
        l++;
    }   
        
    
    
             if (okunan==8) {
        printf("\b ");
        printf("\b");
        dizi[i]=' ';
        dizi[i-1]=' ';
        i--;
        l--;
    }   
         
    
    
    
    
    
    //KARAKTERLER
    if (okunan==33) {	
        printf("!");
        dizi[i]='!';
        i++;
        l++;
    }

        if (okunan==40) {	
        printf("(");
        dizi[i]='(';
        i++;
        l++;
    }
        if (okunan==41) {	
        printf(")");
        dizi[i]=')';
        i++;
        l++;
    }

    if (okunan==42) {	
        printf("*");
        dizi[i]='*';
        i++;
        l++;
    }
    if (okunan==43) {	
        printf("+");
        dizi[i]='+';
        i++;
        l++;
    }

    if (okunan==44) {	
        printf(",");
        dizi[i]=',';
        i++;
        l++;
    }
    if (okunan==45) {	
        printf("-");
        dizi[i]='-';
        i++;
        l++;
    }
    if (okunan==46) {	
        printf(".");
        dizi[i]='.';
        i++;
        l++;
    }
    if (okunan==47) {	
        printf("/");
        dizi[i]='/';
        i++;
        l++;
    }

	
		
		
		
		
		
		
	

	

	

	
	


//YENI METIN BELGESI //F1

	
	    if (okunan==59) {	
        
		
		system("CLS");
		
    }

//ACMA		//F2


    if (okunan==60) {	
        
		
		system("CLS");
		dosya = fopen("metin.txt", "r");
		char c;
		i=0;
		l=0;
		while ((c = fgetc(dosya)) != EOF) {
		printf("%c", c);
		dizi[i]=c;
		i++;
		l++;
		
	}

		
        fclose(dosya);
    }





//KAYDETME   //F3
    if (okunan==61) {	
        dosya = fopen("metin.txt", "w");
		
		
		for(j=0;j<=i;j++){
        	fputc(dizi[j], dosya);

        	
        	
		}
        
        fclose(dosya);
    }


//CIKIS //F4

if (okunan==62) {	
        
		
		exit(0);
		
    }

//SOLA //F5
if (okunan==63) {	
        
		if (l==0) {
			
			l=120;
			k--;
		}
		
		
		gotoxy(k, l-1);
		
		i--;
		l--;

		
		
		
		
		
    }    
    
    
//SAÐA //F6    
if (okunan==64) {	
        
		
		gotoxy(k, l+1);
		i++;
		l++;
		
		
    }     
    
     
    
    
    


}
    return 0;
}

