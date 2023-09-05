#include <stdlib.h>
#include <stdio.h>

#define GF 9.81

float psol(float *de,float *he);
float fsol(float *vi,float *ar ,float *ve ,float *he);
float visol(float *fo, float *he, float *ar, float *ve);
float dsol(float *pr,float *he);
float asol(float *fo ,float *he ,float *vi ,float *ve);
float vesol(float *fo, float *he, float *vi, float *ar);
float hsol1(float *vi, float *ar, float *ve, float *fo);
float hsol2(float *pr, float *vi);

int main  (){

    int i ,k;
    float p, f, d, h, v, a, u;

    printf("select option:\n");
    printf("pressure:1 - force:2 - Viscosity:3 - density:4\n");
    printf("area:5 - velocity:6 - height:7\n");
    printf("select:"); scanf("%d", &i);


    if ( 0 < i < 7){
        switch(i)
        {
            case 1:
                printf("enter in order: density - height\n");
                printf("enter:"); scanf(" %f %f", &d ,&h);
            float pressure = psol(&d,&h);
            printf("pressure is : %3f\n", pressure);
            printf("note: standard units\n ");
            break;
            case 2:
                printf("enter in order: Viscosity - area - velocity - height\n");
                printf("enter:"); scanf(" %f %f %f %f", &v ,&a ,&u ,&h);
            float force = fsol(&v ,&a ,&u ,&h);
            printf("force is : %f\n", force);
            printf("note: standard units\n ");
            break;
            case 3:
                printf("enter in order: force - height - area - velocity\n");
                printf("enter:"); scanf(" %f %f %f %f", &f ,&h ,&a ,&u);
            float Viscosity = visol(&f ,&h ,&a ,&u);
            printf("Viscosity is : %f\n", Viscosity);
            printf("note: standard units\n ");
            break;
            case 4:
                printf("enter in order: pressure - height\n");
                printf("enter:"); scanf(" %f %f", &p ,&h);
            float density = dsol(&p,&h);
            printf("density is : %f\n", density);
            printf("note: standard units\n ");
            break;
            case 5:
                printf("enter in order: force - height - Viscosity -velocity\n");
                printf("enter:"); scanf(" %f %f %f %f", &f ,&h ,&v ,&u);
            float area = asol(&f ,&h ,&v ,&u);
            printf("area is : %f\n", area);
            printf("note: standard units\n ");
            break;
            case 6:
                printf("enter in order: force - height - Viscosity - area\n");
                printf("enter:"); scanf(" %f %f %f %f", &f ,&h ,&v ,&a);
            float velocity = vesol(&f ,&h ,&v ,&a);
            printf("velocity is : %f\n", velocity);
            printf("note: standard units\n ");
            break;
        }
} if ( i == 7 ){
    printf("1:height with force\n");
    printf("2:height with pressure\n");
    printf("select:"); scanf("%d", &k);
                switch(k)
        {
                    case 1:
                        printf("enter in order: Viscosity - area - velocity - force\n");
                printf("enter:"); scanf(" %f %f %f %f", &v ,&a ,&u ,&f);
            float height = hsol1( &v ,&a ,&u ,&f);
            printf("height is : %f\n", height);
            printf("note: standard units\n ");
            break;
                    case 2:
                        printf("enter in order: pressure - Viscosity\n");
                printf("enter:"); scanf(" %f %f", &p ,&v);
            height = hsol2(&p ,&v);
            printf("height is : %f\n", height);
            printf("note: standard units\n ");
            break;
                    default :
                        printf("Wrong entry!");
                        break;
        }
}else{
    printf("Wrong entry!\n");
    printf("enter again:\n");
    main ();
}
}

float psol(float *de, float *he){
    float p = (*de) * (*he) * GF;
    return p;
}

float fsol(float *vi,float *ar ,float *ve ,float *he){
    float f = ((*vi) * (*ar) * (*ve)) / (*he);
    return f;
}

float visol(float *fo, float *he, float *ar, float *ve){
    float v = ((*fo) * (*he)) / ((*ar) * (*ve));
    return v;
}

float dsol(float *pr,float *he){
    float d = (*pr) / ( GF * (*he));
    return d;
}

float asol(float *fo ,float *he ,float *vi ,float *ve){
    float a = ((*fo) * (*he)) / ((*vi) * (*ve));
    return a;
}

float vesol(float *fo, float *he, float *vi, float *ar){
    float u = ((*fo) * (*he)) / ((*vi) * (*ar));
    return u;
}

float hsol1(float *vi, float *ar, float *ve, float *fo){
    float h = ((*vi) * (*ar) * (*ve)) / (*fo);
    return h;
}

float hsol2(float *pr, float *vi){
    float h = (*pr)  / ((*vi) * GF);
    return h;
}
