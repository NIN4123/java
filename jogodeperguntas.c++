#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <limits>

using namespace std;

struct Question {
    string question;
    vector<string> options;
    int correctOption;
};

struct Team {
    string name;
    int score;

    Team(const string& _name) : name(_name), score(0) {}
};

void displayQuestion(const Question& q) {
    cout << q.question << endl;
    for (size_t i = 0; i < q.options.size(); i++) {
        cout << i + 1 << ". " << q.options[i] << endl;
    }
}

bool checkAnswer(int playerAnswer, const Question& q) {
    return playerAnswer == q.correctOption;
}

int main() {
   srand(static_cast<unsigned int>(time(nullptr)));

    vector<Question> questions;

    cout << "Bem-vindo ao Jogo +++++++++++++++" << endl;
    cout << "Por favor, insira o nome da sua equipe: " << endl;
    string teamName;
    cin >> teamName;

    int totalRounds = 1;
    int totalQuestionsPerRound = 4;

    vector<Team> teams;
    teams.push_back(Team(teamName));

  Question q1;
q1.question = "Qual a função usada para leitura de dados no código?";
q1.options = {"Digite o numero da opcao correta:", "1- scanf", "2- fscanf", "3- rand", "4- printf"};
q1.correctOption = 1;
questions.push_back(q1);

Question q2;
q2.question = "Qual desses loops é usado quando você sabe antecipadamente quantas vezes deseja repetir o bloco de código?";
q2.options = {"Digite o numero da opcao correta:", "1- for", "2- while", "3- do-while", "4- if-else"};
q2.correctOption = 1;
questions.push_back(q2);

Question q3;
q3.question = "Qual desses símbolos é usado para destacar um comentário de múltiplas linhas?";
q3.options = {"Digite o numero da opcao correta:", "1- <!-- -->", "2- #", "3- /* */", "4- //"};
q3.correctOption = 3;
questions.push_back(q3);

Question q4;
q4.question = "Qual tipo de dado é usado para armazenar números inteiros?";
q4.options = {"Digite o numero da opcao correta:", "1- long", "2- float", "3- char", "4- int"};
q4.correctOption = 4;
questions.push_back(q4);

Question q5;
q5.question = "Qual desses operadores lógicos é usado se pelo menos uma das opções de uma questão for verdadeira?";
q5.options = {"Digite o numero da opcao correta:", "1- &&", "2- ||", "3- !", "4- =="};
q5.correctOption = 2;
questions.push_back(q5);

Question q6;
q6.question = "Qual dessas bibliotecas é usada para cronometragem de tempo?";
q6.options = {"Digite o numero da opcao correta:", "1- <vector>", "2- <algorithm>", "3- <cstdlib>", "4- <ctime>"};
q6.correctOption = 4;
questions.push_back(q6);

Question q7;
q7.question = "O que uma função recursiva?";
q7.options = {"Digite o numero da opcao correta:", "1- Armazenamento de Dados: Funções recursivas são usadas para guardar informações temporariamente durante a execução do programa.", "2- Manipulação de Dados: Elas possibilitam cálculos, operações e transformações dos dados.", "3- Flexibilidade: Funções recursivas tornam o código adaptável, permitindo atualizações e mudanças de valores.", "4- Controle de Fluxo As variáveis são usadas para tomar decisões e conduzir a lógica do programa."};
q7.correctOption = 2;
questions.push_back(q7);

Question q8;
q8.question = "Por que se deve usar Vetores em um codigo?";
q8.options = {"Digite o numero da opcao correta:", "1- Armazenamento de Dados: Vetores são usados para guardar informações temporariamente durante a execução do programa.", "2- Manipulação de Dados: Eles possibilitam cálculos, operações e transformações dos dados.", "3- Flexibilidade: Vetores tornam o código adaptável, permitindo atualizações e mudanças de valores.", "4- Controle de Fluxo: São nós."};
q8.correctOption = 3;
questions.push_back(q8);

Question q9;
q9.question = "Por que se deve ter uma noção sobre a biblioteca?";
q9.options = {"Digite o numero da opcao correta:", "1- Armazenamento de Dados: Ter uma noção sobre bibliotecas é importante para guardar informações temporariamente durante a execução do programa.", "2- Manipulação de Dados: É essencial para possibilitar cálculos, operações e transformações dos dados.", "3- Flexibilidade: Ter conhecimento sobre bibliotecas torna o código adaptável, permitindo atualizações e mudanças de valores.", "4- Controle de Fluxo: É usado para tomar decisões e conduzir a lógica do programa."};
q9.correctOption = 3;
questions.push_back(q9);

Question q10;
q10.question = "Como lidar com a Inserção de Informações em um codigo?";
q10.options = {"Digite o numero da opcao correta:", "1- Armazenamento de Dados: Lidar com a inserção de informações envolve guardar dados temporariamente durante a execução do programa.", "2- Manipulação de Dados: É a forma de realizar cálculos, operações e transformações nos dados inseridos.", "3- Flexibilidade: Envolve permitir que o código se adapte a diferentes entradas de informações.", "4- Controle de Fluxo: Envolve tomar decisões com base nas informações inseridas."};
q10.correctOption = 3;
questions.push_back(q10);

Question q11;
q11.question = "Qual é a principal vantagem de utilizar vetores na programação?";
q11.options = {"Digite o numero da opcao correta:", "1- Armazenamento de Dados: Utilizar vetores é vantajoso para armazenar informações temporariamente durante a execução do programa.", "2- Manipulação de Dados: É a forma de realizar cálculos, operações e transformações nos dados armazenados nos vetores.", "3- Flexibilidade: Utilizar vetores torna o código adaptável, permitindo atualizações e mudanças nos dados.", "4- Controle de Fluxo: É usado para tomar decisões sobre a manipulação dos dados nos vetores."};
q11.correctOption = 2;
questions.push_back(q11);

Question q12;
q12.question = "Qual destas opções descreve corretamente um vetor em programação?";
q12.options = {"Digite o numero da opcao correta:", "1- Um tipo de dado que armazena valores do tipo verdadeiro ou falso.", "2- Uma estrutura de controle utilizada para repetir um bloco de código.", "3- Um conjunto não ordenado de elementos, cada um identificado por um índice ou chave.", "4- Uma função que converte um tipo de dado em outro tipo de dado."};
q12.correctOption = 3;
questions.push_back(q12);


    for (int round = 1; round <= totalRounds; ++round) {
        cout << "-----------------------------------------" << endl;
        cout << "Rodada " << round << " de " << totalRounds << endl;

        for (int questionIndex = 0; questionIndex < totalQuestionsPerRound; ++questionIndex) {
            const Question& currentQuestion = questions[questionIndex];

            cout << "Pergunta " << questionIndex + 1 << ":" << endl;
            displayQuestion(currentQuestion);

            int playerAnswer;
            cout << "Digite a opção correta: ";
            cin >> playerAnswer;

            if (checkAnswer(playerAnswer, currentQuestion)) {
                cout << "Resposta correta! Você ganhou 1 ponto." << endl;
                teams[0].score++;
            } else {
                cout << "Resposta incorreta!" << endl;
            }
        }

        cout << "-----------------------------------------" << endl;
        cout << "Pontuação após a rodada " << round << ":" << endl;

        for (const Team& team : teams) {
            cout << "Equipe " << team.name << ": " << team.score << " pontos." << endl;
        }
    }

    cout << "-----------------------------------------" << endl;
    cout << "Fim do jogo! Ranking final:" << endl;

    sort(teams.begin(), teams.end(), [](const Team& a, const Team& b) {
        return a.score > b.score;
    });

    int rank = 1;
    for (const Team& team : teams) {
        cout << "Posição " << rank << ": Equipe " << team.name << " - " << team.score << " pontos." << endl;
        rank++;
    }

    return 0;
}
