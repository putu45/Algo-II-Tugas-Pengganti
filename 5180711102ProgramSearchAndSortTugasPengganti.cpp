#include <iostream>
using namespace :: std;
main()
{
    int jumlah,jml[10],j,tot=0,h,harga[10],ketemu,totd;\
    int tmp;
    string nama,member;
    string nama1[5]{"Bayu","Irvan","Susanti","Diana","Roni"};
    string nomor[5]{"A001","A002","A003","A007","A008"};
    string id;

    cout<<"PROGRAM KASIR";
    cout<<"\n\nApakah Anda Member?";
    cin>>member;
    if(member=="ya")
    {
        cout<<"\nMasukan Id:";
        cin>>id;
        ketemu=0;
        for(int i=0;i<5;i++)
        {
            if(id == nomor[i])
            {
                ketemu=1;
                cout<<"Nama Member:"<<nama1[i];
            }
        }
        cout<<"\nMasukan Jumlah Barang Yang DiBeli:";
        cin>>jumlah;
        for(int i=1;i<=jumlah;i++)
        {
            cout<<"\nMasukan Harga Barang:Rp.";
            cin>>harga[i];
            cout<<"\nMasukan Jumlah:";
            cin>>jml[i];
            j=jml[i]*harga[i];
            tot=tot+j;
        }
        cout<<"Total:Rp."<<tot;
        cout<<"\nAnda Mendapatkan Diskon 5%";
        totd=tot-(tot*0.05);
        cout<<"\nTotal Setelah Diskon:Rp."<<totd;
        for(int i=1;i<=jumlah;++i)
        {
            for(int j=1;j<=(jumlah-i);++j)
                if(harga[j]>harga[j+1])
                {
                    tmp=harga[j];
                    harga[j]=harga[j+1];
                    harga[j+1]=tmp;
                }
        }
        cout<<"\nHarga Diurutkan Dari termurah-termahal:";
        for(int i=1;i<=jumlah;i++)
        cout<<"\nRp."<<harga[i]<<endl;
        cout<<"\nNomor Identitas:"<<id;
        cout<<"\nJumlah Belanjaan:"<<jumlah;
        cout<<"\nTotal Harga Sebelum Di Diskon:Rp."<<tot;
        cout<<"\nTotal Harga Di Diskon:Rp."<<totd;


    }
    else if(member=="bukan")
    {
        cout<<"\nMasukan Nama:";
        cin>>nama;
        cout<<"\nMasukan Jumlah Barang:";
        cin>>jumlah;
        for(int i=1;i<=jumlah;i++)
        {
            cout<<"\nMasukan Harga Barang ke-"<<i<<":"<<"Rp.";
            cin>>harga[i];
            cout<<"\nMasukan Jumlah ke-"<<i<<":";
            cin>>jml[i];
            j=jml[i]*harga[i];
            tot=tot+j;
        }
         cout<<"Total:Rp."<<tot;
         cout<<"\nAnda Mendapatkan Diskon 5%";
        totd=tot-(tot*0.05);
        cout<<"\nTotal Setelah Diskon:Rp."<<totd;
        for(int i=1;i<=jumlah;++i)
        {
            for(int j=1;j<=(jumlah-i);++j)
                if(harga[j]>harga[j+1])
                {
                    tmp=harga[j];
                    harga[j]=harga[j+1];
                    harga[j+1]=tmp;
                }
        }
        cout<<"\nHarga Diurutkan Dari termurah-termahal:";
        for(int i=1;i<=jumlah;i++)
        cout<<"\nRp."<<harga[i]<<endl;
        cout<<"\nNama:"<<nama;
        cout<<"\nJumlah Belanjaan:"<<jumlah;
        cout<<"\nTotal Harga Sebelum Di Diskon:Rp."<<tot;
        cout<<"\nTotal Harga Di Diskon:Rp."<<totd;

    }

}
