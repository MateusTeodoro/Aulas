package exerciciopolimorfismo;

public class Principal 
{
    public static void main(String[] args) 
    {
        Pessoa p = new Pessoa();
        p.setNome("Igor");
        p.cadastro();
        
        System.out.println("************************************");
        
        PessoaFisica p1 = new PessoaFisica();
        p1.setNome("Marcos");
        p1.setCpf("12345678910");
        p1.cadastro();
        
        System.out.println("************************************");
        
        PessoaJuridica p2 = new PessoaJuridica();
        p2.setNome("Ana");
        p2.setCnpj("12345678910111");
        p2.cadastro();
        
        System.out.println("************************************");
    }
}
