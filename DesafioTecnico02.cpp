#include <iostream>
#include <string.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "pt_BR.UTF-8");
	cout << "para começar, quantos assassinos há no Credo?" << endl;
	int assassinos = 0;
	string nomesMestreAssassinos[3] = { };
	string arma;
	cin >> assassinos;
	while (true) {
		cout << "\nEscolha uma opção: 1 - Apresentar Ezio, 2 - Apresentar o Credo dos Assassinos, 3 - Designar Mestres assassinos, 4 - Escolher arma do Ezio, 5 - guerrear com assassinos" << endl;
		int opcao = 0;
		cin >> opcao;
		switch (opcao) {
			case 1:
				cout << "O mestre assasino, Ezio Auditore da Firenze (1459 - 1524) é o mentor da irmandade de assassinos durante a Renascença Italiana." << endl;
			break;
			case 2:
				cout << "A Irmandade dos Assassinos, também conhecida como Ordem dos Assassinos e originalmente como Os Ocultos, é uma organização secreta de manutenção da paz global dedicada a proteger a humanidade de abusos de poder, governos coercitivos e injustiças." << endl;
				break;
			case 3:
				for (int i = 0; i < 3; i++) {
					cout << "Insira o nome do mestre assassino" << endl;
					string nome;
					cin >> nome;
					nomesMestreAssassinos[i] = nome;
				}
				cout << "os mestres assassinos escolhidos foram: ";
				for (int i = 0; i < 3; i++) {
					cout << nomesMestreAssassinos[i] << " ";
				}
				cout << endl;
				break;
			case 4:
				cout << "Escolha qual arma o Ezio usará em seus confrontos: hiddenblade, espada, facas, pistola" << endl;
				cin >> arma;
				cout << "O Ezio usará ";
				if (arma == "hiddenblade") {
					cout << "sua arma icônica, a hidden blade." << endl;
				} else if (arma == "espada") {
					cout << "sua fiel espada" << endl;
				}
				else if (arma == "facas") {
					cout << "as letais facas arremessáveis" << endl;
				} else {
					cout << "a pistola escondida em sua hidden blade." << endl;
				}
				break;
			case 5:
				cout << "seu exército de Assassinos irá lutar contra 50 Templários, quem irá vencer?" << endl;
				int templarios = 50;
				do {
					assassinos -= (1 + rand() % 10);
					templarios -= (1 + rand() % 10);
					if (assassinos < 0) {
						cout << "Os Templários venceram, Templários vivos" << templarios << endl;
						assassinos = 0;
						break;
					}
					else if (templarios < 0) {
						cout << "Os Assasinos venceram, Assassinos vivos " << assassinos << endl;
						templarios = 0;
						break;
					}
					cout << "Assassinos vivos: " << assassinos << " Templários vivos: " << templarios << endl;
				} while (assassinos > 0 || templarios > 0);
		}
	}
}