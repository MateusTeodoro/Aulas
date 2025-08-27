
package com.mycompany.prjveiculoarquivo.menu;

import com.mycompany.prjveiculoarquivo.classes.Carro;
import com.mycompany.prjveiculoarquivo.classes.EscreverVeiculo;
import com.mycompany.prjveiculoarquivo.classes.Moto;
import com.mycompany.prjveiculoarquivo.classes.Veiculo;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class MenuSecundario 
{
    public static void menu2()
    {
        Scanner sc = new Scanner(System.in);
        List<Veiculo> lista = new ArrayList();
        EscreverVeiculo ev = new EscreverVeiculo();
        int opcao2 = -1;
        
        while(opcao2 != 0)
        {
            System.out.println("1 - Carro");
            System.out.println("2 - Moto");
            System.out.println("0 - Retornar");
            opcao2 = sc.nextInt();
            sc.nextLine();
            
            switch(opcao2)
            {
                case 0:
                    System.out.println("Retornando...");
                    break;
                    
                case 1:
                        
                    Carro car = new Carro();
                    car.setTipo("Carro");
                    System.out.println("Marca: ");
                    car.setMarca(sc.nextLine());
                    System.out.println("Modelo: ");
                    car.setModelo(sc.nextLine());
                    System.out.println("Ano: ");
                    car.setAno(sc.nextLine());
                    System.out.println("Cor: ");
                    car.setCor(sc.nextLine());
                    System.out.println("Quantidade de cavalos do motor: ");
                    car.setCavalos(sc.nextLine());
                    System.out.println("Numero de portas: ");
                    car.setNumPortas(sc.nextLine());
                         
                    lista.add(car);
                            
                    String dados = car.getTipo() + "; " + car.getMarca() + "; " + car.getModelo() + "; " + car.getAno() + "; " + car.getCor() + "; " + car.getCavalos() + "; " + car.getNumPortas();
                        
                    ev.escrever(dados);
                    System.out.println("Carro adicionado!");
                    break;
                       
                case 2:
                        
                    Moto moto = new Moto();
                    moto.setTipo("Moto");
                    System.out.println("Marca: ");
                    moto.setMarca(sc.nextLine());
                    System.out.println("Modelo: ");
                    moto.setModelo(sc.nextLine());
                    System.out.println("Ano: ");
                    moto.setAno(sc.nextLine());
                    System.out.println("Cor: ");
                    moto.setCor(sc.nextLine());
                    System.out.println("Cilindradas do motor: ");
                    moto.setCilindradas(sc.nextLine());
                    System.out.println("Estilo: ");
                    moto.setEstilo(sc.nextLine());
                    lista.add(moto);
                            
                    String dados2 = moto.getTipo() + "; " + moto.getMarca() + "; " + moto.getModelo() + "; " + moto.getAno() + "; " + moto.getCor() + "; " + moto.getCilindradas() + "; " + moto.getEstilo();
                    ev.escrever(dados2);
                    System.out.println("Moto adicionada!");
                    break;
                    
                default:
                    System.out.println("Valor invalido!");
            }
        }
    }
}
