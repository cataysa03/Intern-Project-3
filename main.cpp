#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

int main( ) {
 vector<string> words={
 "ankara","bilgisayar","muhendislik","ogrenci","universite",
"algoritma","programlama","istanbul","kutuphane","matematik",
   "kamera","lens","yazilim","gelistirme","veritabani",
 "postgresql","dosya","hafiza","degisken","fonksiyon",
     "dongu","vektor","oyun","bulmaca" };

 srand(time(0));
  string secret= words[ rand() % words.size() ];

 const int MAX_WRONG=6;
int wrong=0;   string shown(secret.size(),'_');
string tried="";

   vector<string> hang={
"  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========\n",
 "  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========\n",
   "  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========\n",
"  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========\n",
  "  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========\n",
 "  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========\n",
   "  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========\n"  };

cout<<"=== Hangman ===\n";
   cout<<"Sadece tek harf gir. Kelime kücuk harflerden olusur.\n\n";

while(true)
{
cout<<hang[wrong]<<endl;
   cout<<"Kelime: ";
    for(char c:shown) cout<<c<<' ';
cout<<"\nYanlis: "<<wrong<<"/"<<MAX_WRONG<<endl;
cout<<"Denenenler: "<<tried<<endl;

cout<<"Harf: ";
string in;
getline(cin,in);

 if(in.empty())
     continue;

 char g=tolower((unsigned char)in[0]);

  if(!isalpha((unsigned char)g)) {
 cout<<"Lutfen bir harf gir.\n\n";  continue; }

if(tried.find(g)!=string::npos)
 { cout<<"Bu harfi zaten denedin.\n\n";   continue; }

tried.push_back(g);

 bool hit=false;
for(size_t i=0;i<secret.size();++i)
   if(secret[i]==g){ shown[i]=g; hit=true; }

 if(!hit) wrong++;

if(shown==secret) {
 cout<<"\nTebrikler Kelime: "<<secret<<endl;
 break; }

   if(wrong>=MAX_WRONG){
cout<<hang[wrong]<<"\n";
    cout<<"Oyun bitti Kelime: "<<secret<<endl;
    break; }

  cout<<"\n";
}
  return 0;
}
