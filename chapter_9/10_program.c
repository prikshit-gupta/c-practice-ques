#include <stdio.h>

typedef struct Date {
        int dd;                                     int mm;
        int yyyy;
}Date;                                          
int compare(struct Date d1, struct Date d2) {
        if (d1.yyyy==d2.yyyy && d1.mm == d2.mm && d1.dd == d2.dd){                                      return 0;
        }else if(d1.yyyy>d2.yyyy){                          return 1;
        }else if(d1.yyyy<d2.yyyy){
                return -1;
        }else if(d1.mm > d2.mm){
                return 1;
        }else if(d1.mm < d2.mm){
                return -1;
        }else if(d1.dd > d2.dd){
                return 1;
        }else{
                return -1;
        }
}

int main() {
        Date d1= {27,11,2009};
        Date d2= {27,6,2026};

        int result = compare(d1,d2);
        printf("%d", result);
        return 0;
}
