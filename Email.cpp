#include<iostream>
#include<string.h>
#include<conio.h>

Using namespace std;

Class Email{
  protected:
  string IsiPesan;
  string Pengirim;
  
  public:
  Email(string IsiPesan, string Pengirim){
  this->IsiPesan = IsiPesan;
  this->Pengirim = Pengirim;
   }
};
class Gmail : public Email
  private:
  string AlamatEmail;
  public:
  Gmail(string IsiPesan, string AlamatEmail):Gmail(IsiPesan, 0){
  this->AlamatEmail= AlamatEmail;
  this->Pengirim = Pengirim;
