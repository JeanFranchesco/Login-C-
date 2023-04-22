#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

bool LoginS = false;
string User = "";
string Password ="";
string UserR = "";
string PasswordR ="";
int answer;
void Options(){
    cout << "opcao 1 - Register\nopcao 2 - Login\n";
    cin >> answer;
}
void Register(){
    if(answer == 1){
    cout <<"Digite o Nome de usuario que deseja salvar \n";
    cin >> UserR;
    cout <<"digite a senha que deseja salvar \n";
    cin >> PasswordR;
    system("cls");
    return Options();
    }else{}
}

void login(){
    if(answer == 2){
    cout << "\t\t\tbem vindo a tela de login \n";
do{
    cout << "Usuario\n";
    cin >> User ;
    cout << "Senha\n";
    cin >> Password;

        if(User == UserR && Password == PasswordR){
         LoginS = true;
         cout <<"o login foi feito com sucesso";
            }else{
                cout <<"nao fomos capazes de encontrar a sua conta tente denovo";
                getch();            
                system("cls");
            }
        }while (!LoginS);
    }else{}
}
int main(){
    Options();
    Register();
    login();
    return 0;
}