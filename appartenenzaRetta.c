//
// Created by Jack on 26/11/2024.
//

#include "appartenenzaRetta.h"


int appartenenzaRetta(float coeffAng, float quota, float x1, float y1){

    if(y1 == coeffAng*x1+quota) {
        return 1;
    }
  return 0;
}
