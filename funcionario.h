#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario{
protected:
		int id;
		string nome;
		string cpf;
		short idade;
		string tipo_sanguineo;
		char fator_rh;
		string especialidade;
public:
		Funcionario(int id, string nome, string cpf, short idade, string tipo_sanguineo, char fator_rh, string especialidade);
		void setId(int id);
		int getId();
		void setNome(string nome);
		string getNome();
		void setCpf(string cpf);
		string getCpf();
		void setIdade(short idade);
		short getIdade();
		void setTipo_sanguineo(string tipo_sanguineo);
		string getTipo_sanguineo();
		void setFator_rh(char fator_rh);
		char getFator_rh();
		void setId(int id);
		int getId();
		void setNome(string nome);
		string getNome();
		void setCpf(string cpf);
		string getCpf();
		void setIdade(short idade);
		short getIdade();
		void setTipo_sanguineo(string tipo_sanguineo);
		string getTipo_sanguineo();
		void setFator_rh(char fator_rh);
		char getFator_rh();
		void setEspecialidade(string especialidade);
		string getEspecialidade();
    ~Funcionario();
};

#endif
