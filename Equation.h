#include <vector>
#include <time.h> 
#include<algorithm> 

#pragma once

namespace MergeSortCauchy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Equation
	/// </summary>
	public ref class Equation : public System::Windows::Forms::Form
	{
	public:
		Equation(void)
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
		~Equation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label10;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_mm;
	private: System::Windows::Forms::TextBox^ textBox_m;
	private: System::Windows::Forms::TextBox^ textBox_sumy;
	private: System::Windows::Forms::TextBox^ textBox_sumx2;
	private: System::Windows::Forms::TextBox^ textBox_sumxx;
	private: System::Windows::Forms::TextBox^ textBox_sumyx;
	private: System::Windows::Forms::TextBox^ textBox_a0;
	private: System::Windows::Forms::TextBox^ textBox_a1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox_beta;
	private: System::Windows::Forms::TextBox^ textBox_cor;
	private: System::Windows::Forms::TextBox^ textBox_det;
	private: System::Windows::Forms::TextBox^ textBox_el;
	private: System::Windows::Forms::Button^ sortbutton;
	private: System::Windows::Forms::Button^ clearbutton;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::TextBox^ textBox_sumx;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_size;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_xx;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_xy;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_mm = (gcnew System::Windows::Forms::TextBox());
			this->textBox_m = (gcnew System::Windows::Forms::TextBox());
			this->textBox_sumy = (gcnew System::Windows::Forms::TextBox());
			this->textBox_sumx2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_sumxx = (gcnew System::Windows::Forms::TextBox());
			this->textBox_sumyx = (gcnew System::Windows::Forms::TextBox());
			this->textBox_a0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_a1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_beta = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cor = (gcnew System::Windows::Forms::TextBox());
			this->textBox_det = (gcnew System::Windows::Forms::TextBox());
			this->textBox_el = (gcnew System::Windows::Forms::TextBox());
			this->sortbutton = (gcnew System::Windows::Forms::Button());
			this->clearbutton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox_sumx = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Column_num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_size = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_xx = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_xy = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(8, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(304, 40);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Количество наблюдений (M) =";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(8, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(388, 28);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Исходные статистические данные";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(24, 330);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(360, 26);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Система нормальных уравнений";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox_mm
			// 
			this->textBox_mm->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_mm->Location = System::Drawing::Point(25, 359);
			this->textBox_mm->Name = L"textBox_mm";
			this->textBox_mm->ReadOnly = true;
			this->textBox_mm->Size = System::Drawing::Size(88, 27);
			this->textBox_mm->TabIndex = 27;
			// 
			// textBox_m
			// 
			this->textBox_m->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_m->Location = System::Drawing::Point(280, 8);
			this->textBox_m->Name = L"textBox_m";
			this->textBox_m->Size = System::Drawing::Size(104, 27);
			this->textBox_m->TabIndex = 58;
			this->textBox_m->TextChanged += gcnew System::EventHandler(this, &Equation::textBox_m_TextChanged);
			this->textBox_m->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Equation::textBox_m_KeyPress);
			// 
			// textBox_sumy
			// 
			this->textBox_sumy->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_sumy->Location = System::Drawing::Point(297, 359);
			this->textBox_sumy->Name = L"textBox_sumy";
			this->textBox_sumy->ReadOnly = true;
			this->textBox_sumy->Size = System::Drawing::Size(88, 27);
			this->textBox_sumy->TabIndex = 29;
			// 
			// textBox_sumx2
			// 
			this->textBox_sumx2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_sumx2->Location = System::Drawing::Point(25, 392);
			this->textBox_sumx2->Name = L"textBox_sumx2";
			this->textBox_sumx2->ReadOnly = true;
			this->textBox_sumx2->Size = System::Drawing::Size(88, 27);
			this->textBox_sumx2->TabIndex = 30;
			// 
			// textBox_sumxx
			// 
			this->textBox_sumxx->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_sumxx->Location = System::Drawing::Point(160, 392);
			this->textBox_sumxx->Name = L"textBox_sumxx";
			this->textBox_sumxx->ReadOnly = true;
			this->textBox_sumxx->Size = System::Drawing::Size(88, 27);
			this->textBox_sumxx->TabIndex = 31;
			// 
			// textBox_sumyx
			// 
			this->textBox_sumyx->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_sumyx->Location = System::Drawing::Point(297, 392);
			this->textBox_sumyx->Name = L"textBox_sumyx";
			this->textBox_sumyx->ReadOnly = true;
			this->textBox_sumyx->Size = System::Drawing::Size(88, 27);
			this->textBox_sumyx->TabIndex = 32;
			// 
			// textBox_a0
			// 
			this->textBox_a0->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_a0->Location = System::Drawing::Point(78, 446);
			this->textBox_a0->Name = L"textBox_a0";
			this->textBox_a0->ReadOnly = true;
			this->textBox_a0->Size = System::Drawing::Size(104, 27);
			this->textBox_a0->TabIndex = 33;
			// 
			// textBox_a1
			// 
			this->textBox_a1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_a1->Location = System::Drawing::Point(281, 446);
			this->textBox_a1->Name = L"textBox_a1";
			this->textBox_a1->ReadOnly = true;
			this->textBox_a1->Size = System::Drawing::Size(104, 27);
			this->textBox_a1->TabIndex = 34;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(56, 505);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(136, 27);
			this->textBox8->TabIndex = 35;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(224, 505);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(136, 27);
			this->textBox9->TabIndex = 36;
			// 
			// textBox_beta
			// 
			this->textBox_beta->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_beta->Location = System::Drawing::Point(266, 634);
			this->textBox_beta->Name = L"textBox_beta";
			this->textBox_beta->ReadOnly = true;
			this->textBox_beta->Size = System::Drawing::Size(120, 27);
			this->textBox_beta->TabIndex = 37;
			// 
			// textBox_cor
			// 
			this->textBox_cor->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_cor->Location = System::Drawing::Point(266, 538);
			this->textBox_cor->Name = L"textBox_cor";
			this->textBox_cor->ReadOnly = true;
			this->textBox_cor->Size = System::Drawing::Size(120, 27);
			this->textBox_cor->TabIndex = 38;
			// 
			// textBox_det
			// 
			this->textBox_det->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_det->Location = System::Drawing::Point(266, 570);
			this->textBox_det->Name = L"textBox_det";
			this->textBox_det->ReadOnly = true;
			this->textBox_det->Size = System::Drawing::Size(120, 27);
			this->textBox_det->TabIndex = 39;
			// 
			// textBox_el
			// 
			this->textBox_el->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_el->Location = System::Drawing::Point(266, 601);
			this->textBox_el->Name = L"textBox_el";
			this->textBox_el->ReadOnly = true;
			this->textBox_el->Size = System::Drawing::Size(120, 27);
			this->textBox_el->TabIndex = 40;
			// 
			// sortbutton
			// 
			this->sortbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->sortbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sortbutton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sortbutton->ForeColor = System::Drawing::Color::Black;
			this->sortbutton->Location = System::Drawing::Point(70, 668);
			this->sortbutton->Margin = System::Windows::Forms::Padding(2);
			this->sortbutton->Name = L"sortbutton";
			this->sortbutton->Size = System::Drawing::Size(120, 35);
			this->sortbutton->TabIndex = 41;
			this->sortbutton->Text = L"Расчет";
			this->sortbutton->UseVisualStyleBackColor = false;
			this->sortbutton->Click += gcnew System::EventHandler(this, &Equation::sortbutton_Click);
			// 
			// clearbutton
			// 
			this->clearbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->clearbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clearbutton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clearbutton->ForeColor = System::Drawing::Color::Black;
			this->clearbutton->Location = System::Drawing::Point(214, 668);
			this->clearbutton->Margin = System::Windows::Forms::Padding(2);
			this->clearbutton->Name = L"clearbutton";
			this->clearbutton->Size = System::Drawing::Size(120, 35);
			this->clearbutton->TabIndex = 42;
			this->clearbutton->Text = L"Очистка";
			this->clearbutton->UseVisualStyleBackColor = false;
			this->clearbutton->Click += gcnew System::EventHandler(this, &Equation::clearbutton_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(25, 422);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(359, 24);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Коэффициенты уравнения связи";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(24, 443);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 32);
			this->label4->TabIndex = 44;
			this->label4->Text = L"a0 =";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(232, 443);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 32);
			this->label5->TabIndex = 45;
			this->label5->Text = L"a1 =";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(249, 392);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 32);
			this->label6->TabIndex = 46;
			this->label6->Text = L"a1 =";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(249, 359);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 32);
			this->label7->TabIndex = 47;
			this->label7->Text = L"a1 =";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(112, 359);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 32);
			this->label8->TabIndex = 48;
			this->label8->Text = L"a0 +";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(112, 392);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 32);
			this->label9->TabIndex = 49;
			this->label9->Text = L"a0 +";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(8, 477);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(384, 24);
			this->label11->TabIndex = 50;
			this->label11->Text = L"Уравнение связи:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(25, 540);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(242, 24);
			this->label12->TabIndex = 51;
			this->label12->Text = L"Коэффициент корреляции =\r\n";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(25, 570);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(242, 24);
			this->label13->TabIndex = 52;
			this->label13->Text = L"Коэффициент детерминации =\r\n";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(25, 601);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(242, 24);
			this->label14->TabIndex = 53;
			this->label14->Text = L"Коэффициент эластичности =\r\n";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(25, 634);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(242, 24);
			this->label15->TabIndex = 54;
			this->label15->Text = L"бета-коэффициент  =\r\n";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(8, 505);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(48, 32);
			this->label16->TabIndex = 55;
			this->label16->Text = L"y =";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(191, 505);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(32, 32);
			this->label17->TabIndex = 56;
			this->label17->Text = L"+";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(359, 505);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(32, 32);
			this->label18->TabIndex = 57;
			this->label18->Text = L"x";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// chart
			// 
			this->chart->BackColor = System::Drawing::Color::Silver;
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			this->chart->Location = System::Drawing::Point(406, 11);
			this->chart->Name = L"chart";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			series1->Name = L"Series1";
			series2->BorderWidth = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series2->Name = L"Series2";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Size = System::Drawing::Size(698, 695);
			this->chart->TabIndex = 60;
			this->chart->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			title1->Text = L"Точечный график и график уравнения связи";
			this->chart->Titles->Add(title1);
			// 
			// textBox_sumx
			// 
			this->textBox_sumx->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_sumx->Location = System::Drawing::Point(160, 359);
			this->textBox_sumx->Name = L"textBox_sumx";
			this->textBox_sumx->ReadOnly = true;
			this->textBox_sumx->Size = System::Drawing::Size(88, 27);
			this->textBox_sumx->TabIndex = 61;
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column_num,
					this->Column_time, this->Column_size, this->Column_xx, this->Column_xy
			});
			this->dataGridView->Location = System::Drawing::Point(8, 72);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->Size = System::Drawing::Size(391, 258);
			this->dataGridView->TabIndex = 63;
			// 
			// Column_num
			// 
			this->Column_num->HeaderText = L"Номер";
			this->Column_num->MinimumWidth = 6;
			this->Column_num->Name = L"Column_num";
			this->Column_num->ReadOnly = true;
			this->Column_num->Width = 60;
			// 
			// Column_time
			// 
			this->Column_time->HeaderText = L"Время, м/с (y)";
			this->Column_time->MinimumWidth = 6;
			this->Column_time->Name = L"Column_time";
			this->Column_time->ReadOnly = true;
			this->Column_time->Width = 70;
			// 
			// Column_size
			// 
			this->Column_size->HeaderText = L"Размер массива (x)";
			this->Column_size->MinimumWidth = 6;
			this->Column_size->Name = L"Column_size";
			this->Column_size->ReadOnly = true;
			this->Column_size->Width = 125;
			// 
			// Column_xx
			// 
			this->Column_xx->HeaderText = L"x*x";
			this->Column_xx->MinimumWidth = 6;
			this->Column_xx->Name = L"Column_xx";
			this->Column_xx->ReadOnly = true;
			this->Column_xx->Width = 110;
			// 
			// Column_xy
			// 
			this->Column_xy->HeaderText = L"x*y";
			this->Column_xy->MinimumWidth = 6;
			this->Column_xy->Name = L"Column_xy";
			this->Column_xy->ReadOnly = true;
			this->Column_xy->Width = 110;
			// 
			// Equation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(1112, 712);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->textBox_sumx);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->clearbutton);
			this->Controls->Add(this->sortbutton);
			this->Controls->Add(this->textBox_el);
			this->Controls->Add(this->textBox_det);
			this->Controls->Add(this->textBox_cor);
			this->Controls->Add(this->textBox_beta);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox_a1);
			this->Controls->Add(this->textBox_a0);
			this->Controls->Add(this->textBox_sumyx);
			this->Controls->Add(this->textBox_sumxx);
			this->Controls->Add(this->textBox_sumx2);
			this->Controls->Add(this->textBox_sumy);
			this->Controls->Add(this->textBox_m);
			this->Controls->Add(this->textBox_mm);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label10);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Equation";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Уравнение связи";
			this->Load += gcnew System::EventHandler(this, &Equation::Equation_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Equation_Load(System::Object^ sender, System::EventArgs^ e) {
		sortbutton->Enabled = false;
	}
	private: System::Void textBox_m_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char num = e->KeyChar;
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && num != 8)
		{
			e->Handled = true;
		}
	}
	private: void ClearOutPut() {
		textBox_m->Clear();
		textBox_a0->Clear();
		textBox_a1->Clear();
		textBox8->Clear();
		textBox9->Clear();
		textBox_mm->Clear();
		textBox_sumx->Clear();
		textBox_sumy->Clear();
		textBox_sumx2->Clear();
		textBox_sumxx->Clear();
		textBox_sumyx->Clear();
		textBox_cor->Clear();
		textBox_el->Clear();
		textBox_det->Clear();
		textBox_beta->Clear();
		chart->Series[0]->Points->Clear();
		chart->Series[1]->Points->Clear();
		dataGridView->Rows->Clear();
	}
	private: System::Void clearbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearOutPut();
	}
	private: System::Void textBox_m_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		sortbutton->Enabled = !(textBox_m->Text->Length < 1);
	}
	
	void merge(std::vector<double>& arr, int left, int mid, int right) {
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
			if (L[i] <= R[j]) {
				arr[k] = L[i];
				i++;
			}
			else {
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

	void mergeSort(std::vector<double>& arr, int left, int right) {
		if (left < right) {
			int mid = left + (right - left) / 2;

			// Рекурсивно сортируем два подмассива
			mergeSort(arr, left, mid);
			mergeSort(arr, mid + 1, right);

			// Слияние двух отсортированных подмассивов
			merge(arr, left, mid, right);
		}
	}

	std::vector<double> Gauss(std::vector<std::vector<double>>& matrix) {
		int n = matrix.size();

		for (int i = 0; i < n; i++) {
			int maxRow = i;
			for (int j = i + 1; j < n; j++) {
				if (abs(matrix[j][i]) > abs(matrix[maxRow][i])) {
					maxRow = j;
				}
			}

			for (int k = i; k < n + 1; k++) {
				std::swap(matrix[maxRow][k], matrix[i][k]);
			}

			for (int j = i + 1; j < n; j++) {
				double coef = -matrix[j][i] / matrix[i][i];
				for (int k = i; k < n + 1; k++) {
					if (i == k) {
						matrix[j][k] = 0;
					}
					else {
						matrix[j][k] += coef * matrix[i][k];
					}
				}
			}
		}

		std::vector<double> result(n);
		for (int i = n - 1; i >= 0; i--) {
			result[i] = matrix[i][n] / matrix[i][i];
			for (int j = i - 1; j >= 0; j--) {
				matrix[j][n] -= matrix[j][i] * result[i];
			}
		}

		return result;
	}

	std::vector<int> GenerateArrayOfSizes(int m) //функция для генерации массива размеров
	{
		std::vector<int> ArrSizes;
		srand(999);
		for (int i = 0; i < m; i++)
		{
			int elem = rand();
			ArrSizes.push_back(elem);
		}
		std::sort(ArrSizes.begin(), ArrSizes.end());
		return ArrSizes;
	}

	std::vector<double> FillArrayOfElems(int size) //функция для заполнения массивов рандомными числами
	{
		std::vector<double> ArrElems;
		srand(999);
		for (int i = 0; i < size; i++)
		{
			double elem = rand();
			ArrElems.push_back(elem);
		}
		return ArrElems;
	}

	private: System::Void sortbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		chart->Series[0]->Points->Clear();
		chart->Series[1]->Points->Clear();
		int m = Convert::ToInt32(textBox_m->Text); //количество опытов
		std::vector<int> arrSizes;
		std::vector<double> arrElems;
		arrSizes = GenerateArrayOfSizes(m);

		//генерируем массив времени затраченного на сортировку
		std::vector<double> arrTimes;
		for (int i = 0; i < arrSizes.size(); i++)
		{
			arrElems = FillArrayOfElems(arrSizes[i]);
			//Измеряем время сортировки и заполняем массив, хранящий время сортировки каждого массива
			clock_t start, finish;
			start = clock();
			mergeSort(arrElems, 0, arrElems.size() - 1);
			finish = clock();
			double timeMerge = (finish - start);
			arrTimes.push_back(timeMerge);
		}
		double summ_x = 0;
		double summ_y = 0;
		double summ_sqr_x = 0;
		double summ_sqr_y = 0;
		double multiply_x_y = 0;
		dataGridView->RowCount = m;
		for (int i = 0; i < m; i++)
		{
			dataGridView->Rows[i]->Cells[0]->Value = i + 1;
			dataGridView->Rows[i]->Cells[1]->Value = arrTimes[i]; //время, y
			dataGridView->Rows[i]->Cells[2]->Value = arrSizes[i]; //размер, x
			dataGridView->Rows[i]->Cells[3]->Value = arrSizes[i] * arrSizes[i]; //x^2
			dataGridView->Rows[i]->Cells[4]->Value = arrSizes[i] * arrTimes[i]; //x*y
			chart->Series[0]->Points->AddXY(arrSizes[i], arrTimes[i]);

			summ_x += arrSizes[i];
			summ_y += arrTimes[i];
			summ_sqr_x += pow(arrSizes[i], 2);
			summ_sqr_y += pow(arrTimes[i], 2);
			multiply_x_y += arrSizes[i] * arrTimes[i];
		}

		int coef = 2; //кол-во коэффициентов 
		std::vector<std::vector<double>> matrix(coef, std::vector<double>(coef + 1)); //матрица
		matrix[0][0] = m;
		matrix[0][1] = summ_x;
		matrix[0][2] = summ_y;
		matrix[1][0] = summ_x;
		matrix[1][1] = summ_sqr_x;
		matrix[1][2] = multiply_x_y;

		std::vector<double> solution = Gauss(matrix);
		double a0 = solution[0];
		double a1 = solution[1];

		for (int i = 0; i < m; i++) 
		{
			double c = a1 * arrSizes[i] + a0;
			chart->Series[1]->Points->AddXY(arrSizes[i], c);
		}

		textBox_a0->Text = Convert::ToString(a0);
		textBox_a1->Text = Convert::ToString(a1);
		textBox8->Text = Convert::ToString(a0);
		textBox9->Text = Convert::ToString(a1);

		textBox_mm->Text = Convert::ToString(m);
		textBox_sumx->Text = Convert::ToString(summ_x);
		textBox_sumy->Text = Convert::ToString(summ_y);
		textBox_sumx2->Text = Convert::ToString(summ_x);
		textBox_sumxx->Text = Convert::ToString(summ_sqr_x);
		textBox_sumyx->Text = Convert::ToString(multiply_x_y);

		//корреляция, детерминация, уравнение связи
		double corel = (m * multiply_x_y - summ_x * summ_y) / sqrt((m * summ_sqr_x - summ_x * summ_x) * (m * summ_sqr_y - summ_y * summ_y));
		double deter = pow(corel, 2);
		textBox_cor->Text = Convert::ToString(corel);
		textBox_det->Text = Convert::ToString(deter);

		//эластичность, бета-коэффициент
		double elast = (a1 * (summ_x / m)) / (summ_y / m);
		textBox_el->Text = Convert::ToString(elast);
		double rmse_x = sqrt((summ_sqr_x - (pow(summ_x, 2) / m)) / m);
		double rmse_y = sqrt((summ_sqr_y - (pow(summ_y, 2) / m)) / m);
		double beta = (a1 * rmse_x) / rmse_y;
		textBox_beta->Text = Convert::ToString(beta);
	}
};
}
