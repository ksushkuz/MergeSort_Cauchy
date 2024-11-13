#include "Equation.h"
#include <vector>
#include <chrono>
#include <cmath>
#include <random>
#include <map>
#include <iomanip>

#pragma once

namespace MergeSortCauchy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

 
	/// <summary>
	/// Сводка для MergeSort
	/// </summary>
	public ref class MergeSort : public System::Windows::Forms::Form
	{
	public:
		MergeSort(void)
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
		~MergeSort()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ ntextBox;
	private: System::Windows::Forms::TextBox^ atextBox;
	private: System::Windows::Forms::TextBox^ btextBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ timetextBox;
	private: System::Windows::Forms::TextBox^ comparsiontextBox;
	private: System::Windows::Forms::TextBox^ permutationtextBox;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ sortbutton;
	private: System::Windows::Forms::Button^ clearbutton;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ equationbutton;
	private: System::Windows::Forms::DataGridView^ originallist;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Номер;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Элемент;
	private: System::Windows::Forms::DataGridView^ orderedlist;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MergeSort::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ntextBox = (gcnew System::Windows::Forms::TextBox());
			this->atextBox = (gcnew System::Windows::Forms::TextBox());
			this->btextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->timetextBox = (gcnew System::Windows::Forms::TextBox());
			this->comparsiontextBox = (gcnew System::Windows::Forms::TextBox());
			this->permutationtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->sortbutton = (gcnew System::Windows::Forms::Button());
			this->clearbutton = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->equationbutton = (gcnew System::Windows::Forms::Button());
			this->originallist = (gcnew System::Windows::Forms::DataGridView());
			this->Номер = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Элемент = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->orderedlist = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->originallist))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderedlist))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(-5, -2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 139);
			this->label1->TabIndex = 4;
			this->label1->Text = L"n\r\nA\r\nB\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ntextBox
			// 
			this->ntextBox->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ntextBox->Location = System::Drawing::Point(40, 8);
			this->ntextBox->Name = L"ntextBox";
			this->ntextBox->Size = System::Drawing::Size(180, 27);
			this->ntextBox->TabIndex = 0;
			this->ntextBox->TextChanged += gcnew System::EventHandler(this, &MergeSort::ntextBox_TextChanged);
			this->ntextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MergeSort::ntextBox_KeyPress);
			// 
			// atextBox
			// 
			this->atextBox->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->atextBox->Location = System::Drawing::Point(40, 40);
			this->atextBox->Name = L"atextBox";
			this->atextBox->Size = System::Drawing::Size(180, 27);
			this->atextBox->TabIndex = 1;
			this->atextBox->TextChanged += gcnew System::EventHandler(this, &MergeSort::atextBox_TextChanged);
			this->atextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MergeSort::atextBox_KeyPress);
			// 
			// btextBox
			// 
			this->btextBox->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btextBox->Location = System::Drawing::Point(40, 72);
			this->btextBox->Name = L"btextBox";
			this->btextBox->Size = System::Drawing::Size(180, 27);
			this->btextBox->TabIndex = 2;
			this->btextBox->TextChanged += gcnew System::EventHandler(this, &MergeSort::btextBox_TextChanged);
			this->btextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MergeSort::btextBox_KeyPress);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(232, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(184, 57);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Исходный массив";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(424, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(184, 57);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Упорядоченный массив";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timetextBox
			// 
			this->timetextBox->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timetextBox->Location = System::Drawing::Point(728, 232);
			this->timetextBox->Multiline = true;
			this->timetextBox->Name = L"timetextBox";
			this->timetextBox->ReadOnly = true;
			this->timetextBox->Size = System::Drawing::Size(200, 25);
			this->timetextBox->TabIndex = 11;
			// 
			// comparsiontextBox
			// 
			this->comparsiontextBox->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comparsiontextBox->Location = System::Drawing::Point(728, 280);
			this->comparsiontextBox->Multiline = true;
			this->comparsiontextBox->Name = L"comparsiontextBox";
			this->comparsiontextBox->ReadOnly = true;
			this->comparsiontextBox->Size = System::Drawing::Size(200, 25);
			this->comparsiontextBox->TabIndex = 12;
			// 
			// permutationtextBox
			// 
			this->permutationtextBox->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->permutationtextBox->Location = System::Drawing::Point(728, 328);
			this->permutationtextBox->Multiline = true;
			this->permutationtextBox->Name = L"permutationtextBox";
			this->permutationtextBox->ReadOnly = true;
			this->permutationtextBox->Size = System::Drawing::Size(200, 25);
			this->permutationtextBox->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(608, 224);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 40);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Время, мс:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(608, 264);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 40);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Кол-во сравнений:";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(608, 304);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(115, 48);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Кол-во перестановок:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// sortbutton
			// 
			this->sortbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->sortbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sortbutton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sortbutton->ForeColor = System::Drawing::Color::Black;
			this->sortbutton->Location = System::Drawing::Point(56, 344);
			this->sortbutton->Margin = System::Windows::Forms::Padding(2);
			this->sortbutton->Name = L"sortbutton";
			this->sortbutton->Size = System::Drawing::Size(112, 41);
			this->sortbutton->TabIndex = 19;
			this->sortbutton->Text = L"Сортировка";
			this->sortbutton->UseVisualStyleBackColor = false;
			this->sortbutton->Click += gcnew System::EventHandler(this, &MergeSort::sortbutton_Click);
			// 
			// clearbutton
			// 
			this->clearbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->clearbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clearbutton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clearbutton->ForeColor = System::Drawing::Color::Black;
			this->clearbutton->Location = System::Drawing::Point(56, 392);
			this->clearbutton->Margin = System::Windows::Forms::Padding(2);
			this->clearbutton->Name = L"clearbutton";
			this->clearbutton->Size = System::Drawing::Size(112, 41);
			this->clearbutton->TabIndex = 20;
			this->clearbutton->Text = L"Очистка";
			this->clearbutton->UseVisualStyleBackColor = false;
			this->clearbutton->Click += gcnew System::EventHandler(this, &MergeSort::clearbutton_Click);
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(0, 104);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(224, 61);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Вероятностный закон распределения случайных величин Cauchy";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 256);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(224, 80);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 168);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(224, 80);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(608, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(344, 192);
			this->label2->TabIndex = 25;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// equationbutton
			// 
			this->equationbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->equationbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equationbutton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equationbutton->ForeColor = System::Drawing::Color::Black;
			this->equationbutton->Location = System::Drawing::Point(688, 392);
			this->equationbutton->Margin = System::Windows::Forms::Padding(2);
			this->equationbutton->Name = L"equationbutton";
			this->equationbutton->Size = System::Drawing::Size(184, 40);
			this->equationbutton->TabIndex = 30;
			this->equationbutton->Text = L"Уравнение связи";
			this->equationbutton->UseVisualStyleBackColor = false;
			this->equationbutton->Click += gcnew System::EventHandler(this, &MergeSort::equationbutton_Click);
			// 
			// originallist
			// 
			this->originallist->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->originallist->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Номер, this->Элемент });
			this->originallist->Location = System::Drawing::Point(232, 80);
			this->originallist->Name = L"originallist";
			this->originallist->Size = System::Drawing::Size(184, 360);
			this->originallist->TabIndex = 31;
			// 
			// Номер
			// 
			this->Номер->HeaderText = L"Номер";
			this->Номер->Name = L"Номер";
			this->Номер->ReadOnly = true;
			this->Номер->Width = 50;
			// 
			// Элемент
			// 
			this->Элемент->HeaderText = L"Элемент";
			this->Элемент->Name = L"Элемент";
			this->Элемент->ReadOnly = true;
			// 
			// orderedlist
			// 
			this->orderedlist->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->orderedlist->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2
			});
			this->orderedlist->Location = System::Drawing::Point(424, 80);
			this->orderedlist->Name = L"orderedlist";
			this->orderedlist->Size = System::Drawing::Size(184, 360);
			this->orderedlist->TabIndex = 32;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Номер";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Элемент";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// MergeSort
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(962, 449);
			this->Controls->Add(this->orderedlist);
			this->Controls->Add(this->originallist);
			this->Controls->Add(this->equationbutton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->clearbutton);
			this->Controls->Add(this->sortbutton);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->permutationtextBox);
			this->Controls->Add(this->comparsiontextBox);
			this->Controls->Add(this->timetextBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btextBox);
			this->Controls->Add(this->atextBox);
			this->Controls->Add(this->ntextBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"MergeSort";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Сортировка";
			this->Load += gcnew System::EventHandler(this, &MergeSort::MergeSort_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->originallist))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderedlist))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void MergeSort_Load(System::Object^ sender, System::EventArgs^ e) {
		sortbutton->Enabled = false;
	}
	private: System::Void ntextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (atextBox->Text->Length >= 1 && btextBox->Text->Length >= 1 && ntextBox->Text->Length >= 1)
			sortbutton->Enabled = true;
	}
	private: System::Void atextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (atextBox->Text->Length >= 1 && btextBox->Text->Length >= 1 && ntextBox->Text->Length >= 1)
			sortbutton->Enabled = true;
	}
	private: System::Void btextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (atextBox->Text->Length >= 1 && btextBox->Text->Length >= 1 && ntextBox->Text->Length >= 1)
			sortbutton->Enabled = true;
	}
	private: System::Void equationbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		Equation^ equation = gcnew Equation();
		equation->Show();
	}
	private: System::Void clearbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearOutput();
	}
	private: System::Void ntextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char num = e->KeyChar;
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && num != 8)
		{
			e->Handled = true;
		}
	}
	private: System::Void atextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char num = e->KeyChar;
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && num != 8 && num != 44)
		{
			e->Handled = true;
		}
	}
	private: System::Void btextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char num = e->KeyChar;
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && num != 8 && num != 44)
		{
			e->Handled = true;
		}
	}
	private: void ClearOutput()
	{
		ntextBox->Clear();
		atextBox->Clear();
		btextBox->Clear();
		timetextBox->Clear();
		comparsiontextBox->Clear();
		permutationtextBox->Clear();
		originallist->Rows->Clear();
		orderedlist->Rows->Clear();
		sortbutton->Enabled = false;
	}

	double CauchyDistribution(double a, double b)
	{
		std::random_device gen;
		std::cauchy_distribution<> distr(a, b);
		return distr(gen);
	}

	std::vector<double> generateArray(double a, double b, int size)
	{
		std::vector<double> arr(size);
		for (int i = 0; i < size; i++)
		{
			arr[i] = CauchyDistribution(a, b);
		}
		return arr;	
	}

	void DisplayArrays(std::vector<double>& arr, std::vector<double>& merged_arr, int size)
	{
		originallist->RowCount = size;
		orderedlist->RowCount = size;
		for (int i = 0; i < size; i++)
		{
			originallist->Rows[i]->Cells[0]->Value = i + 1;
			originallist->Rows[i]->Cells[1]->Value = arr[i];
			orderedlist->Rows[i]->Cells[0]->Value = i + 1;
			orderedlist->Rows[i]->Cells[1]->Value = merged_arr[i];
		}
	}
	
	void merge(std::vector<double>& arr, int left, int mid, int right, int& swap, int& comp) {
		int i, j, k;
		int n1 = mid - left + 1;
		int n2 = right - mid;

		// Создание временных массивов
		std::vector<double> L(n1), R(n2);

		// Копирование данных во временные массивы L[] и R[]
		for (i = 0; i < n1; i++)
			L[i] = arr[left + i];
		for (j = 0; j < n2; j++)
			R[j] = arr[mid + 1 + j];

		// Слияние временных массивов обратно в arr[left..right]
		i = 0;
		j = 0;
		k = left;
		while (i < n1 && j < n2) {
			comp++;
			if (L[i] <= R[j]) {
				arr[k] = L[i];
				i++;
			}
			else {
				swap++;
				arr[k] = R[j];
				j++;
			}
			k++;
		}

		// Копирование оставшихся элементов L[], если они есть
		while (i < n1) {
			arr[k] = L[i];
			i++;
			k++;
		}

		// Копирование оставшихся элементов R[], если они есть
		while (j < n2) {
			arr[k] = R[j];
			j++;
			k++;
		}
	}

	void mergeSort(std::vector<double>& arr, int left, int right, int& swap, int& comp) {
		if (left < right) {
			int mid = left + (right - left) / 2;

			// Рекурсивно сортируем два подмассива
			mergeSort(arr, left, mid, swap, comp);
			mergeSort(arr, mid + 1, right, swap, comp);

			// Слияние двух отсортированных подмассивов
			merge(arr, left, mid, right, swap, comp);
		}
	}

	private: System::Void sortbutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int size = Convert::ToInt32(ntextBox->Text);
		double a = Convert::ToDouble(atextBox->Text);
		double b = Convert::ToDouble(btextBox->Text);

		if (b > 0.0) {
			int comp = 0;
			int swap = 0;

			std::vector<double> arr = generateArray(a, b, size);
			std::vector<double> arrMerge = arr;

			// Измерение времени сортировки 
			auto startMerge = std::chrono::high_resolution_clock::now();
			mergeSort(arrMerge, 0, size - 1, swap, comp);
			auto endMerge = std::chrono::high_resolution_clock::now();
			auto timeMerge = std::chrono::duration_cast<std::chrono::milliseconds>(endMerge - startMerge);

			DisplayArrays(arr, arrMerge, size);
			timetextBox->Text = Convert::ToString(timeMerge.count());
			comparsiontextBox->Text = Convert::ToString(comp);
			permutationtextBox->Text = Convert::ToString(swap);
		}
		else {
			MessageBox::Show("Второй параметр должен быть больше 0.0 ", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			btextBox->Clear();
		}
	}
};
}
