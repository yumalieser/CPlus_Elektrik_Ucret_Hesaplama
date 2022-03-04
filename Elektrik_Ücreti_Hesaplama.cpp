#include <iostream>

using namespace std;

int main() {

    int tarife;
    float kdv,e_fonu,etv,trt_payi;
    float t_harcama,gunduz_tuketim,puant_tuketim,gece_tuketim;
    float gunduz_tutar,puant_tutar,gece_tutar,t_tutar;

    cout<<"**************************************************"<<endl;
    cout<<"Elektrik Faturasi Hesaplama Sistemine Hosgeldiniz"<<endl; 
    cout<<"**************************************************"<<endl;
    
    cout<<"\n1. Tek Zamanli Fatura \n2. Uc Zamanli Fatura \n"<<endl;
    cout<<"Elektrik tarifesini seciniz: ";

    cin>>tarife;
          
    if (tarife == 1)
    {
        cout<<"Gun Boyunca Harcanan Elektrik Miktarini Kwh cinsinden giriniz :";
        cin>>t_harcama;
        t_tutar = t_harcama * 0.51;
        cout<<"Faturanizin Vergiler Haric Tuketim Ucreti : "<<t_tutar<<" TL' dir."<<endl;

        kdv = t_tutar*0.18;
        etv = t_tutar*0.02;
        trt_payi = t_tutar*0.01;
        e_fonu = t_tutar*0.11;

        cout<<"\nKDV Ucreti : "<<kdv<<" TL' dir."<<endl;
        cout<<"\nETV Ucreti : "<<etv<<" TL' dir."<<endl;
        cout<<"\nTRT PAYI Ucreti : "<<trt_payi<<" TL' dir."<<endl;
        cout<<"\nENERJI FONU Ucreti : "<<e_fonu<<" TL' dir."<<endl;
        t_tutar = t_tutar + kdv + etv + trt_payi + e_fonu;

        cout<<"\nFaturanizin Vergiler Dahil Toplam Tuketim Ucreti : "<<t_tutar<<" TL' dir."<<endl;
    }
        
    else if (tarife == 2)
    {
        cout<<"Sabah Diliminde Harcanan Elektrik Miktarini Kwh cinsinden giriniz :";
        cin>>gunduz_tuketim;
    
        cout<<"Oglen Diliminde Harcanan Elektrik Miktarini Kwh cinsinden giriniz :";
        cin>>puant_tuketim;

        cout<<"Aksam Diliminde Harcanan Elektrik Miktarini Kwh cinsinden giriniz :";
        cin>>gece_tuketim;

        gunduz_tutar = gunduz_tuketim * 0.53;
        puant_tutar = puant_tuketim * 0.78;
        gece_tutar = gece_tuketim * 0.33 ;
        t_tutar = gunduz_tutar + puant_tutar + gece_tutar;
        cout<<"Faturanizin Vergiler Haric Tuketim Ucreti : "<<t_tutar<<" TL' dir."<<endl;

        kdv = t_tutar*0.18;
        etv = t_tutar*0.02;
        trt_payi = t_tutar*0.01;
        e_fonu = t_tutar*0.11;

        cout<<"\nKDV Ucreti : "<<kdv<<" TL' dir."<<endl;
        cout<<"\nETV Ucreti : "<<etv<<" TL' dir."<<endl;
        cout<<"\nTRT PAYI Ucreti : "<<trt_payi<<" TL' dir."<<endl;
        cout<<"\nENERJI FONU Ucreti : "<<e_fonu<<" TL' dir."<<endl;
        t_tutar = t_tutar + kdv + etv + trt_payi + e_fonu;

        cout<<"\nFaturanizin Vergiler Dahil Toplam Tuketim Ucreti : "<<t_tutar<<" TL' dir."<<endl;
    }
    else
    {
        cout<<"Gecersiz Bir Giris Yaptiniz Tekrar Deneyin...";
    }
    return 0;
}