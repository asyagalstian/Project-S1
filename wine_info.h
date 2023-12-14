// wine_info.h

#ifndef WINE_INFO_H
#define WINE_INFO_H

struct WineInfo {
  char grape_type[50];
  float sugar_content;
  int grape_quantity;
  float conversion_factor;
  float estimated_abv;
  float wine_yield;
};

float calculate_abv(float sugar_content, float conversion_factor);
float calculate_wine_yield(int grape_quantity, float conversion_factor,
                           float potential_alcohol);
float get_wine_yield(struct WineInfo *wineInfo);

#endif
