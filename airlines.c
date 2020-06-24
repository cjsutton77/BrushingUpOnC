#include <stdio.h>

struct Airlines {
    int flightNum;
    char OriginAirport[5];
    char DestinAirport[5];
    int departTime;
    int arriveTime;
};

int main(int argc, char* argv[]) {
    struct Airlines flight1 = {813,"HOU","ORD",1500,1800};
    printf("Flight number: %d\n",flight1.flightNum);
    printf("origin airport: %s\n",flight1.OriginAirport);
    printf("%s to %s\n",flight1.OriginAirport,flight1.DestinAirport);
    printf("%lu\n",sizeof(flight1.OriginAirport)/sizeof(char));
    int num = sizeof(flight1.OriginAirport)/sizeof(char);
    for (int i=0;i < num; i++) printf("%c ",flight1.OriginAirport[i]);
    return 0;
}
