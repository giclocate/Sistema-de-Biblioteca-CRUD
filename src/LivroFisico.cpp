#include "../include/LivroFisico.h"

// Implementação do método exibir
void LivroFisico::exibir() const {
    std::cout << "Título: " << titulo << "\n"
              << "Autor: " << autor << "\n"
              << "ISBN: " << isbn << "\n"
              << "Ano de Publicação: " << anoPublicacao << "\n"
              << "Editora: " << editora << "\n"
              << "Valor Diário: " << valorDiaria << "\n"
              << "Peso (gramas): " << pesoGrama << "\n"
              << "Tipo de Capa: " << tipoCapa << "\n"
              << "Quantidade em Estoque: " << quantidadeEstoque << "\n"
              << "/n";
}

//Incremento e Decremento do estoque

void LivroFisico::aumentarEstoque() {
    quantidadeEstoque ++;

}
void LivroFisico::diminuirEstoque() {
    if(quantidadeEstoque > 0){
        quantidadeEstoque --;
    } else {
        std::cout << "Esse livro não está disponivel" << std::endl;
    }

}

// Sets e Gets

//pesoGrama
void LivroFisico::setPesoGrama(int p) {
    pesoGrama = p;
}

int LivroFisico::getPesoGrama() const {
    return pesoGrama;
}
//tipoCapa
void LivroFisico::setTipoCapa(const std::string& tc) {
    tipoCapa = tc;
}

std::string LivroFisico::getTipoCapa() const {
    return tipoCapa;
}
//quantidadeEstoque
void LivroFisico::setQuantidadeEstoque(int q) {
    quantidadeEstoque = q;
}

int LivroFisico::getQuantidadeEstoque() const {
    return quantidadeEstoque;
}
