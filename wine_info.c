// wine_info.c

#include "wine_info.h"
#include <stdio.h>

float calculate_abv(float sugar_content, float conversion_factor) {
  return sugar_content * conversion_factor;
}

float calculate_wine_yield(int grape_quantity, float conversion_factor,
                           float potential_alcohol) {
  return grape_quantity * conversion_factor * (potential_alcohol / 100.0);
}

float get_wine_yield(struct WineInfo *wineInfo) { return wineInfo->wine_yield; }
