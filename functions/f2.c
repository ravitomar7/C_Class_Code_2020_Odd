#include<stdio.h>


/*
Any Function will have these three phases in its lifetime:
1. Declaration (only once)
2. Calling (any number of time)
3. Defination (only once)
*/


//Declaring!!!!!
void Welcome();// Ms Faculty1
void Principal_speech(); // Ms Principal
void Performances(); // Ms Art& Dance!
void Thankyou(); //Ms English Teacher!
void SpecialPerformance(); //Ms Special faculty!




int main()// PTI Entire Event!
{

    Welcome();//Calling
    Performances();//Calling
    Thankyou();//Calling
    Principal_speech();//Calling
    Performances();//Calling
    Thankyou();//Calling
    

    return 0;
}



void Welcome()
{
printf("Welcome Eveyone on this occasion!");
    printf("\n Welcome Chief Guest!");
    printf("\nShower Flowers! ");
    printf("\n Do saraswati Vandana");
}


void Performances() // Ms Art& Dance!
{
     printf("\n Some Other Dance");
    printf("\n Dance Performance");
    printf("\n Singing Performance");

}
void Thankyou() //Ms English Teacher!
{


    printf("\n Appreciation of Students!");
    printf("\n Thanking Note!");
    printf("\n BBye to Eveyone!");

}
void SpecialPerformance()
{
    printf("\nWOW! This is Amazing!!!");

}

void Principal_speech()
{
    printf("\n Some Inaugral Speech By Principal");
}




//Defination!!!







//     

//    
