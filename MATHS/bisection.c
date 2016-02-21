#include<math.h>
#include<stdio.h>

float x1, x2, x, f, f1, f2, a, b, c, d, pow1, pow2, pow3, pow4;

float fn( float x)
{
    return a*pow(x,pow1) + b*pow(x,pow2) + c*pow(x,pow3) + d*pow(x,pow4);
}

int main()
{
    printf("Enter a, b, c and d: ");
    scanf("%f %f %f %f",&a,&b,&c,&d);

    printf("Enter power: ");
    scanf("%f %f %f %f",&pow1,&pow2,&pow3,&pow4);

    printf("Enter the 1st guess? ");
    scanf("%f",&x1);

    printf("Enter the 2nd guess? ");
    scanf("%f",&x2);

    f1 = fn(x1);
   // printf("f1 : %f\n",f1);
    f2 = fn(x2);
   // printf("f2 : %f\n",f2);

    if( f1*f2 > 0 )
    {
        printf("Guesses are wrong!");
        return 0;
    }

    else
    {
        while( 1 )
        {
            x = (x1 + x2)/2;
            //printf("x : %f\n",x);

            //printf("Condn : %f\n",abs((x1 + x2)/x));
            if( abs((x1 + x2)/x) <= 0.001 )
            {
                f = fn(x);
                //printf("f : %f\n",f);
                if ((f*f1) > 0)
                {
                    x1 = x;
                    f1 = f;
                }

                else
                {
                    x2 = x;
                    f2 = f;
                }
            }

            else
            {
                printf("Roots are : %f and %f",x1,x2);
                return 0;
            }
        }
        //while loop ends
    }
    //else statement ends
}
