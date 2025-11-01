#include<stdio.h>
#include <ctype.h>
/// @brief 
///  Programa que simula uma caixa multibanco com as suas várias. A opção “ Outras Operações” deverá ser associada ao char ‘0’. 
/// Depois de lida uma opção deverá ser exibida a seguinte mensagem. “ A opção escolhida foi …”.
/// Opções:
/// 1 - Levantamentos;
/// 3 - MB WAY / MB NET;
/// 4 - Consultas;
/// 6 - Descontos MULTIBANCO;
/// 7 - Transferencias e Debitos Diretos;
/// 9 - Vouchers;
/// 0 - Outras OPerações;
/// . - Pagamentos e outros serviços;
/// @return 
int main()
{
    char opcao;
    // escrever menu
    // ler opção
    system("cls");  
    do
    {      
        switch (opcao)
            {
            case '1':
            printf("...");
                break;
                
            
            default:
                printf("Operacao desconhecida");
                break;
            }
    } while (toupper(opcao)!='X');
}
