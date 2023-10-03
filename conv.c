#include<stdlib.h>
#include<stdio.h>


float len1(float *ge);
float len2(float *ge);
float len3(float *ge);
float len4(float *ge);
float len5(float *ge);
float len6(float *ge);
float mas1(float *ge);
float mas2(float *ge);





int main(){
    int i,j,k;
    float g;
    float l,m,t,v;

    printf("select option:\n");
    printf("1-length\n2-mass\n3-time\n4-volume\n");
    printf("enter:"); scanf("%d",&i);
    switch (i){
        case 1:
            printf("from-to:\n");
            printf("don't chose same opject\n");
            printf("1-meter\n2-inch\n3-feet\n");
            printf("enter:"); scanf("%d",&j);
            printf("1-meter\n2-inch\n3-feet\n");
            printf("enter:"); scanf("%d",&k);
            if (j == k){
                printf("wrong entry!\n again.\n");
                main();
            }else if (j == 1){
                switch (k){
                    case 2:
                        printf("enter the amount:"); scanf("%f",&g);
                        l = len1(&g);
                        printf("length is : %f inch",l);
                        break;
                    case 3:
                        printf("enter the amount:"); scanf("%f",&g);
                        l = len2(&g);
                        printf("length is : %f feet",l);
                        break;
                    default :
                        printf("wrong entry!\n again\n");
                        main();
                }
            }else if (j == 2){
                switch (k){
                    case 1:
                        printf("enter the amount:"); scanf("%f",&g);
                        l = len3(&g);
                        printf("length is : %f meter",l);
                        break;
                    case 3:
                        printf("enter the amount:"); scanf("%f",&g);
                        l = len4(&g);
                        printf("length is : %f feet",l);
                        break;
                    default :
                        printf("wrong entry!\n again\n");
                        main();
                }
            }else if (j == 3){
                switch (k){
                    case 1:
                        printf("enter the amount:"); scanf("%f",&g);
                        l = len5(&g);
                        printf("length is : %f meter",l);
                        break;
                    case 2:
                        printf("enter the amount:"); scanf("%f",&g);
                        l = len6(&g);
                        printf("length is : %f inch",l);
                        break;
                    default :
                        printf("wrong entry!\n again\n");
                        main();
                }
            }else{
                printf("wrong entry!\n again\n");
                main();
            }
            break;
        case 2:
            printf("from-to:\n");
            printf("don't chose same opject\n");
            printf("1-kilograms\n2-pounds\n");
            printf("enter:"); scanf("%d",&j);
            printf("1-kilograms\n2-pounds\n");
            printf("enter:"); scanf("%d",&k);
            if (j == k ){
                printf("wrong entry!\n again.\n");
                main();
            }else if (j == 1){
                    switch (k){
                        case 2:
                            printf("enter the amount:"); scanf("%f",&g);
                            m = mas1(&g);
                            printf("mass is : %f kilograms",m);
                            break;
                        default:
                            printf("wrong entry!\n again\n");
                            main();
                    }
            }else if (j == 2);{
                    switch (k){
                        case 1:
                            printf("enter the amount:"); scanf("%f",&g);
                            m = mas2(&g);
                            printf("mass is : %f kilograms",m);
                            break;
                        default:
                            printf("wrong entry!\n again\n");
                            main();
                    }
            }
            break;
        case 3:
            printf("from-to:\n");
            printf("don't chose same opject\n");
            printf("1-kilograms\n2-pounds\n");
            printf("enter:"); scanf("%d",&j);
            printf("1-kilograms\n2-pounds\n");
            printf("enter:"); scanf("%d",&k);
            if (j == k ){
                printf("wrong entry!\n again.\n");
                main();
            }else if (j == 1)

}
}

float len1(float *ge){
   float p = 39.37008 * (*ge);
   return p;
}

float len2(float *ge){
    float p = 3.28084 * (*ge);
    return p;
}

float len3(float *ge){
    float p = 0.0254 * (*ge);
    return p;
}

float len4(float *ge){
    float p = 0.083333 * (*ge);
    return p;
}

float len5(float *ge){
    float p = 0.3048 * (*ge);
    return p;
}

float len6(float *ge){
    float p = 12 * (*ge);
    return p;
}

float mas1(float *ge){
    float p = 2.204623 * (*ge);
    return p;
}

float mas2(float *ge){
    float p = 0.453592 * (*ge);
    return p;
}
