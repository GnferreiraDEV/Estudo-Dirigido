#include <stdio.h>

int main() {
    char compromissoNoDia, estarNaCidade, temDinheiro, ePerto, estaChovendo;


    printf("Voc� tem compromisso no dia? (S/N): ");
    scanf(" %c", &compromissoNoDia);

    printf("Voc� vai estar na cidade? (S/N): ");
    scanf(" %c", &estarNaCidade);

    printf("Voc� tem dinheiro? (S/N): ");
    scanf(" %c", &temDinheiro);

    printf("O local eh perto? (S/N): ");
    scanf(" %c", &ePerto);

    printf("Est� chovendo? (S/N): ");
    scanf(" %c", &estaChovendo);


    if (compromissoNoDia == 'N' && estarNaCidade == 'S' && temDinheiro == 'S' && ePerto == 'S' && estaChovendo == 'N') {
        printf("Eu vou!\n");
    } else {
        printf("N�o vou!\n");
    }

    return 0;
}

