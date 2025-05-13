package prjaulapolimorfismo2;

public class Principal 
{

    public static void main(String[] args) 
    {
        Animal a1 = new Animal();
        a1.som();
        
        Animal a2 = new Cachorro();
        a2.som();
        
        Animal a3 = new Gato();
        a3.som();
    }
    
}
