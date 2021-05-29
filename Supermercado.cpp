#include <iostream>

void welcome(){

    char ingresar;

    std::cout << "====================================================================\n";
    std::cout << "====================================================================\n";
    std::cout << "||||  :::   :::  :::   ::::  ::    ::::  ::::::  ::   ::  ::::  ||||\n";
    std::cout << "||||   :::  :::  :::   ::--  ::    ::    ::  ::  :: V ::  ::--  ||||\n";
    std::cout << "||||     :::   :::     ::::  ::::  ::::  ::::::  ::   ::  ::::  ||||\n";
    std::cout << "====================================================================\n";
    std::cout << "====================================================================\n";

}

class Cliente
{
private:
    std::string name;
    std::string surname;
public:
    Cliente(std::string, std::string);
    void comprarplus();
    void comprarless();
};

Cliente::Cliente(std::string _name, std::string _surname)
{
    name = _name;
    surname = _surname;
}

void Cliente::comprarplus()
{
    std::cout << "Mi nombre es " << name << " " << surname << " y he venido a comprar varias cosas.\n";
}

void Cliente::comprarless()
{
    std::cout << "Mi nombre es " << name << " " << surname << " y he venido a comprar pocas cosas.\n";
}

int main(){

    for (int i = 0; i < 20; i++)
    {
        welcome();
        system("cls");
    }

    std::string nombre;
    std::string apellido;
    char respuesta0;
    char answer;
    int pasillo;
    int verduras;
    char verdura[100];
    char respuesta;

    std::cout << "Escriba su nombre: ";
    std::cin >> nombre;
    std::cout << "Escriba su apellido: ";
    std::cin >> apellido;

    Cliente c1 = Cliente(nombre, apellido);

    do
    {
        std::cout << "Buenos dias, cuantas cosas va a comprar?(A.Varias / B.pocas): ";
        std::cin >> respuesta0;
    } while ((respuesta0 != 'A') && (respuesta0 != 'B'));

    if (respuesta0 == 'A')
    {
        c1.comprarplus();
    }
    if (respuesta0 == 'B')
    {
        c1.comprarless();
    }
    
    /*
    do
    {
        std::cout << "Buenos dias, viene a comprar algo? (A. Buenos dias, si, vengo a comprar unas cosas para la semana./B. No, me equivoque de tienda, aios.): ";
        std::cin >> answer;

        if (answer == 'A')
        {
            std::cout << "Buenos dias, si, vengo a comprar unas cosas para la semana.\n"; 
        }
        if (answer == 'B')
        {
            std::cout << "No, me equivoque de tienda, aios.\n";
        }
    } while ((answer != 'A') && (answer != 'B'));

    if (answer == 'A')
    {   
        std::cout << "==TENEMOS LOS SIGUIENTES PASILLOS DISPONIBLES==\n";
        std::cout << "|||||||||||||\n";      
        std::cout << "1. Verduras\n2. Carnes\n3. Frutas\n4. Pescado\n5. Dulces\n6. Juguetes";
        std::cout << "\n|||||||||||||\n";

    Return:

        do
        {
            std::cout << "\nA que pasillo quisiera ir?: ";
            std::cin >> pasillo;
        } while ((pasillo != 1) && (pasillo != 2) && (pasillo != 3) && (pasillo != 4) && (pasillo != 5) && (pasillo != 6));

        switch (pasillo)
        {
        case 1:
            std::cout << "Bienvenido al pasillo de Verduras!\n";
            std::cout << "==ESTAS SON LAS VERDURAS CON LAS QUE CONTAMOS EN ESTOS MOMENTOS==\n";
            std::cout << "|||||||||||||\n";
            std::cout << "1. Tomate\n2. Lechuga\n3. Col\n4. Papa\n5. Camote\n6. Yuca";
            std::cout << "\n|||||||||||||\n";
            
            do
            {
                std::cout << "De estos productos, cuantos de aqui va a querer seleccionar?: ";
                std::cin >> verduras;
            } while ((verduras != 1) && (verduras != 2) && (verduras != 3) && (verduras != 4) && (verduras != 5) && (verduras != 6));

            switch (verduras)
            {
            case 1:
                std::cout << "Que verdura va a elegir?: ";
                std::cin >> verdura;

                do
                {
                    std::cout << "Entendido! Desea regresar a otro pasillo o solo comprar ese producto? (A.SI/ B.NO): ";
                    std::cin >> respuesta;
                } while ((respuesta != 'A') && (respuesta != 'B'));

                if (respuesta == 'A')
                {
                    goto Return; 
                }
                if (respuesta == 'B')
                {
                    std::cout << "Vuelva pronto!!!";
                }               
                
                break;
            
            case 2:
                std::cout << "\nQue verduras va a elegir?: ";
                break;

            case 3:
                std::cout << "\nQue verduras va a elegir?: ";
                break;

            case 4:
                std::cout << "\nQue verduras va a elegir?: ";
                break;

            case 5:
                std::cout << "\nQue verduras va a elegir?: ";
                break;

            case 6:
                std::cout << "\nQue verduras va a elegir?: ";
                break;

            default:
                break;
            }

            break;
        
        case 2:
            std::cout << "Bienvenido al pasillo de Carnes!\n";
            break;

        case 3:
            std::cout << "Bienvenido al pasillo de Frutas!\n";
            break;

        case 4:
            std::cout << "Bienvenido al pasillo de Pescado!\n";
            break;

        case 5:
            std::cout << "Bienvenido al pasillo de Dulces!\n";
            break;

        case 6:
            std::cout << "Bienvenido al pasillo de Juguetes!\n";
            break;    

        default:
            break;
        }
    }
    if (answer == 'B')
    {
        std::cout << "Gracias, que tenga un buen dia.\n";
    }
    */   

    system("pause");
    return 0;

}
