#include <stdio.h>
#include <stdlib.h>

int main(void){

  int codPiece1, qtdPiece1;
  double unitPricePiece1, finalPricePiece1;
  scanf("%d %d %lf", &codPiece1, &qtdPiece1, &unitPricePiece1);

  finalPricePiece1 = qtdPiece1 * unitPricePiece1;

  int codPiece2, qtdPiece2;
  double unitPricePiece2, finalPricePiece2;
  scanf(" %d %d %lf", &codPiece2, &qtdPiece2, &unitPricePiece2);

  finalPricePiece2 = qtdPiece2 * unitPricePiece2;

  double finalPrice = finalPricePiece1 + finalPricePiece2;

  printf("VALOR A PAGAR: R$ %.2lf\n", finalPrice);
  return 0;
}
