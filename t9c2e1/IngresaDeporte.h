#pragma once

namespace t9c2e1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IngresaDeporte
	/// </summary>
	public ref class IngresaDeporte : public System::Windows::Forms::Form
	{
	public:
		IngresaDeporte(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IngresaDeporte()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  nombre;
	private: System::Windows::Forms::TextBox^  federacion;
	private: System::Windows::Forms::MaskedTextBox^  jugadores;
	private: System::Windows::Forms::Button^  btnOK;
	private: System::Windows::Forms::Button^  btnCancel;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nombre = (gcnew System::Windows::Forms::TextBox());
			this->federacion = (gcnew System::Windows::Forms::TextBox());
			this->jugadores = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Federación:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Jugadores:";
			// 
			// nombre
			// 
			this->nombre->Location = System::Drawing::Point(82, 12);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(100, 20);
			this->nombre->TabIndex = 3;
			// 
			// federacion
			// 
			this->federacion->Location = System::Drawing::Point(82, 38);
			this->federacion->Name = L"federacion";
			this->federacion->Size = System::Drawing::Size(100, 20);
			this->federacion->TabIndex = 4;
			// 
			// jugadores
			// 
			this->jugadores->Location = System::Drawing::Point(82, 64);
			this->jugadores->Name = L"jugadores";
			this->jugadores->Size = System::Drawing::Size(100, 20);
			this->jugadores->TabIndex = 5;
			// 
			// btnOK
			// 
			this->btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnOK->Location = System::Drawing::Point(26, 111);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(75, 23);
			this->btnOK->TabIndex = 6;
			this->btnOK->Text = L"Aceptar";
			this->btnOK->UseVisualStyleBackColor = true;
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(107, 111);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 7;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// IngresaDeporte
			// 
			this->AcceptButton = this->btnOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(200, 146);
			this->ControlBox = false;
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->jugadores);
			this->Controls->Add(this->federacion);
			this->Controls->Add(this->nombre);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"IngresaDeporte";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"IngresaDeporte";
			this->Load += gcnew System::EventHandler(this, &IngresaDeporte::IngresaDeporte_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void IngresaDeporte_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

   public:
	   System::String^ getNombre() 
	   {
		   return this->nombre->Text;
	   }

	   System::String^ getFederacion() 
	   {
		   return this->federacion->Text;
	   }

	   int getJugadores()
	   {
		   return int::Parse(this->jugadores->Text);
	   }

};
}
