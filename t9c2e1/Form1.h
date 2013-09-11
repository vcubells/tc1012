#pragma once
#include "IngresaDeporte.h"
#include "Deporte.h"

namespace t9c2e1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			deportes = gcnew ArrayList();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  ingresarDeporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  listarDeportesToolStripMenuItem;

	private: ArrayList^ deportes;
	private: System::Windows::Forms::ToolStripMenuItem^  mostrarToolStripMenuItem;
	private: System::Windows::Forms::ListBox^  lista;
	private: System::Windows::Forms::Button^  borrar;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ingresarDeporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listarDeportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mostrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lista = (gcnew System::Windows::Forms::ListBox());
			this->borrar = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->ingresarDeporteToolStripMenuItem, 
				this->listarDeportesToolStripMenuItem, this->mostrarToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(306, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ingresarDeporteToolStripMenuItem
			// 
			this->ingresarDeporteToolStripMenuItem->Name = L"ingresarDeporteToolStripMenuItem";
			this->ingresarDeporteToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->ingresarDeporteToolStripMenuItem->Text = L"Ingresar deporte";
			this->ingresarDeporteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ingresarDeporteToolStripMenuItem_Click);
			// 
			// listarDeportesToolStripMenuItem
			// 
			this->listarDeportesToolStripMenuItem->Name = L"listarDeportesToolStripMenuItem";
			this->listarDeportesToolStripMenuItem->Size = System::Drawing::Size(132, 20);
			this->listarDeportesToolStripMenuItem->Text = L"No Jugadores Atletismo";
			this->listarDeportesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::listarDeportesToolStripMenuItem_Click);
			// 
			// mostrarToolStripMenuItem
			// 
			this->mostrarToolStripMenuItem->Name = L"mostrarToolStripMenuItem";
			this->mostrarToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->mostrarToolStripMenuItem->Text = L"Mostrar";
			this->mostrarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mostrarToolStripMenuItem_Click);
			// 
			// lista
			// 
			this->lista->FormattingEnabled = true;
			this->lista->Location = System::Drawing::Point(12, 39);
			this->lista->Name = L"lista";
			this->lista->Size = System::Drawing::Size(283, 108);
			this->lista->TabIndex = 1;
			// 
			// borrar
			// 
			this->borrar->Location = System::Drawing::Point(279, 153);
			this->borrar->Name = L"borrar";
			this->borrar->Size = System::Drawing::Size(15, 23);
			this->borrar->TabIndex = 2;
			this->borrar->Text = L"-";
			this->borrar->UseVisualStyleBackColor = true;
			this->borrar->Click += gcnew System::EventHandler(this, &Form1::borrar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(306, 188);
			this->Controls->Add(this->borrar);
			this->Controls->Add(this->lista);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Deportes";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
	
	private: System::Void ingresarDeporteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				IngresaDeporte ^ dlg = gcnew IngresaDeporte();	
				if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					Deporte^ d = gcnew Deporte(dlg->getNombre(),
							  dlg->getFederacion(),
							  dlg->getJugadores());
					

					deportes->Add(d);
					lista->Items->Add(d->getNombre() + " " + d->getFederacion() + " " + d->getJugadores().ToString() + " jugadores" );
				}

				delete dlg;
			 }

	private: System::Void listarDeportesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 int jug = 0;
				 for(int i=0; i < deportes->Count; ++i)
				 {
					 if( ((Deporte ^ )deportes->default[i])->getFederacion() == "Atletismo")
						 jug += ((Deporte ^ )deportes->default[i])->getJugadores();
				 }
				 MessageBox::Show(jug.ToString() + " jugadores de Atletismo.");
			 }
private: System::Void mostrarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			lista->Items->Clear();
			 for(int i=0; i < deportes->Count; ++i)
				 {
					 Deporte^ d = (Deporte ^) deportes->default[i];
					 lista->Items->Add(d->getNombre() + " " + d->getFederacion() + " " + d->getJugadores().ToString() + " jugadores" );
				 }

		 }
private: System::Void borrar_Click(System::Object^  sender, System::EventArgs^  e) {
			if (lista->SelectedIndex >= 0)
			 lista->Items->RemoveAt(lista->SelectedIndex);
		 }
};
}

