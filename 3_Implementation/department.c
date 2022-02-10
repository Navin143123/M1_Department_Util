#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char department_type(char dtype);
char customer_data(char name, int mobno,char gender);
struct billing{
float bill;
};
int department_type(int dtypeno[],char gender,int n)
{
    for(int i=0;i<n;i++){
    if(dtypeno[i]==1)
    {
        if(gender=='M')
        {
            int n1;
            float tshirt,shirt,pant,trousers,inners;
            tshirt=250;
            shirt=500;
            pant=600;
            trousers=250;
            inners=100;
            printf("Enter 1-tshirt\n2-shirt\n3-pant\n4-trousers\n5-inners");
            printf("Enter number of items you decided to buy\n");
            scanf("%d",&n1);
            int mcloth[n1],q[n1];
            for(int i=0;i<n1;i++)
            {
                printf("Please choose the itemno of which item you like to buy\n");
                scanf("%d\n",&mcloth[i]);
                printf("Enter the quantity for item:\n");
                scanf("%d\n",&q[i]);
                if(mcloth[i]==1)
                {
                    bill=bill+tshirt*q[i];
                }
                if(mcloth[i]==2)
                {
                    bill=bill+shirt*q[i];
                }
                if(mcloth[i]==3)
                {
                    bill=bill+pant*q[i];
                }
                if(mcloth[i]==4)
                {
                    bill=bill+trousers*q[i];
                }
                if(mcloth[i]==5)
                {
                    bill=bill+inners*q[i];
                }
            }
            
        }
        if(gender=='F'||gender=='T')
        {
            float chudidar,saree,legin,roughdress,inners;
            int n2;
            chudidar=300;
            saree=500;
            legin=400;
            roughdress=350;
            inners=150;
            printf("Enter 1-chudidar\n2-saree\n3-legin\n4-roughdress\n5-inners");
            printf("Enter number of items you decided to buy\n");
            scanf("%d",&n2);
            int fcloth[n2],q1[n2];
            for(int i=0;i<n2;i++)
            {
                printf("Please choose the itemno of which item you like to buy\n");
                scanf("%d\n",&fcloth[i]);
                printf("Enter the quantity for item:\n");
                scanf("%d\n",&q1[i]);
                if(fcloth[i]==1)
                {
                    bill=bill+chudidar*q1[i];
                }
                if(fcloth[i]==2)
                {
                    bill=bil+saree*q1[i];
                }
                if(fcloth[i]==3)
                {
                    bill=bill+legin*q1[i];
                }
                if(fcloth[i]==4)
                {
                    bill=bill+roughdress*q1[i];
                }
                if(fcloth[i]==5)
                {
                    bill=bill+inners*q1[i];
                }
            }
        }
    }
    if(dtypeno[i]==2)
    {
        float facewash,powder,cream,gel,perfume;
        if(gender=='M')
        {
            float gel,perfume;
            int n3;
            facewash=150;
            powder=100;
            cream=70;
            gel=50;
            perfume=100;
            printf("Enter 1-facewash\n2-powder\n3-cream\n4-gel\n5-perfume");
            printf("Enter number of items you decided to buy\n");
            scanf("%d",&n3);
            int mcos[n3],q2[n3];
            for(int i=0;i<n3;i++)
            {
                printf("Please choose the itemno of which item you like to buy\n");
                scanf("%d\n",&mcos[i]);
                printf("Enter the quantity for item:\n");
                scanf("%d\n",&q2[i]);
                if(mcos[i]==1)
                {
                    bill=bill+facewash*q2[i];
                }
                if(mcos[i]==2)
                {
                    bill=bil+powder*q2[i];
                }
                if(mcos[i]==3)
                {
                    bill=bill+cream*q2[i];
                }
                if(mcos[i]==4)
                {
                    bill=bill+gel*q2[i];
                }
                if(mcos[i]==5)
                {
                    bill=bill+perfume*q2[i];
                }
            }
        }
        if(gender=='F'||gender=='T')
        {
            float lipstick;
            int n4;
            facewash=200;
            powder=150;
            cream=110;
            lipstick=50;
            perfume=110;
            printf("Enter 1-facewash\n2-powder\n3-cream\n4-lipstick\n5-perfume");
            printf("Enter number of items you decided to buy\n");
            scanf("%d",&n4);
            int fcos[n4],q3[n4];
            for(int i=0;i<n2;i++)
            {
                printf("Please choose the itemno of which item you like to buy\n");
                scanf("%d\n",&fcos[i]);
                printf("Enter the quantity for item:\n");
                scanf("%d\n",&q3[i]);
                if(fcos[i]==1)
                {
                    bill=bill+facewash*q3[i];
                }
                if(fcos[i]==2)
                {
                    bill=bil+powder*q3[i];
                }
                if(fcos[i]==3)
                {
                    bill=bill+cream*q3[i];
                }
                if(fcos[i]==4)
                {
                    bill=bill+lipstick*q3[i];
                }
                if(fcos[i]==5)
                {
                    bill=bill+perfume*q3[i];
                }
            }
        }
    }
    if(dtypeno[i]==3)
    {
        float toys,books,sports,electronics;
        toys=300;
        books=150;
        sports=400;
        electronics=250;
        printf("Enter 1-toys\n2-books\n3-sports\n4-electronics\n");
            printf("Enter number of items you decided to buy\n");
            scanf("%d",&n5);
            int happ[n5],q4[n5];
            for(int i=0;i<n5;i++)
            {
                printf("Please choose the itemno of which item you like to buy\n");
                scanf("%d\n",&happ[i]);
                printf("Enter the quantity for item:\n");
                scanf("%d\n",&q4[i]);
                if(happ[i]==1)
                {
                    bill=bill+toys*q4[i];
                }
                if(happ[i]==2)
                {
                    bill=bil+books*q4[i];
                }
                if(happ[i]==3)
                {
                    bill=bill+sports*q4[i];
                }
                if(happ[i]==4)
                {
                    bill=bill+electronics*q4[i];
                }
            }
    }
    if(dtypeno[i]==4)
    {
        float sugar,rice,dhal,salt,oil;
        sugar=40;
        salt=30;
        rice=50;
        dhal=60;
        printf("Enter 1-sugar\n2-rice\n3-dhal\n4-salt\n5-oil");
            printf("Enter number of items you decided to buy\n");
            scanf("%d",&n6);
            int grcy[n6],q5[n6];
            for(int i=0;i<n6;i++)
            {
                printf("Please choose the itemno of which item you like to buy\n");
                scanf("%d\n",&grcy[i]);
                printf("Enter the quantity for item:\n");
                scanf("%d\n",&q5[i]);
                if(grcy[i]==1)
                {
                    bill=bill+sugar*q5[i];
                }
                if(grcy[i]==2)
                {
                    bill=bil+rice*q5[i];
                }
                if(grcy[i]==3)
                {
                    bill=bill+dhal*q5[i];
                }
                if(grcy[i]==4)
                {
                    bill=bill+salt*q5[i];
                }
                if(grcy[i]==5)
                {
                    bill=bill+oil*q5[i];
                }
            }

    }
    }
    return bill;
}
char customer_data(char name, int mobno,char gender)
{
    if(gender=='M'){
    char mname[10]={"Jagdish","Mukesh","Satesh","Karthick","Sanjay"};
    int  mmobno[10]={9748777348,7877598437,78998032110,9365668083,9748980976};
    if(name==mname||mobno==mmobno)
    {
        return "Existing customer"
    }
    else{
        return "New customer";
    }
    }
    if(gender=='F'|| gender=='T')
    {
    char fname[10]={"Sharu","Monisha","Swathi","Lakshmi","Saraswathi"};
    int fmobno[10]={9545554516,7885363457,9853487565,74358877220,9785673423};
    if(name==fname||mobno==fmobno)
    {
        return "Existing customer"
    }
    else{
        return "New customer";
    }
    
}
int main()
{
    int mobno,dtypeno[5],bill,n;
    char name,gender,valuedtype;
    printf("Please enter your name:\n");
    scanf("%s",name);
    printf("Please enter your name:\n")
    scanf("%d",&mobno);
    printf("Please enter the gender(M/F/T):\n");
    scanf("%c",&gender);
    printf("Please choose the departmentno where you like to buy:\n")
    printf("1-clothing\n2-cosmetics\n3-homeapp\n4-grocery\n");
    printf("Enter how many departments you are going to buy\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&dtypeno[i]);}
    bill=department_type(dtypeno,gender,n);
    value=customer_data(name,mobno,gender);
    if(value=="Existing customer")
    {
       bill=bill-bill*0.05;
       printf("The bill amount is : %d",bill);
    }
    else
    {
       printf("The bill amount is : %d",bill);
    }



}




