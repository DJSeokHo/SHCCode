#include <stdio.h>

void go_south_east_not_work(int lat, int lng) {

    lat = lat - 1;
    lng = lng + 1;

}

void go_south_east(int* lat, int* lng) {

    *lat = *lat - 1;
    *lng = *lng + 1;

}


int main() {

    int latitude = 32;
    int longitude = -64;

    go_south_east_not_work(latitude, longitude);

    printf("position is [%i, %i]\n", latitude, longitude);

    go_south_east(&latitude, &longitude);
    
    printf("position is [%i, %i]\n", latitude, longitude);

    return 0;
}