//
// Created by Mattia on 08/12/2021.
//


float max (float n[], int d){
    float m=n[0];
    int i;

    for (i=1;i<d;i++){
        if (n[i]>m){
            m=n[i];
        }
    }
    return m;
}
