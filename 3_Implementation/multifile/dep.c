#include"main.c"
float department_type(int dtypeno[],int n)
{
    for(int i=0;i<n;i++){
    if(dtypeno[i]==1)
    {
        if(s1.gender=='M')
        {
            int n1;
            float tshirt,shirt,pant,trousers,inners;
            tshirt=250;
            shirt=500;
            pant=600;
            trousers=250;
            inners=100;
            printf("\nEnter 1-tshirt\n2-shirt\n3-pant\n4-trousers\n5-inners");
            printf("Enter number of items you decided to buy:");
            scanf("%d",&n1);
            int mcloth[n1],q[n1];
            for(int i=0;i<n1;i++)
            {
                printf("Please choose the itemno of which item you like to buy:");
                scanf("%d",&mcloth[i]);
                printf("Enter the quantity for item:");
                scanf("%d\n",&q[i]);
                if(mcloth[i]==1)
                {
                    s1.bill=s1.bill+tshirt*q[i];
                }
                if(mcloth[i]==2)
                {
                    s1.bill=s1.bill+shirt*q[i];
                }
                if(mcloth[i]==3)
                {
                    s1.bill=s1.bill+pant*q[i];
                }
                if(mcloth[i]==4)
                {
                   s1.bill=s1.bill+trousers*q[i];
                }
                if(mcloth[i]==5)
                {
                    s1.bill=s1.bill+inners*q[i];
                }
            }
            
        }
        if(s1.gender=='F'||s1.gender=='T')
        {
            float chudidar,saree,legin,roughdress,inners;
            int n2;
            chudidar=300;
            saree=500;
            legin=400;
            roughdress=350;
            inners=150;
            printf("\nEnter 1-chudidar\n2-saree\n3-legin\n4-roughdress\n5-inners");
            printf("Enter number of items you decided to buy:");
            scanf("%d",&n2);
            int fcloth[n2],q1[n2];
            for(int i=0;i<n2;i++)
            {
                printf("Please choose the itemno of which item you like to buy:");
                scanf("%d",&fcloth[i]);
                printf("Enter the quantity for item:");
                scanf("%d",&q1[i]);
                if(fcloth[i]==1)
                {
                    s1.bill=s1.bill+chudidar*q1[i];
                }
                if(fcloth[i]==2)
                {
                   s1.bill=s1.bill+saree*q1[i];
                }
                if(fcloth[i]==3)
                {
                    s1.bill=s1.bill+legin*q1[i];
                }
                if(fcloth[i]==4)
                {
                    s1.bill=s1.bill+roughdress*q1[i];
                }
                if(fcloth[i]==5)
                {
                    s1.bill=s1.bill+inners*q1[i];
                }
            }
        }
    }
    if(dtypeno[i]==2)
    {
        float facewash,powder,cream,gel,perfume;
        if(s1.gender=='M')
        {
            float gel,perfume;
            int n3;
            facewash=150;
            powder=100;
            cream=70;
            gel=50;
            perfume=100;
            printf("\nEnter 1-facewash\n2-powder\n3-cream\n4-gel\n5-perfume");
            printf("Enter number of items you decided to buy:");
            scanf("%d",&n3);
            int mcos[n3],q2[n3];
            for(int i=0;i<n3;i++)
            {
                printf("Please choose the itemno of which item you like to buy:");
                scanf("%d",&mcos[i]);
                printf("Enter the quantity for item:");
                scanf("%d",&q2[i]);
                if(mcos[i]==1)
                {
                    s1.bill=s1.bill+facewash*q2[i];
                }
                if(mcos[i]==2)
                {
                    s1.bill=s1.bill+powder*q2[i];
                }
                if(mcos[i]==3)
                {
                    s1.bill=s1.bill+cream*q2[i];
                }
                if(mcos[i]==4)
                {
                    s1.bill=s1.bill+gel*q2[i];
                }
                if(mcos[i]==5)
                {
                    s1.bill=s1.bill+perfume*q2[i];
                }
            }
        }
        if(s1.gender=='F'||s1.gender=='T')
        {
            float lipstick;
            int n4;
            facewash=200;
            powder=150;
            cream=110;
            lipstick=50;
            perfume=110;
            printf("\nEnter 1-facewash\n2-powder\n3-cream\n4-lipstick\n5-perfume");
            printf("Enter number of items you decided to buy:");
            scanf("%d",&n4);
            int fcos[n4],q3[n4];
            for(int i=0;i<n4;i++)
            {
                printf("Please choose the itemno of which item you like to buy\n");
                scanf("%d",&fcos[i]);
                printf("Enter the quantity for item:\n");
                scanf("%d",&q3[i]);
                if(fcos[i]==1)
                {
                    s1.bill=s1.bill+facewash*q3[i];
                }
                if(fcos[i]==2)
                {
                    s1.bill=s1.bill+powder*q3[i];
                }
                if(fcos[i]==3)
                {
                    s1.bill=s1.bill+cream*q3[i];
                }
                if(fcos[i]==4)
                {
                    s1.bill=s1.bill+lipstick*q3[i];
                }
                if(fcos[i]==5)
                {
                    s1.bill=s1.bill+perfume*q3[i];
                }
            }
        }
    }
    if(dtypeno[i]==3)
    {
        float toys,books,sports,electronics;
        int n5;
        toys=300;
        books=150;
        sports=400;
        electronics=250;
        printf("\nEnter 1-toys\n2-books\n3-sports\n4-electronics");
            printf("Enter number of items you decided to buy:");
            scanf("%d",&n5);
            int happ[n5],q4[n5];
            for(int i=0;i<n5;i++)
            {
                printf("Please choose the itemno of which item you like to buy:");
                scanf("%d",&happ[i]);
                printf("Enter the quantity for item:\n");
                scanf("%d",&q4[i]);
                if(happ[i]==1)
                {
                   s1.bill=s1.bill+toys*q4[i];
                }
                if(happ[i]==2)
                {
                    s1.bill=s1.bill+books*q4[i];
                }
                if(happ[i]==3)
                {
                    s1.bill=s1.bill+sports*q4[i];
                }
                if(happ[i]==4)
                {
                    s1.bill=s1.bill+electronics*q4[i];
                }
            }
    }
    if(dtypeno[i]==4)
    {
        float sugar,rice,dhal,salt,oil;
        int n6;
        sugar=40;
        salt=30;
        rice=50;
        dhal=60;
        printf("\nEnter 1-sugar\n2-rice\n3-dhal\n4-salt\n5-oil");
            printf("Enter number of items you decided to buy:");
            scanf("%d",&n6);
            int grcy[n6],q5[n6];
            for(int i=0;i<n6;i++)
            {
                printf("Please choose the itemno of which item you like to buy:");
                scanf("%d",&grcy[i]);
                printf("Enter the quantity for item:");
                scanf("%d",&q5[i]);
                if(grcy[i]==1)
                {
                    s1.bill=s1.bill+sugar*q5[i];
                }
                if(grcy[i]==2)
                {
                    s1.bill=s1.bill+rice*q5[i];
                }
                if(grcy[i]==3)
                {
                    s1.bill=s1.bill+dhal*q5[i];
                }
                if(grcy[i]==4)
                {
                    s1.bill=s1.bill+salt*q5[i];
                }
                if(grcy[i]==5)
                {
                   s1.bill=s1.bill+oil*q5[i];
                }
            }

    }
  }
    return s1.bill;
}