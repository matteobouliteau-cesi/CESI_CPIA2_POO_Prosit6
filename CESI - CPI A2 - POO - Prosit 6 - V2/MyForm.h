#pragma once
#include "CLservice.h"

namespace P6new {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r sum e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:

	private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_prenom;



	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ Adresse;
	private: System::Windows::Forms::TextBox^ txt_adresse;
	private: System::Windows::Forms::TextBox^ txt_codepostal;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_ville;

	protected:

	private:
		/// <summary>
		/// Variable n cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m thode avec l' diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Adresse = (gcnew System::Windows::Forms::Label());
			this->txt_adresse = (gcnew System::Windows::Forms::TextBox());
			this->txt_codepostal = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_ville = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->BackgroundColor = System::Drawing::Color::Lavender;
			this->dgv_enr->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(16, 15);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(629, 185);
			this->dgv_enr->TabIndex = 0;
			// 
			// btn_load
			// 
			this->btn_load->BackColor = System::Drawing::Color::MediumPurple;
			this->btn_load->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_load->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_load->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_load->Location = System::Drawing::Point(546, 343);
			this->btn_load->Margin = System::Windows::Forms::Padding(4);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(100, 33);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Charger";
			this->btn_load->UseVisualStyleBackColor = false;
			this->btn_load->Click += gcnew System::EventHandler(this, &MyForm::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(16, 343);
			this->btn_insert->Margin = System::Windows::Forms::Padding(4);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(100, 33);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Insérer";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(124, 343);
			this->btn_delete->Margin = System::Windows::Forms::Padding(4);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(100, 33);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Supprimer";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(232, 343);
			this->btn_update->Margin = System::Windows::Forms::Padding(4);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(100, 33);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"Modifier";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Click);
			// 
			// txt_id
			// 
			this->txt_id->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txt_id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_id->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txt_id->Location = System::Drawing::Point(129, 227);
			this->txt_id->Margin = System::Windows::Forms::Padding(4);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(160, 22);
			this->txt_id->TabIndex = 5;
			// 
			// txt_nom
			// 
			this->txt_nom->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txt_nom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_nom->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txt_nom->Location = System::Drawing::Point(129, 259);
			this->txt_nom->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(160, 22);
			this->txt_nom->TabIndex = 6;
			// 
			// txt_prenom
			// 
			this->txt_prenom->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txt_prenom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_prenom->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txt_prenom->Location = System::Drawing::Point(129, 292);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(160, 22);
			this->txt_prenom->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 232);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 264);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Nom de famille";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 294);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Prénom";
			// 
			// Adresse
			// 
			this->Adresse->AutoSize = true;
			this->Adresse->Location = System::Drawing::Point(315, 232);
			this->Adresse->Name = L"Adresse";
			this->Adresse->Size = System::Drawing::Size(60, 17);
			this->Adresse->TabIndex = 12;
			this->Adresse->Text = L"Adresse";
			// 
			// txt_adresse
			// 
			this->txt_adresse->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txt_adresse->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_adresse->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txt_adresse->Location = System::Drawing::Point(408, 227);
			this->txt_adresse->Margin = System::Windows::Forms::Padding(4);
			this->txt_adresse->Name = L"txt_adresse";
			this->txt_adresse->Size = System::Drawing::Size(238, 22);
			this->txt_adresse->TabIndex = 13;
			// 
			// txt_codepostal
			// 
			this->txt_codepostal->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txt_codepostal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_codepostal->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txt_codepostal->Location = System::Drawing::Point(408, 259);
			this->txt_codepostal->Margin = System::Windows::Forms::Padding(4);
			this->txt_codepostal->Name = L"txt_codepostal";
			this->txt_codepostal->Size = System::Drawing::Size(237, 22);
			this->txt_codepostal->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(315, 264);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Code postal";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(315, 294);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 17);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Ville";
			// 
			// txt_ville
			// 
			this->txt_ville->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txt_ville->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_ville->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txt_ville->Location = System::Drawing::Point(408, 289);
			this->txt_ville->Margin = System::Windows::Forms::Padding(4);
			this->txt_ville->Name = L"txt_ville";
			this->txt_ville->Size = System::Drawing::Size(237, 22);
			this->txt_ville->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(675, 409);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_ville);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_codepostal);
			this->Controls->Add(this->txt_adresse);
			this->Controls->Add(this->Adresse);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Opacity = 0.95;
			this->Text = L"Formulaire moderne de Mattéo";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnePersonne(this->txt_id->Text, this->txt_nom->Text, this->txt_prenom->Text, this->txt_adresse->Text, this->txt_codepostal->Text, this->txt_ville->Text);
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->modifierUnePersonne(this->txt_id->Text, this->txt_nom->Text, this->txt_prenom->Text, this->txt_adresse->Text, this->txt_codepostal->Text, this->txt_ville->Text);
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerUnePersonne(this->txt_id->Text);
	}

};
}