#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

char department_type(char dtype);
char customer_type(char ctype);
char customer_data(char name, int mobno);
int items_data(char item, float price);
float customer_bill(char item,int price);
void bill_display();
char department_type(char dtype)
{
    char clothing,cosmetics,homeapp,sports,toys,books,food,grocery;
    char gender;
    printf("Please choose the gender(M/F/T):\n");
    scanf("%c",&gender);
    if(dtype=="clothing")
    {
        if(gender=='M')
        {
            float tshirt,shirt,pant,trousers,inners;
            tshirt=250;
            shirt=500;
            pant=600;
            trousers=250;
            inners=100;
        }
        if(gender=='F'||gemder=='T')
        {
            float chudidar,saree,legin,roughdress,inners;
            chudidar=300;
            saree=500;
            legin=400;
            roughdress=350;
            inners=150;
        }
    }
    if(dtype=="cosmetics")
    {
        float facewash,powder,cream;
        if(gender=='M')
        {
            float gel,perfume;
            facewash=150;
            powder=100;
            cream=70;
            gel=50;
            perfume=100;
        }
        if(gender=='F'||gemder=='T')
        {
            float lipstick,nailpolish,perfume;
            facewash=200;
            powder=150;
            cream=110;
            lipstick=50;
            nailpolish=40;
            perfume=110;
        }
    }
    if(dtype=="homeapp")
    {
        float toys,books,sports,electronics;
        toys=300;
        books=150;
        sports=400;
        electronics=250;
    }
    if(dtype=="grocery")
    {
        float sugar,rice,dhal,salt,oil;
        sugar=40;
        salt=30;
        rice=50;
        dhal=60;

    }
}
char customer_type(char ctype)
{
    if(ctype=="silver")
    {
        /* 2% deduction*/
    }
    if(ctype=="gold")
    {
        /* 5% deduction*/
    }
    if(ctype=="platinum")
    {
        /* 10% deduction*/
    }
}
char customer_data(char name, int mobno)
{
    char arr[1000]={""}
    
}



