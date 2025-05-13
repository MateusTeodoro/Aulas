package exerciciopolimorfismo;

public class PessoaJuridica extends Pessoa
{
    private String cnpj;

    public String getCnpj() 
    {
        return cnpj;
    }

    public void setCnpj(String cnpj) 
    {
        this.cnpj = cnpj;
    }
    
    public void cadastro()
    {
        if (cnpj.length() == 14)
        {
            System.out.println("CNPJ válido!");
        }
        else
        {
            System.out.println("CNPJ inválido!");
        }
    }
}
