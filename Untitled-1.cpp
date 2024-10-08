#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float valorHora, horasTrabalhadas, salarioBruto, descontoIR, descontoINSS, fgts, totalDescontos, salarioLiquido;

    cout << "Digite o valor da sua hora: R$ ";
    cin >> valorHora;

    cout << "Digite a quantidade de horas trabalhadas no mês: ";
    cin >> horasTrabalhadas;

    salarioBruto = valorHora * horasTrabalhadas;

    if (salarioBruto <= 900) {
        descontoIR = 0;
    } else if (salarioBruto <= 1500) {
        descontoIR = salarioBruto * 0.05;
    } else if (salarioBruto <= 2500) {
        descontoIR = salarioBruto * 0.1;
    } else {
        descontoIR = salarioBruto * 0.2;
    }

    descontoINSS = salarioBruto * 0.1;
    fgts = salarioBruto * 0.11;

    totalDescontos = descontoIR + descontoINSS;
    salarioLiquido = salarioBruto - totalDescontos;

    cout << fixed << setprecision(2);
    cout << "\nSalário Bruto: R$ " << salarioBruto << endl;
    cout << "(-) IR (5%): R$ " << descontoIR << endl;
    cout << "(-) INSS (10%): R$ " << descontoINSS << endl;
    cout << "FGTS (11%): R$ " << fgts << endl;
    cout << "Total de descontos: R$ " << totalDescontos << endl;
    cout << "Salário Líquido: R$ " << salarioLiquido << endl;

    return 0;
}
