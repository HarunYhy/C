#include <stdio.h>

void main()
{
   
   for (int i = 49; i <= 126; i++) 
      if (i % 16 != 0)
         printf("%c", i);
      else
         printf("\n%c", i);
   // 1'den '~' karakterine kadar olan tüm ascii tablosunu yazdırır

   // ya da
   for (int i = 0; i <= 255; i++)
      if (i % 16 != 0)
         printf("%c", i);
      else
         printf("\n%c", i);
   // tüm ascii tablosunu yazdırır

   /* 
   Tam ASCII ve Genişletilmiş ASCII Tablosu

      ASCII Değeri	   Karakter / Açıklama	               Grup Tanımı
      0 - 31	         \0, \n, \t, \r vb.	               Kontrol Karakterleri (Yazdırılamaz)
      32	               (Boşluk / Space)	                  Görünmez karakterlerin ilki
      33 - 47	         ! " # $ % & ' ( ) * + , - . /	      Semboller ve İşaretler 1
      48 - 57	         0 1 2 3 4 5 6 7 8 9	               Rakamlar
      58 - 64	         : ; < = > ? @	                     Semboller ve İşaretler 2
      65 - 90	         A B C ... Z	                        Büyük Harfler
      91 - 96	         [ \ ] ^ _ `	                        Semboller ve İşaretler 3
      97 - 122	         a b c ... z	                        Küçük Harfler
      123 - 126	      { | } ~	                           Matematiksel / Teknik Semboller
      127	DEL         (Silme)	                           Kontrol Karakteri
      128 - 154	      Ç ü é â ä à å ç ê ë è vb.	         Aksanlı Harfler ve Avrupa Karakterleri
      155 - 159	      ø £ Ø × ƒ	                        Para ve Matematik Birimleri
      160 - 175	      á í ó ú ñ Ñ ª º ¿ ® ¬ ½ ¼ ¡ « »	   İspanyolca/Özel Semboller
      176 - 223	      ░ ▒ ▓ │ ┤ ╡ ╢ ╖ ╕ ╣ ║ ╗ vb. 	      Kutu ve Çerçeve Çizim Karakterleri
      224 - 254	      α ß Γ π Σ σ µ τ Φ Θ Ω δ vb.   	   Matematiksel ve Yunan Alfabesi Sembolleri
      255	            (Boşluk / Sert Boşluk)	            Görünmez karakter (Alt+255)
      */
}