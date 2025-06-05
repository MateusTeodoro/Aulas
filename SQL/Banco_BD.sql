CREATE DATABASE integracao_banco;
USE integracao_banco;

create table Fornecedor(
id int primary key not null auto_increment,
nome varchar(45) not null,
cnpj varchar(45) not null
);

insert into Fornecedor
values(null, 'Fernando','12345678910131');

insert into Fornecedor
values(null, 'Maria', '12345678990873');

insert into Fornecedor
values(null, 'Leandro', '12345678934764');

insert into Fornecedor
values(null, 'Ronaldo', '12345678956735');

select * from Fornecedor;

