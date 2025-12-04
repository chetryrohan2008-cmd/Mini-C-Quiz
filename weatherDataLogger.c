#include <stdio.h>

struct Weather {
    float temp, humidity, pressure;
    int day, month, year;
};

int main() {
    struct Weather w;
    FILE *fp;
    int choice, count;
    float tSum, hSum, pSum;

    do {
        printf("\n1. Add Data\n2. Daily Average\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Temperature: ");
            scanf("%f", &w.temp);

            printf("Humidity: ");
            scanf("%f", &w.humidity);

            printf("Pressure: ");
            scanf("%f", &w.pressure);

            printf("Date (dd mm yyyy): ");
            scanf("%d %d %d", &w.day, &w.month, &w.year);

            fp = fopen("weather.txt", "a");
            fprintf(fp, "%f %f %f %d %d %d\n", w.temp, w.humidity, w.pressure, w.day, w.month, w.year);
            fclose(fp);

            printf("Data saved.\n");
        }

        else if(choice == 2) {
            int d, m, y;
            printf("Enter date (dd mm yyyy): ");
            scanf("%d %d %d", &d, &m, &y);

            fp = fopen("weather.txt", "r");
            tSum = hSum = pSum = 0;
            count = 0;

            while(fscanf(fp, "%f %f %f %d %d %d",
                         &w.temp, &w.humidity, &w.pressure,
                         &w.day, &w.month, &w.year) != EOF) {

                if(w.day == d && w.month == m && w.year == y) {
                    tSum += w.temp;
                    hSum += w.humidity;
                    pSum += w.pressure;
                    count++;
                }
            }
            fclose(fp);

            if(count > 0) {
                printf("Average Temp: %.2f\n", tSum / count);
                printf("Average Humidity: %.2f\n", hSum / count);
                printf("Average Pressure: %.2f\n", pSum / count);
            } else {
                printf("No data for this date.\n");
            }
        }

    } while(choice != 3);

    return 0;
}
