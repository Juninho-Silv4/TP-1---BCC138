class Unidade {
    int poderAtaque;
    int destruicoes;

    public:
        int getPoderAtaque(int);
        int somaDestruicao();
};

class Infantaria : public Unidade {
    int forca;
    int velocidade;

    int getPoderAtaque();
};

class Veiculo : public Unidade {
    int blindagem;
    int potencialDeFogo;

    int getPoderAtaque();
    
};

class Aeronave : public Unidade {
    int manobrabilidade;
    int alcance;

    int getPoderAtaque();
};