#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
    karsilama_metni();
    
	int telnumara=0;
	int suturunlerifiyatlari[4]={12,75,100,5};
	int digerurunfiyatlari[5]={80,50,60,90,60};
	int suturunleri;
	int digerurunler;
	int toplamfiyat;
	int urunler;
	int urun;
	int menu; 
	int kg;
	
	while(1)
	{
	
	printf("sut urunlerini gormek icin 0'i tuslayiniz,\ndigerurunleri gormek icin 1'i tuslayiniz.\n");
	scanf("%d",&menu);
	
	if(menu>=2)
			{
				printf("Yanlis urun kodu girdiniz lutfen tekrar deneyiniz.\n");
				continue;			
			}

	if(menu==0)
	{	
		printf("sut urunleri menusu \n1-yogurt.....0.....12 tl\n2-tarhana.....1.....75 tl\n3-peynir.....2.....100 tl\n4-sut.....3.....5 tl \nalmak istediginiz urunu seciniz\n");
	    scanf("%d",&suturunleri);
	    
	    
	    if(suturunleri>=4)
			{
				printf("Yanlis urun kodu girdiniz lutfen tekrar deneyiniz.\n");
				continue;			
			}
	     
	    	if (suturunleri==0)
			{
			
			    printf("kac kg urun almak istersiniz?\n");
				scanf("%d",&kg); }  
			else if (suturunleri==1)
			{
			
			    printf("kac kg urun almak istersiniz?\n");
				scanf("%d",&kg); }  
			else if (suturunleri==2)
			{
			    printf("kac kg urun almak istersiniz?\n");
				scanf("%d",&kg); }  			
			else if (suturunleri==3)	
			{
			    printf("kac kg urun almak istersiniz?\n");
				scanf("%d",&kg); }  		
					
			toplamfiyat=hesapcarpim1( kg, suturunlerifiyatlari[suturunleri] );
	}
			
	else if(menu==1)
	    {
		printf("diger urunler menusu \n1-pekmez.....0.....80 tl\n2-zeytinyagi.....1.....50 tl\n3-eksi.....2.....60 tl\n4-tavuk.....3.....90 tl\n5-sumak eksisi.....4.....60 tl \nalmak istediginiz urunu seciniz.\n");
	    scanf("%d",&digerurunler);
		
		if(digerurunler>=5)
			{
				printf("Yanlis urun kodu girdiniz lutfen tekrar deneyiniz.\n");
				continue;			
			}
		
			if (digerurunler==0)
			{
				toplamfiyat+=digerurunfiyatlari[digerurunler];
				printf("kac kg urun almak istersiniz?\n");
				scanf("%d",&kg); }  			
			else if (digerurunler==1)
			{
				toplamfiyat+=digerurunfiyatlari[digerurunler];
				printf("kac kg urun almak istersiniz?\n");
				scanf("%d",&kg); }  			
			else if (digerurunler==2)
			{
				toplamfiyat+=digerurunfiyatlari[digerurunler];
				printf("kac kg urun almak istersiniz?\n");
				scanf("%d",&kg); }  			
			else if (digerurunler==3)			
				{
				toplamfiyat+=digerurunfiyatlari[digerurunler];
				printf("kac kg urun almak istersiniz?\n");
				scanf("%d",&kg); }  				
				toplamfiyat=hesapcarpim2( kg, digerurunfiyatlari[digerurunler] );	
		}
	char kelime1[50];

	printf("lutfen telefon numarasi giriniz.\n");
	scanf("%d",&telnumara);
	
	printf("lutfen adres giriniz.\n");
	gets(kelime1);
	gets(kelime1);
	
	char yazi;
	
	printf("siparisiniz %d tl tutmustur. \n",toplamfiyat);
	printf("sayin musterimiz %s adresine siparisiniz gonderilecektir.\nbizi tercih ettiginiz icin tesekkur ederiz. \n",kelime1);
	
	printf("tekrar  siparis vermek ister misiniz?(E)(H)\n");
	scanf("%c",&yazi);
	if(yazi=='E')
		continue;
	else if(yazi=='H')
		printf("iyi gunler yine bekleriz.\n");
		break;
		
						
	
	}
	
	return 0;
}

void karsilama_metni()
{
	char ad[25];
	printf("Tukkanimiza Hosgeldiniz,Lutfen isminizi giriniz.\n");
	gets(ad);

}

int hesapcarpim1(int kg , int suturunlerifiyatlari)
{
	int hesap1;
	
	hesap1= kg * suturunlerifiyatlari;
	
	return hesap1;

}
int hesapcarpim2(int kg , int digerurunfiyatlari)
{
	int hesap2;
	
	hesap2= kg * digerurunfiyatlari;
	
	return hesap2;

}















