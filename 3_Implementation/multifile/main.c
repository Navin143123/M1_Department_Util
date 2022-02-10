#include"department.h"
int main()
{
    int dtypeno[5],n,value;
    char valuedtype;
    printf("Please enter your name:");
    scanf("%s",s1.name);
    printf("Please enter your mobile:");
    scanf("%lld",&s1.mobno);
    printf("Please enter the gender(M/F/T):");
    scanf("%s",&s1.gender);
    printf("Please choose the departmentno where you like to buy:");
    printf("1-clothing\n2-cosmetics\n3-homeapp\n4-grocery\n");
    printf("Enter how many departments you are going to buy:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&dtypeno[i]);}
    s1.bill=department_type(dtypeno,n);
    value=customer_data();
    if(value==1)
    {
       s1.bill=s1.bill-s1.bill*0.05;
       printf("The bill amount of %s is : %f",s1.name,s1.bill);
    }
    else
    {
       printf("The bill amount of %s is : %f",s1.name,s1.bill);
    }



}