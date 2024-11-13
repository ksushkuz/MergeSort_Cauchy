#pragma once
#include "TechSpec.h"
#include "MergeSort.h"

namespace MergeSortCauchy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ name;
	protected:

	private: System::Windows::Forms::Button^ appbutton;
	private: System::Windows::Forms::Button^ techspecbutton;


	protected:


	private: System::Windows::Forms::Button^ exit;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->name = (gcnew System::Windows::Forms::Label());
			this->appbutton = (gcnew System::Windows::Forms::Button());
			this->techspecbutton = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->name->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->name->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->name->ForeColor = System::Drawing::Color::Black;
			this->name->Location = System::Drawing::Point(0, 16);
			this->name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(974, 281);
			this->name->TabIndex = 0;
			this->name->Text = resources->GetString(L"name.Text");
			this->name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// appbutton
			// 
			this->appbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->appbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->appbutton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->appbutton->ForeColor = System::Drawing::Color::Black;
			this->appbutton->Location = System::Drawing::Point(136, 336);
			this->appbutton->Margin = System::Windows::Forms::Padding(2);
			this->appbutton->Name = L"appbutton";
			this->appbutton->Size = System::Drawing::Size(225, 57);
			this->appbutton->TabIndex = 1;
			this->appbutton->Text = L"Приложение";
			this->appbutton->UseVisualStyleBackColor = false;
			this->appbutton->Click += gcnew System::EventHandler(this, &MyForm::appbutton_Click);
			// 
			// techspecbutton
			// 
			this->techspecbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->techspecbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->techspecbutton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->techspecbutton->ForeColor = System::Drawing::Color::Black;
			this->techspecbutton->Location = System::Drawing::Point(608, 336);
			this->techspecbutton->Margin = System::Windows::Forms::Padding(2);
			this->techspecbutton->Name = L"techspecbutton";
			this->techspecbutton->Size = System::Drawing::Size(225, 57);
			this->techspecbutton->TabIndex = 2;
			this->techspecbutton->Text = L"Техническое задание";
			this->techspecbutton->UseVisualStyleBackColor = false;
			this->techspecbutton->Click += gcnew System::EventHandler(this, &MyForm::techspecbutton_Click);
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->exit->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->exit->ForeColor = System::Drawing::Color::Black;
			this->exit->Location = System::Drawing::Point(376, 416);
			this->exit->Margin = System::Windows::Forms::Padding(2);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(225, 57);
			this->exit->TabIndex = 3;
			this->exit->Text = L"Выход";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(975, 488);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->techspecbutton);
			this->Controls->Add(this->appbutton);
			this->Controls->Add(this->name);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void techspecbutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		TechSpec^ techspec = gcnew TechSpec();
		techspec->Show();
	}

	private: System::Void appbutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		MergeSort^ merge = gcnew MergeSort();
		merge->Show();
	}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}

};
}
