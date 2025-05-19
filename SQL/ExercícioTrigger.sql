create database auladml;
use auladml;

CREATE TABLE banco (
    codigo INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(45)
);

CREATE TABLE agencia (
    numero_agencia INT NOT NULL,
    cod_banco INT NOT NULL,
    endereco VARCHAR(100),
    CONSTRAINT PRIMARY KEY (numero_agencia , cod_banco),
    CONSTRAINT fk_banco FOREIGN KEY (cod_banco)
        REFERENCES banco (codigo)
);

CREATE TABLE cliente (
    cpf VARCHAR(14) NOT NULL PRIMARY KEY,
    nome VARCHAR(45) NOT NULL,
    endereco VARCHAR(100),
    sexo CHAR(1)
);

CREATE TABLE conta (
    num_conta VARCHAR(7) PRIMARY KEY,
    saldo FLOAT NOT NULL DEFAULT 0,
    tipo_conta INT,
    num_agencia INT,
    CONSTRAINT fk_agencia FOREIGN KEY (num_agencia)
        REFERENCES agencia (numero_agencia)
);

CREATE TABLE historico (
    cpf VARCHAR(14) NOT NULL,
    num_conta VARCHAR(7),
    data_inicio DATE,
    CONSTRAINT PRIMARY KEY (cpf , num_conta),
    CONSTRAINT fk_cpf FOREIGN KEY (cpf)
        REFERENCES cliente (cpf),
    CONSTRAINT fk_numconta FOREIGN KEY (num_conta)
        REFERENCES conta (num_conta)
);

CREATE TABLE telefone_cliente (
    cpf_cli VARCHAR(14) NOT NULL,
    telefone VARCHAR(20),
    CONSTRAINT PRIMARY KEY (cpf_cli , telefone),
    CONSTRAINT fk_cpf_cliente FOREIGN KEY (cpf_cli)
        REFERENCES cliente (cpf)
);

insert into banco values (1, "Banco do Brasil");
insert into banco values (4, "CEF");
insert into banco values (null, "Bradesco");

insert into agencia values (0582, 4, "Rua Joaquim Teixeira, 1555");
insert into agencia values (3153, 1, "Av Marcelino Pires, 1960");

insert into cliente values ("111.222.333-44", "Jennifer B Souza", "Rua Cuiabá, 1050", "F");
insert into cliente values ("666.777.888-99", "Caetano K lima", "Rua Invinhema, 879", "M");
insert into cliente values ("555.444.777-33", "Silva Macedo", "Rua Estados Unidos, 735", "F");

insert into conta values("86340-2", 763.05, 2, 3153);
insert into conta values("23584-7", 3879.12, 1, 0582);

insert into historico values ("111.222.333-44", "23584-7", str_to_date("17-12-1997", "%d-%m-%Y"));
insert into historico values ("666.777.888-99", "23584-7", str_to_date("17-12-1997", "%d-%m-%Y"));
insert into historico values ("555.444.777-33", "86340-2", str_to_date("29-11-2010", "%d-%m-%Y"));
 
insert into telefone_cliente values ("111.222.333-44", "(67)3422-7788" );
insert into telefone_cliente values ("666.777.888-99", "(67)3423-9900" );

insert into telefone_cliente values ("666.777.888-99", "(67)8121-8833" );

-- Lista 01
alter table telefone_cliente
alter column telefone set default "123456";

delimiter //
create trigger inserir_padrao_telefone
after insert on cliente
	for each row
    begin
		insert into telefone_cliente (telefone) values (default);
	end //
delimiter ;

-- Lista 02
delimiter //
create trigger deletar_cliente_telefone
after delete on cliente
	for each row
    begin
		delete from telefone_cliente where cpf_cli = old.cpf;
	end //
delimiter ;

-- Lista 03
create table log_registro (
	id_log int auto_increment primary key,
    num_conta varchar(7),
    saldo_antigo float,
    tipo_conta_antigo int,
    num_agencia_antigo int,
    saldo_novo float,
    tipo_conta_novo int,
    num_agencia_novo int,
    data_operacao timestamp default current_timestamp
);

delimiter //
	create trigger registro_dados_atualizacao
    after update on conta
		for each row
        begin
			insert into log_registro values (old.num_conta, old.saldo, old.tipo_conta, old.num_agencia,
											 new.num_conta, new.saldo, new.tipo_conta, new.num_agencia);
		end //
delimiter ;

-- Lista 04
create or replace view cliente_info as
	select cli.nome as nome_cliente, b.nome as nome_banco, a.endereco, con.num_conta from cliente cli
	join historico h on cli.cpf = h.cpf
	join conta con on h.num_conta = con.num_conta
	join agencia a on con.num_agencia = a.numero_agencia
	join banco b on a.cod_banco = b.codigo;
    
    SELECT * FROM cliente_info;