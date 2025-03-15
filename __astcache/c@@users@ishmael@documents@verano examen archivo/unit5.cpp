//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <fstream>
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
bool EsNum(char c){
return (c>='0')and(c<='9');
}

bool EsLetra(char x){
 AnsiString cad="ASDFGHJKLÑZXCVBNMQWERTYUIOPasdfghjklzxcvbnmñqwertyuiopáéíóúÁÉÍÚÓüÜ";
 return cad.Pos(x)>0;
 }


//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{  AnsiString nomArch; AnsiString nomSal="salida.txt";
   Cardinal c=0; Cardinal l=0; char car=0; bool sw=false;
   fstream f(nomArch.c_str(),ios::in|ios::binary);
   fstream t(nomSal.c_str(),ios::out|ios::binary);
   if (!f.fail()) {
	   while (!f.eof()) {
		car=f.get();
		if (!f.eof()) {
			if (EsNum(car)) {
				if (!sw) {
					 c++; sw=true;
				}
			}  else
			sw=false;
			if (EsLetra(car)) {
			   l++;
			}
			if (car==10) {
			   l=0; c=0;
			}
			t.put(c);
		}
	   }
	   f.close() ;
	   t.close();

}
}
//---------------------------------------------------------------------------
