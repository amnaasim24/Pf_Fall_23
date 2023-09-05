#include <stdio.h>
int main() {
            int radius, height;
            float Pi=3.142, volume=0;
               printf("Enter the radius:");
               scanf("%d",&radius);
               printf("Enter the height:");
               scanf("%d",&height);
               volume=Pi*radius*radius*height;
               printf("%f",volume);
            return volume;
}