// main.c

#include "wine_info.h"
#include <stdio.h>

int main(void) {
  FILE *file = fopen("grape_data.txt", "r");
  if (file == NULL) {
    perror("Error opening file");
    return 1;
  }

  struct WineInfo wineInfo;

  // Read data from file and process each row
  while (fscanf(file, "%s %f %d %f", wineInfo.grape_type,
                &wineInfo.sugar_content, &wineInfo.grape_quantity,
                &wineInfo.conversion_factor) == 4) {
    // Calculate estimated ABV using the function
    wineInfo.estimated_abv =
        calculate_abv(wineInfo.sugar_content, wineInfo.conversion_factor);

    // Calculate the wine yield using the new function
    wineInfo.wine_yield = calculate_wine_yield(wineInfo.grape_quantity,
                                               wineInfo.conversion_factor, 100);


    printf("Grape Type: %s\n", wineInfo.grape_type);
    printf("Estimated ABV: %.2f%%\n", wineInfo.estimated_abv);
    printf("Wine Yield: %.2f\n\n", wineInfo.wine_yield);
  }

  fclose(file);
  return 0;
}
