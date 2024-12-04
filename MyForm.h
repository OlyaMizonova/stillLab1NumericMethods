#pragma once
#using <System.Windows.Forms.DataVisualization.dll>

#include "NamesofFunctions.h"

namespace lab1Nimeric {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;



	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		bool shouldPaint;
	public:
		MyForm(void)
		{
			InitializeComponent();
			shouldPaint = false;
			//this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ выберитеЗадачуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ тестоваяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ основная1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ основная2ToolStripMenuItem;
	private: System::Windows::Forms::CheckBox^ withControl;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ withoutControl;
	private: System::Windows::Forms::TextBox^ MaxStep;
	private: System::Windows::Forms::Label^ doubling;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ epsilonBoarder;
	private: System::Windows::Forms::Label^ U0;
	private: System::Windows::Forms::TextBox^ U0_2;
	private: System::Windows::Forms::TextBox^ U0_1;
	private: System::Windows::Forms::TextBox^ initialStep;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ Step;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ epsilon;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ leftBoarder;
	private: System::Windows::Forms::TextBox^ RightBoarder;
	private: System::Windows::Forms::TextBox^ ParamA;
	private: System::Windows::Forms::TextBox^ ParamB;
	private: System::Windows::Forms::Label^ leftLabel;
	private: System::Windows::Forms::Label^ rightLabel;
	private: System::Windows::Forms::Label^ LabelA;
	private: System::Windows::Forms::Label^ labelB;
	private: System::Windows::Forms::Label^ calculate;

	private: System::Windows::Forms::DataGridView^ Table;
	private: System::Windows::Forms::Label^ reference;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ picture;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ picture2;









	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::Button^ PhasePortr;
	private: System::Windows::Forms::Button^ back1;
	private: System::Windows::Forms::Label^ n;
	private: System::Windows::Forms::Label^ difBoarder;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ div;
	private: System::Windows::Forms::Label^ doub;
	private: System::Windows::Forms::Label^ max_step;
	private: System::Windows::Forms::Label^ x_max_step;
	private: System::Windows::Forms::Label^ min_step;
	private: System::Windows::Forms::Label^ x_min_step;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ x_max_dif;
	private: System::Windows::Forms::Label^ maxOLP;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ labelLeftBoarder;
	private: System::Windows::Forms::Label^ labelRightBoarder;
	private: System::Windows::Forms::Label^ x_max_uv;
	private: System::Windows::Forms::Label^ label18;
	//private: System::Windows::Forms::PictureBox^ pictureBox1;










	private: System::ComponentModel::IContainer^ components;









	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выберитеЗадачуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->тестоваяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->основная1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->основная2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->withControl = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->withoutControl = (gcnew System::Windows::Forms::CheckBox());
			this->MaxStep = (gcnew System::Windows::Forms::TextBox());
			this->doubling = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->epsilonBoarder = (gcnew System::Windows::Forms::TextBox());
			this->U0 = (gcnew System::Windows::Forms::Label());
			this->U0_2 = (gcnew System::Windows::Forms::TextBox());
			this->U0_1 = (gcnew System::Windows::Forms::TextBox());
			this->initialStep = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Step = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->epsilon = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->leftBoarder = (gcnew System::Windows::Forms::TextBox());
			this->RightBoarder = (gcnew System::Windows::Forms::TextBox());
			this->ParamA = (gcnew System::Windows::Forms::TextBox());
			this->ParamB = (gcnew System::Windows::Forms::TextBox());
			this->leftLabel = (gcnew System::Windows::Forms::Label());
			this->rightLabel = (gcnew System::Windows::Forms::Label());
			this->LabelA = (gcnew System::Windows::Forms::Label());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->calculate = (gcnew System::Windows::Forms::Label());
			this->Table = (gcnew System::Windows::Forms::DataGridView());
			this->Column0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->reference = (gcnew System::Windows::Forms::Label());
			this->picture = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->picture2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->PhasePortr = (gcnew System::Windows::Forms::Button());
			this->back1 = (gcnew System::Windows::Forms::Button());
			this->n = (gcnew System::Windows::Forms::Label());
			this->difBoarder = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->div = (gcnew System::Windows::Forms::Label());
			this->doub = (gcnew System::Windows::Forms::Label());
			this->max_step = (gcnew System::Windows::Forms::Label());
			this->x_max_step = (gcnew System::Windows::Forms::Label());
			this->min_step = (gcnew System::Windows::Forms::Label());
			this->x_min_step = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->x_max_dif = (gcnew System::Windows::Forms::Label());
			this->maxOLP = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->labelLeftBoarder = (gcnew System::Windows::Forms::Label());
			this->labelRightBoarder = (gcnew System::Windows::Forms::Label());
			this->x_max_uv = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			//this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture2))->BeginInit();
			//(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выберитеЗадачуToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(783, 33);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выберитеЗадачуToolStripMenuItem
			// 
			this->выберитеЗадачуToolStripMenuItem->BackColor = System::Drawing::SystemColors::Window;
			this->выберитеЗадачуToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->тестоваяToolStripMenuItem,
					this->основная1ToolStripMenuItem, this->основная2ToolStripMenuItem
			});
			this->выберитеЗадачуToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->выберитеЗадачуToolStripMenuItem->Name = L"выберитеЗадачуToolStripMenuItem";
			this->выберитеЗадачуToolStripMenuItem->Size = System::Drawing::Size(174, 29);
			this->выберитеЗадачуToolStripMenuItem->Text = L"Выберите задачу";
			// 
			// тестоваяToolStripMenuItem
			// 
			this->тестоваяToolStripMenuItem->Name = L"тестоваяToolStripMenuItem";
			this->тестоваяToolStripMenuItem->Size = System::Drawing::Size(213, 34);
			this->тестоваяToolStripMenuItem->Text = L"Тестовая";
			this->тестоваяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::тестоваяToolStripMenuItem_Click);
			// 
			// основная1ToolStripMenuItem
			// 
			this->основная1ToolStripMenuItem->Name = L"основная1ToolStripMenuItem";
			this->основная1ToolStripMenuItem->Size = System::Drawing::Size(213, 34);
			this->основная1ToolStripMenuItem->Text = L"Основная 1";
			this->основная1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::основная1ToolStripMenuItem_Click);
			// 
			// основная2ToolStripMenuItem
			// 
			this->основная2ToolStripMenuItem->Name = L"основная2ToolStripMenuItem";
			this->основная2ToolStripMenuItem->Size = System::Drawing::Size(213, 34);
			this->основная2ToolStripMenuItem->Text = L"Основная 2";
			this->основная2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::основная2ToolStripMenuItem_Click);
			// 
			// withControl
			// 
			this->withControl->AutoSize = true;
			this->withControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->withControl->Location = System::Drawing::Point(12, 85);
			this->withControl->Name = L"withControl";
			this->withControl->Size = System::Drawing::Size(60, 26);
			this->withControl->TabIndex = 3;
			this->withControl->Text = L"Да";
			this->withControl->UseVisualStyleBackColor = true;
			this->withControl->CheckedChanged += gcnew System::EventHandler(this, &MyForm::withControl_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(357, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"С контролем локальной погрешности";
			// 
			// withoutControl
			// 
			this->withoutControl->AutoSize = true;
			this->withoutControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->withoutControl->Location = System::Drawing::Point(13, 118);
			this->withoutControl->Name = L"withoutControl";
			this->withoutControl->Size = System::Drawing::Size(67, 26);
			this->withoutControl->TabIndex = 5;
			this->withoutControl->Text = L"Нет";
			this->withoutControl->UseVisualStyleBackColor = true;
			this->withoutControl->CheckedChanged += gcnew System::EventHandler(this, &MyForm::withoutControl_CheckedChanged);
			// 
			// MaxStep
			// 
			this->MaxStep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaxStep->Location = System::Drawing::Point(483, 83);
			this->MaxStep->Name = L"MaxStep";
			this->MaxStep->Size = System::Drawing::Size(212, 28);
			this->MaxStep->TabIndex = 6;
			// 
			// doubling
			// 
			this->doubling->AutoSize = true;
			this->doubling->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->doubling->Location = System::Drawing::Point(477, 53);
			this->doubling->Name = L"doubling";
			this->doubling->Size = System::Drawing::Size(268, 22);
			this->doubling->TabIndex = 7;
			this->doubling->Text = L"Максимальное число шагов";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(479, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(278, 22);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Точность выхода за границу";
			// 
			// epsilonBoarder
			// 
			this->epsilonBoarder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->epsilonBoarder->Location = System::Drawing::Point(483, 147);
			this->epsilonBoarder->Name = L"epsilonBoarder";
			this->epsilonBoarder->Size = System::Drawing::Size(212, 28);
			this->epsilonBoarder->TabIndex = 9;
			// 
			// U0
			// 
			this->U0->AutoSize = true;
			this->U0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->U0->Location = System::Drawing::Point(22, 364);
			this->U0->Name = L"U0";
			this->U0->Size = System::Drawing::Size(195, 22);
			this->U0->TabIndex = 10;
			this->U0->Text = L"Начальные условия";
			this->U0->Click += gcnew System::EventHandler(this, &MyForm::U0_Click);
			// 
			// U0_2
			// 
			this->U0_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->U0_2->Location = System::Drawing::Point(26, 436);
			this->U0_2->Name = L"U0_2";
			this->U0_2->Size = System::Drawing::Size(160, 28);
			this->U0_2->TabIndex = 11;
			this->U0_2->Visible = false;
			// 
			// U0_1
			// 
			this->U0_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->U0_1->Location = System::Drawing::Point(26, 402);
			this->U0_1->Name = L"U0_1";
			this->U0_1->Size = System::Drawing::Size(160, 28);
			this->U0_1->TabIndex = 12;
			// 
			// initialStep
			// 
			this->initialStep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->initialStep->Location = System::Drawing::Point(424, 389);
			this->initialStep->Name = L"initialStep";
			this->initialStep->Size = System::Drawing::Size(212, 28);
			this->initialStep->TabIndex = 13;
			this->initialStep->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(428, 364);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 22);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Начальный шаг";
			this->label4->Visible = false;
			// 
			// Step
			// 
			this->Step->AutoSize = true;
			this->Step->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Step->Location = System::Drawing::Point(479, 364);
			this->Step->Name = L"Step";
			this->Step->Size = System::Drawing::Size(45, 22);
			this->Step->TabIndex = 15;
			this->Step->Text = L"Шаг";
			this->Step->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(420, 420);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(325, 22);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Контроль локальной погрешности";
			this->label6->Visible = false;
			// 
			// epsilon
			// 
			this->epsilon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->epsilon->Location = System::Drawing::Point(424, 445);
			this->epsilon->Name = L"epsilon";
			this->epsilon->Size = System::Drawing::Size(212, 28);
			this->epsilon->TabIndex = 18;
			this->epsilon->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(8, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(476, 22);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Отрезок, на котором происходит решение задачи";
			// 
			// leftBoarder
			// 
			this->leftBoarder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leftBoarder->Location = System::Drawing::Point(36, 239);
			this->leftBoarder->Name = L"leftBoarder";
			this->leftBoarder->Size = System::Drawing::Size(152, 28);
			this->leftBoarder->TabIndex = 21;
			this->leftBoarder->TextChanged += gcnew System::EventHandler(this, &MyForm::leftBoarder_TextChanged);
			// 
			// RightBoarder
			// 
			this->RightBoarder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RightBoarder->Location = System::Drawing::Point(36, 282);
			this->RightBoarder->Name = L"RightBoarder";
			this->RightBoarder->Size = System::Drawing::Size(150, 28);
			this->RightBoarder->TabIndex = 23;
			this->RightBoarder->TextChanged += gcnew System::EventHandler(this, &MyForm::RightBoarder_TextChanged);
			// 
			// ParamA
			// 
			this->ParamA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ParamA->Location = System::Drawing::Point(424, 239);
			this->ParamA->Name = L"ParamA";
			this->ParamA->Size = System::Drawing::Size(212, 28);
			this->ParamA->TabIndex = 24;
			this->ParamA->Visible = false;
			this->ParamA->TextChanged += gcnew System::EventHandler(this, &MyForm::ParamA_TextChanged);
			// 
			// ParamB
			// 
			this->ParamB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ParamB->Location = System::Drawing::Point(424, 282);
			this->ParamB->Name = L"ParamB";
			this->ParamB->Size = System::Drawing::Size(212, 28);
			this->ParamB->TabIndex = 25;
			this->ParamB->Visible = false;
			this->ParamB->TextChanged += gcnew System::EventHandler(this, &MyForm::ParamB_TextChanged);
			// 
			// leftLabel
			// 
			this->leftLabel->AutoSize = true;
			this->leftLabel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->leftLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leftLabel->Location = System::Drawing::Point(50, 242);
			this->leftLabel->Name = L"leftLabel";
			this->leftLabel->Size = System::Drawing::Size(0, 22);
			this->leftLabel->TabIndex = 26;
			// 
			// rightLabel
			// 
			this->rightLabel->AutoSize = true;
			this->rightLabel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->rightLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rightLabel->Location = System::Drawing::Point(42, 285);
			this->rightLabel->Name = L"rightLabel";
			this->rightLabel->Size = System::Drawing::Size(0, 22);
			this->rightLabel->TabIndex = 27;
			// 
			// LabelA
			// 
			this->LabelA->AutoSize = true;
			this->LabelA->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LabelA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelA->Location = System::Drawing::Point(473, 242);
			this->LabelA->Name = L"LabelA";
			this->LabelA->Size = System::Drawing::Size(109, 22);
			this->LabelA->TabIndex = 28;
			this->LabelA->Text = L"Параметр a";
			this->LabelA->Visible = false;
			// 
			// labelB
			// 
			this->labelB->AutoSize = true;
			this->labelB->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelB->Location = System::Drawing::Point(477, 285);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(109, 22);
			this->labelB->TabIndex = 29;
			this->labelB->Text = L"Параметр b";
			this->labelB->Visible = false;
			this->labelB->Click += gcnew System::EventHandler(this, &MyForm::labelB_Click);
			// 
			// calculate
			// 
			this->calculate->AutoSize = true;
			this->calculate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->calculate->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->calculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calculate->Location = System::Drawing::Point(281, 520);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(136, 28);
			this->calculate->TabIndex = 30;
			this->calculate->Text = L"Вычислить";
			this->calculate->Click += gcnew System::EventHandler(this, &MyForm::calculate_Click);
			// 
			// Table
			// 
			this->Table->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column0, this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->Table->Location = System::Drawing::Point(0, 0);
			this->Table->Name = L"Table";
			this->Table->RowHeadersWidth = 62;
			this->Table->RowTemplate->Height = 28;
			this->Table->Size = System::Drawing::Size(783, 116);
			this->Table->TabIndex = 32;
			this->Table->Visible = false;
			// 
			// Column0
			// 
			this->Column0->HeaderText = L"i";
			this->Column0->MinimumWidth = 8;
			this->Column0->Name = L"Column0";
			this->Column0->Width = 50;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Xi";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Vi";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"V2i";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Vi-V2i";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"ОЛП";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"h_i";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"C1";
			this->Column7->MinimumWidth = 8;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 150;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"C2";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 150;
			// 
			// reference
			// 
			this->reference->AutoSize = true;
			this->reference->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->reference->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reference->Location = System::Drawing::Point(635, 346);
			this->reference->Name = L"reference";
			this->reference->Size = System::Drawing::Size(0, 22);
			this->reference->TabIndex = 33;
			this->reference->Visible = false;
			// 
			// picture
			// 
			chartArea1->Name = L"ChartArea1";
			this->picture->ChartAreas->Add(chartArea1);
			legend1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			this->picture->Legends->Add(legend1);
			this->picture->Location = System::Drawing::Point(0, 117);
			this->picture->Name = L"picture";
			this->picture->Size = System::Drawing::Size(552, 394);
			this->picture->TabIndex = 35;
			this->picture->Text = L"chart1";
			this->picture->Visible = false;
			// 
			// picture2
			// 
			chartArea2->Name = L"ChartArea2";
			this->picture2->ChartAreas->Add(chartArea2);
			legend2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend2->IsTextAutoFit = false;
			legend2->Name = L"Legend2";
			this->picture2->Legends->Add(legend2);
			this->picture2->Location = System::Drawing::Point(0, 117);
			this->picture2->Name = L"picture2";
			this->picture2->Size = System::Drawing::Size(552, 394);
			this->picture2->TabIndex = 35;
			this->picture2->Text = L"chart2";
			this->picture2->Visible = false;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// PhasePortr
			// 
			this->PhasePortr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PhasePortr->Location = System::Drawing::Point(603, 496);
			this->PhasePortr->Name = L"PhasePortr";
			this->PhasePortr->Size = System::Drawing::Size(163, 77);
			this->PhasePortr->TabIndex = 36;
			this->PhasePortr->Text = L"Фазовый портрет";
			this->PhasePortr->UseVisualStyleBackColor = true;
			this->PhasePortr->Visible = false;
			this->PhasePortr->Click += gcnew System::EventHandler(this, &MyForm::PhasePortr_Click);
			// 
			// back1
			// 
			this->back1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back1->Location = System::Drawing::Point(0, 520);
			this->back1->Name = L"back1";
			this->back1->Size = System::Drawing::Size(127, 38);
			this->back1->TabIndex = 37;
			this->back1->Text = L"Назад";
			this->back1->UseVisualStyleBackColor = true;
			this->back1->Visible = false;
			this->back1->Click += gcnew System::EventHandler(this, &MyForm::back1_Click);
			// 
			// n
			// 
			this->n->AutoSize = true;
			this->n->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n->Location = System::Drawing::Point(722, 149);
			this->n->Name = L"n";
			this->n->Size = System::Drawing::Size(70, 26);
			this->n->TabIndex = 39;
			this->n->Text = L"label7";
			this->n->Visible = false;
			// 
			// difBoarder
			// 
			this->difBoarder->AutoSize = true;
			this->difBoarder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->difBoarder->Location = System::Drawing::Point(675, 190);
			this->difBoarder->Name = L"difBoarder";
			this->difBoarder->Size = System::Drawing::Size(70, 26);
			this->difBoarder->TabIndex = 40;
			this->difBoarder->Text = L"label7";
			this->difBoarder->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(642, 147);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 26);
			this->label7->TabIndex = 41;
			this->label7->Text = L"n";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(586, 190);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 26);
			this->label8->TabIndex = 42;
			this->label8->Text = L"b - x_n";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(558, 227);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 26);
			this->label9->TabIndex = 43;
			this->label9->Text = L"max ОЛП";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(558, 253);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(177, 26);
			this->label10->TabIndex = 44;
			this->label10->Text = L"Число удвоений";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(558, 282);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(167, 26);
			this->label11->TabIndex = 45;
			this->label11->Text = L"Число делений";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(610, 313);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(98, 26);
			this->label12->TabIndex = 46;
			this->label12->Text = L"max шаг";
			this->label12->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(639, 339);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(65, 26);
			this->label13->TabIndex = 47;
			this->label13->Text = L"при x";
			this->label13->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(616, 368);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(92, 26);
			this->label14->TabIndex = 48;
			this->label14->Text = L"min шаг";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(634, 395);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(65, 26);
			this->label15->TabIndex = 49;
			this->label15->Text = L"при x";
			this->label15->Visible = false;
			// 
			// div
			// 
			this->div->AutoSize = true;
			this->div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->div->Location = System::Drawing::Point(710, 285);
			this->div->Name = L"div";
			this->div->Size = System::Drawing::Size(82, 26);
			this->div->TabIndex = 50;
			this->div->Text = L"label16";
			this->div->Visible = false;
			// 
			// doub
			// 
			this->doub->AutoSize = true;
			this->doub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->doub->Location = System::Drawing::Point(710, 253);
			this->doub->Name = L"doub";
			this->doub->Size = System::Drawing::Size(82, 26);
			this->doub->TabIndex = 51;
			this->doub->Text = L"label16";
			this->doub->Visible = false;
			// 
			// max_step
			// 
			this->max_step->AutoSize = true;
			this->max_step->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->max_step->Location = System::Drawing::Point(713, 311);
			this->max_step->Name = L"max_step";
			this->max_step->Size = System::Drawing::Size(70, 26);
			this->max_step->TabIndex = 52;
			this->max_step->Text = L"label2";
			this->max_step->Visible = false;
			// 
			// x_max_step
			// 
			this->x_max_step->AutoSize = true;
			this->x_max_step->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x_max_step->Location = System::Drawing::Point(713, 343);
			this->x_max_step->Name = L"x_max_step";
			this->x_max_step->Size = System::Drawing::Size(70, 26);
			this->x_max_step->TabIndex = 53;
			this->x_max_step->Text = L"label2";
			this->x_max_step->Visible = false;
			// 
			// min_step
			// 
			this->min_step->AutoSize = true;
			this->min_step->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->min_step->Location = System::Drawing::Point(713, 369);
			this->min_step->Name = L"min_step";
			this->min_step->Size = System::Drawing::Size(70, 26);
			this->min_step->TabIndex = 54;
			this->min_step->Text = L"label2";
			this->min_step->Visible = false;
			// 
			// x_min_step
			// 
			this->x_min_step->AutoSize = true;
			this->x_min_step->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x_min_step->Location = System::Drawing::Point(713, 395);
			this->x_min_step->Name = L"x_min_step";
			this->x_min_step->Size = System::Drawing::Size(70, 26);
			this->x_min_step->TabIndex = 55;
			this->x_min_step->Text = L"label2";
			this->x_min_step->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(558, 430);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 26);
			this->label2->TabIndex = 57;
			this->label2->Text = L"max|U_i - V_i|";
			this->label2->Visible = false;
			// 
			// x_max_dif
			// 
			this->x_max_dif->AutoSize = true;
			this->x_max_dif->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x_max_dif->Location = System::Drawing::Point(640, 430);
			this->x_max_dif->Name = L"x_max_dif";
			this->x_max_dif->Size = System::Drawing::Size(82, 26);
			this->x_max_dif->TabIndex = 59;
			this->x_max_dif->Text = L"label17";
			this->x_max_dif->Visible = false;
			// 
			// maxOLP
			// 
			this->maxOLP->AutoSize = true;
			this->maxOLP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maxOLP->Location = System::Drawing::Point(640, 227);
			this->maxOLP->Name = L"maxOLP";
			this->maxOLP->Size = System::Drawing::Size(82, 26);
			this->maxOLP->TabIndex = 60;
			this->maxOLP->Text = L"label17";
			this->maxOLP->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(660, 123);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(106, 26);
			this->label17->TabIndex = 61;
			this->label17->Text = L"Справка";
			this->label17->Visible = false;
			// 
			// labelLeftBoarder
			// 
			this->labelLeftBoarder->AutoSize = true;
			this->labelLeftBoarder->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelLeftBoarder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLeftBoarder->Location = System::Drawing::Point(50, 242);
			this->labelLeftBoarder->Name = L"labelLeftBoarder";
			this->labelLeftBoarder->Size = System::Drawing::Size(136, 22);
			this->labelLeftBoarder->TabIndex = 62;
			this->labelLeftBoarder->Text = L"Левая граница";
			// 
			// labelRightBoarder
			// 
			this->labelRightBoarder->AutoSize = true;
			this->labelRightBoarder->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelRightBoarder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRightBoarder->Location = System::Drawing::Point(42, 285);
			this->labelRightBoarder->Name = L"labelRightBoarder";
			this->labelRightBoarder->Size = System::Drawing::Size(146, 22);
			this->labelRightBoarder->TabIndex = 63;
			this->labelRightBoarder->Text = L"Правая граница";
			// 
			// x_max_uv
			// 
			this->x_max_uv->AutoSize = true;
			this->x_max_uv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x_max_uv->Location = System::Drawing::Point(630, 456);
			this->x_max_uv->Name = L"x_max_uv";
			this->x_max_uv->Size = System::Drawing::Size(65, 26);
			this->x_max_uv->TabIndex = 64;
			this->x_max_uv->Text = L"при x";
			this->x_max_uv->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(708, 456);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(75, 25);
			this->label18->TabIndex = 65;
			this->label18->Text = L"label18";
			this->label18->Visible = false;
			// 
			// pictureBox1
			// 
			/*this->pictureBox1->Location = System::Drawing::Point(36, 85);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(672, 397);
			this->pictureBox1->TabIndex = 66;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);*/
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(783, 568);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->x_max_uv);
			this->Controls->Add(this->labelRightBoarder);
			this->Controls->Add(this->labelLeftBoarder);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->maxOLP);
			this->Controls->Add(this->x_max_dif);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->x_min_step);
			this->Controls->Add(this->min_step);
			this->Controls->Add(this->x_max_step);
			this->Controls->Add(this->max_step);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->difBoarder);
			this->Controls->Add(this->n);
			this->Controls->Add(this->back1);
			this->Controls->Add(this->PhasePortr);
			this->Controls->Add(this->reference);
			this->Controls->Add(this->calculate);
			this->Controls->Add(this->labelB);
			this->Controls->Add(this->LabelA);
			this->Controls->Add(this->rightLabel);
			this->Controls->Add(this->leftLabel);
			this->Controls->Add(this->ParamB);
			this->Controls->Add(this->ParamA);
			this->Controls->Add(this->RightBoarder);
			this->Controls->Add(this->leftBoarder);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->epsilon);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Step);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->initialStep);
			this->Controls->Add(this->U0_1);
			this->Controls->Add(this->U0_2);
			this->Controls->Add(this->U0);
			this->Controls->Add(this->epsilonBoarder);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->doubling);
			this->Controls->Add(this->MaxStep);
			this->Controls->Add(this->withoutControl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->withControl);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->Table);
			this->Controls->Add(this->picture);
			this->Controls->Add(this->picture2);
			this->Controls->Add(this->doub);
			this->Controls->Add(this->div);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label13);
			//this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			//this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Задача Коши для ОДУ";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture2))->EndInit();
			//(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//	Graphics^ g = e->Graphics; // Используем переданный объект e
		//	Pen^ pen = gcnew Pen(Color::Black);

		//	// Рисуем оси
		//	g->DrawLine(pen, 400, 0, 400, 600); // Вертикальная ось
		//	g->DrawLine(pen, 0, 300, 800, 300); // Горизонтальная ось

		//	//double U1 = 0; // Начальные условия
		//	//double U2 = 0;
		//	//double dt = 0.01; // Шаг времени
		//	//double t_max = 10.0; // Максимальное время
		//	//for (double t = 0; t < t_max; t += dt) {
		//	//	auto res = f_second_task(U1, U2, LeftBoarder, A, B); // Ваша функция
		//	//	double dU1 = res.first;
		//	//	double dU2 = res.second;
		//	//	U1 += dU1 * dt;
		//	//	U2 += dU2 * dt;
		//	//	// Рисуем точку на графике
		//	//	int screenU1 = (int)(U1 * 10) + 400; // Масштабирование и смещение
		//	//	int screenU2 = 300 - (int)(U2 * 10); // Масштабирование и смещение
		//	//	g->DrawEllipse(pen, screenU1, screenU2, 2, 2); // Рисуем точку
		//	//}

		//	delete pen;
		//}
	private: System::Void тестоваяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		U0_2->Visible = false;
		ParamA->Visible = false;
		ParamB->Visible = false;
		LabelA->Visible = false;
		labelB->Visible = false;
		U0->Visible = true;
		U0_1->Visible = true;
		выберитеЗадачуToolStripMenuItem->Text = "Тестовая";
	}
	private: System::Void основная1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		U0_2->Visible = false;
		ParamA->Visible = false;
		ParamB->Visible = false;
		LabelA->Visible = false;
		labelB->Visible = false;
		U0->Visible = true;
		U0_1->Visible = true;
		выберитеЗадачуToolStripMenuItem->Text = "Основная 1";
	}
	private: System::Void основная2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		U0->Visible = true;
		U0_1->Visible = true;
		U0_2->Visible = true;
		ParamA->Visible = true;
		ParamB->Visible = true;
		LabelA->Visible = true;
		labelB->Visible = true;
		выберитеЗадачуToolStripMenuItem->Text = "Основная 2";
	}
	private: System::Void U0_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = 0;
	}
	private: System::Void withControl_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (withControl->Checked) {
			label4->Visible = true;
			initialStep->Visible = true;
			label6->Visible = true;
			epsilon->Visible = true;
		}
		else {
			label4->Visible = false;
			initialStep->Visible = false;
			label6->Visible = false;
			epsilon->Visible = false;
		}
		if (withoutControl->Checked) { //галочка установлена
			withoutControl->Checked = false;
			Step->Visible = false;
			initialStep->Visible = false;
		}
	}
	private: System::Void withoutControl_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (withoutControl->Checked) {
			Step->Visible = true;
			initialStep->Visible = true;
		}
		else {
			Step->Visible = false;
			initialStep->Visible = false;
		}
		if (withControl->Checked) {
			withControl->Checked = false;
			label4->Visible = false;
			initialStep->Visible = false;
			label6->Visible = false;
			epsilon->Visible = false;
		}
	}
	private: System::Void leftBoarder_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		labelLeftBoarder->Visible = false;
	}
	private: System::Void RightBoarder_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		labelRightBoarder->Visible = false;
	}
	private: System::Void ParamA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		LabelA->Visible = false;
	}

	private: System::Void ParamB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		labelB->Visible = false;
	}
	private: System::Void labelB_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = 0;
	}
	private: System::Void calculate_Click(System::Object^ sender, System::EventArgs^ e) {
		int stop = 4;
		double U01 = Convert::ToDouble(U0_1->Text);
		double LeftBoarder = Convert::ToDouble(leftBoarder->Text);
		auto str = initialStep->Text;
		double InitialStep = Convert::ToDouble(str);
		double maxStep = Convert::ToInt32(MaxStep->Text);
		double rightBoarder = Convert::ToDouble(RightBoarder->Text);
		double EpsilonBoarder = Convert::ToDouble(epsilonBoarder->Text);
		double Epsilon = 0.01;
		double C1 = 0, C2 = 0;
		vector<pair<double, double>> changes_of_the_step = { {C1,C2} };
		vector<pair<double, double>> for_test_task;
		int i = 0;
		if (withControl->Checked) {
			i = 1; //с контролем локальной погрешности
			double Epsilon = Convert::ToDouble(epsilon->Text);
		}
		double h_max = InitialStep;
		double x_max = LeftBoarder;
		double h_min = InitialStep;
		double x_min = LeftBoarder;
		if (выберитеЗадачуToolStripMenuItem->Text == "Тестовая") {
			auto result = runge_kutta_4th_order(test_f, LeftBoarder, U01, InitialStep, maxStep, Epsilon, i, rightBoarder, EpsilonBoarder, &changes_of_the_step, &for_test_task);
			double Dif = 0.0;
			double x_dif = LeftBoarder;
			for (int k = 0; k < size(result); k++) {
				if (Dif < (for_test_task)[k].second) {
					Dif = (for_test_task)[k].second;
					x_dif = result[k][0];
				}
			}
			x_max_dif->Text = System::Convert::ToString(Dif);
			label18->Text = System::Convert::ToString(x_dif);
			double dif = rightBoarder - result[size(result) - 1][0];
			difBoarder->Text = System::Convert::ToString(dif);
			//this->picture->Series[0]->Points->Clear();
			Series^ series0 = gcnew Series();
			series0->ChartType = SeriesChartType::Spline;
			series0->Color = System::Drawing::Color::Red;
			series0->LegendText = "Численное решение";
			series0->DataPointCustomProperties::BorderWidth = 2;
			picture->Series->Add(series0);
			Series^ series1 = gcnew Series();
			series1->ChartType = SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Blue;
			series1->LegendText = "Истинное решение";
			series1->DataPointCustomProperties::BorderWidth = 2;
			picture->Series->Add(series1);
			DataGridViewTextBoxColumn^ newColumn1 = gcnew DataGridViewTextBoxColumn();
			newColumn1->HeaderText = "Ui"; // Установка заголовка
			newColumn1->Name = "Column9"; // Установка имени столбца
			Table->Columns->Add(newColumn1);
			DataGridViewTextBoxColumn^ newColumn2 = gcnew DataGridViewTextBoxColumn();
			newColumn2->HeaderText = "|Ui - Vi|"; // Установка заголовка
			newColumn2->Name = "Column10"; // Установка имени столбца
			Table->Columns->Add(newColumn2);
			if (i == 0) {
				for (int j = 0; j < size(result); j++) {
					double x = result[j][0];
					double y = result[j][1];
					double Uist = u_test(x, U01);
					this->picture->Series[0]->Points->AddXY(x, y);//рисуем численную траекторию
					picture->Series[1]->Points->AddXY(x, Uist);//рисуем истинную траекторию
					Table->Rows->Add();
					Table->Rows[j]->Cells[0]->Value = j + 1;
					Table->Rows[j]->Cells[1]->Value = x;
					Table->Rows[j]->Cells[2]->Value = y;
					Table->Rows[j]->Cells[3]->Value = " - ";
					Table->Rows[j]->Cells[4]->Value = " - ";
					Table->Rows[j]->Cells[5]->Value = " - ";
					Table->Rows[j]->Cells[6]->Value = result[j][2];
					Table->Rows[j]->Cells[7]->Value = " - ";
					Table->Rows[j]->Cells[8]->Value = " - ";
					Table->Rows[j]->Cells[9]->Value = Uist;
					Table->Rows[j]->Cells[10]->Value = abs(Uist - y);
				}
				int J = size(result);
				n->Text = System::Convert::ToString(J);

			}
			if (i == 1) {
				double total_divisions = changes_of_the_step[size(result) - 1].first;
				double total_doub = changes_of_the_step[size(result) - 1].second;
				div->Text = System::Convert::ToString(total_divisions);
				doub->Text = System::Convert::ToString(total_doub);
				//Series^ series2 = gcnew Series();
				//series2->ChartType = SeriesChartType::Spline;
				//series2->Color = System::Drawing::Color::Green;
				//series2->LegendText = "Численное решение с шагом в 2 раза меньше";
				//series2->DataPointCustomProperties::BorderWidth = 2;
				//picture->Series->Add(series2);
				double maxOlp = 0.0;
				for (int k = 0; k < size(result); k++) {
					if (maxOlp < result[k][4]) {
						maxOlp = result[k][4];
					}
				}
				for (int k = 0; k < size(result); k++) {
					if (h_max < result[k][5]) {
						h_max = result[k][5];
						x_max = result[k][0];
					}
				}
				for (int k = 0; k < size(result); k++) {
					if (h_min > result[k][5]) {
						h_min = result[k][5];
						x_min = result[k][0];
					}
				}
				maxOLP->Text = System::Convert::ToString(maxOlp);
				max_step->Text = System::Convert::ToString(h_max);
				x_max_step->Text = System::Convert::ToString(x_max);
				min_step->Text = System::Convert::ToString(h_min);
				x_min_step->Text = System::Convert::ToString(x_min);
				for (int j = 0; j < size(result); j++) {
					double x = result[j][0];
					double y = result[j][1];
					double Uist = u_test(x, U01);
					picture->Series[0]->Points->AddXY(x, y);//рисуем численную траекторию
					picture->Series[1]->Points->AddXY(x, Uist);//рисуем истинную траекторию
					double y2 = result[j][2];
					//picture->Series[2]->Points->AddXY(x, y2);//рисуем численную траекторию с шагом в 2 раза меньше
					Table->Rows->Add();
					Table->Rows[j]->Cells[0]->Value = j + 1;
					Table->Rows[j]->Cells[1]->Value = x;
					Table->Rows[j]->Cells[2]->Value = y;
					Table->Rows[j]->Cells[3]->Value = y2;
					Table->Rows[j]->Cells[4]->Value = result[j][3];
					Table->Rows[j]->Cells[5]->Value = result[j][4];
					Table->Rows[j]->Cells[6]->Value = result[j][5];
					Table->Rows[j]->Cells[7]->Value = changes_of_the_step[j].first;
					Table->Rows[j]->Cells[8]->Value = changes_of_the_step[j].second;
					Table->Rows[j]->Cells[9]->Value = Uist;
					Table->Rows[j]->Cells[10]->Value = abs(Uist - y);
				}
				int J = size(result);
				n->Text = System::Convert::ToString(J);
			}
			//maxDif->Visible = true;
			//label16->Visible = true;
		}
		if (выберитеЗадачуToolStripMenuItem->Text == "Основная 1") {
			auto result = runge_kutta_4th_order(f_first_task, LeftBoarder, U01, InitialStep, maxStep, Epsilon, i, rightBoarder, EpsilonBoarder, &changes_of_the_step, &for_test_task);
			double dif = rightBoarder - result[size(result) - 1][0];
			difBoarder->Text = System::Convert::ToString(dif);
			//this->picture->Series[0]->Points->Clear();
			Series^ series0 = gcnew Series();
			series0->ChartType = SeriesChartType::Spline;
			series0->Color = System::Drawing::Color::Red;
			series0->LegendText = "Численное решение";
			series0->DataPointCustomProperties::BorderWidth = 2;
			picture->Series->Add(series0);
			if (i == 0) {
				for (int j = 0; j < size(result); j++) {
					double x = result[j][0];
					double y = result[j][1];
					this->picture->Series[0]->Points->AddXY(x, y);//рисуем численную траекторию
					Table->Rows->Add();
					Table->Rows[j]->Cells[0]->Value = j + 1;
					Table->Rows[j]->Cells[1]->Value = x;
					Table->Rows[j]->Cells[2]->Value = y;
					Table->Rows[j]->Cells[3]->Value = " - ";
					Table->Rows[j]->Cells[4]->Value = " - ";
					Table->Rows[j]->Cells[5]->Value = " - ";
					Table->Rows[j]->Cells[6]->Value = result[j][2];
					Table->Rows[j]->Cells[7]->Value = " - ";
					Table->Rows[j]->Cells[8]->Value = " - ";
				}
			}
			int J = size(result);
			n->Text = System::Convert::ToString(J);
			if (i == 1) {
				double total_divisions = changes_of_the_step[size(result) - 1].first;
				double total_doub = changes_of_the_step[size(result) - 1].second;
				div->Text = System::Convert::ToString(total_divisions);
				doub->Text = System::Convert::ToString(total_doub);
				/*Series^ series2 = gcnew Series();
				series2->ChartType = SeriesChartType::Spline;
				series2->Color = System::Drawing::Color::Green;
				series2->LegendText = "Численное решение с шагом в 2 раза меньше";
				series2->DataPointCustomProperties::BorderWidth = 2;
				picture->Series->Add(series2);*/
				double maxOlp = 0;
				for (int k = 0; k < size(result); k++) {
					if (maxOlp < result[k][4]) {
						maxOlp = result[k][4];
					}
				}
				for (int k = 0; k < size(result); k++) {
					if (h_max < result[k][5]) {
						h_max = result[k][5];
						x_max = result[k][0];
					}
				}
				for (int k = 0; k < size(result); k++) {
					if (h_min > result[k][5]) {
						h_min = result[k][5];
						x_min = result[k][0];
					}
				}
				maxOLP->Text = System::Convert::ToString(maxOlp);
				max_step->Text = System::Convert::ToString(h_max);
				x_max_step->Text = System::Convert::ToString(x_max);
				min_step->Text = System::Convert::ToString(h_min);
				x_min_step->Text = System::Convert::ToString(x_min);
				for (int j = 0; j < size(result); j++) {
					double x = result[j][0];
					double y = result[j][1];
					this->picture->Series[0]->Points->AddXY(x, y);
					double y2 = result[j][2];
					//picture->Series[1]->Points->AddXY(x, y2);//рисуем численную траекторию с шагом в 2 раза меньше
					//picture->Series[0]->Points->AddXY(x, y);
					Table->Rows->Add();
					Table->Rows[j]->Cells[0]->Value = j + 1;
					Table->Rows[j]->Cells[1]->Value = x;
					Table->Rows[j]->Cells[2]->Value = y;
					Table->Rows[j]->Cells[3]->Value = y2;
					Table->Rows[j]->Cells[4]->Value = result[j][3];
					Table->Rows[j]->Cells[5]->Value = result[j][4];
					Table->Rows[j]->Cells[6]->Value = result[j][5];
					Table->Rows[j]->Cells[7]->Value = changes_of_the_step[j].first;
					Table->Rows[j]->Cells[8]->Value = changes_of_the_step[j].second;
				}
			}
		}
		if (выберитеЗадачуToolStripMenuItem->Text == "Основная 2") {
			double U02 = Convert::ToDouble(U0_2->Text);
			double A = Convert::ToDouble(ParamA->Text);
			double B = Convert::ToDouble(ParamB->Text);
			auto result = runge_kutta_4th_order_for_system(f_second_task, LeftBoarder, U01, U02, A, B, InitialStep, maxStep, Epsilon, i, rightBoarder, EpsilonBoarder, &changes_of_the_step);
			double dif = rightBoarder - result[size(result) - 1][0];
			difBoarder->Text = System::Convert::ToString(dif);
			//picture->Series[0]->Points->Clear();
			Series^ series0 = gcnew Series();
			series0->ChartType = SeriesChartType::Spline;
			series0->Color = System::Drawing::Color::Red;
			series0->LegendText = "V1";
			series0->DataPointCustomProperties::BorderWidth = 2;
			picture->Series->Add(series0);
			DataGridViewTextBoxColumn^ newColumn1 = gcnew DataGridViewTextBoxColumn();
			newColumn1->HeaderText = "V`_i"; // Установка заголовка
			newColumn1->Name = "Column9"; // Установка имени столбца
			Table->Columns->Add(newColumn1);
			if (i == 0) {
				for (int j = 0; j < size(result); j++) {
					double x = result[j][0];
					double y = result[j][1];
					this->picture->Series[0]->Points->AddXY(x, y);//рисуем численную траекторию
					Table->Rows->Add();
					Table->Rows[j]->Cells[0]->Value = j + 1;
					Table->Rows[j]->Cells[1]->Value = x;
					Table->Rows[j]->Cells[2]->Value = y;
					Table->Rows[j]->Cells[3]->Value = " - ";
					Table->Rows[j]->Cells[4]->Value = " - ";
					Table->Rows[j]->Cells[5]->Value = " - ";
					Table->Rows[j]->Cells[6]->Value = result[j][3];
					Table->Rows[j]->Cells[7]->Value = " - ";
					Table->Rows[j]->Cells[8]->Value = " - ";
					Table->Rows[j]->Cells[9]->Value = result[j][2];
				}
			}
			int J = size(result);
			n->Text = System::Convert::ToString(J);
			if (i == 1) {
				DataGridViewTextBoxColumn^ newColumn2 = gcnew DataGridViewTextBoxColumn();
				newColumn2->HeaderText = "V`_2i"; // Установка заголовка
				newColumn2->Name = "Column10"; // Установка имени столбца
				Table->Columns->Add(newColumn2);
				double total_divisions = changes_of_the_step[size(result) - 1].first;
				double total_doub = changes_of_the_step[size(result) - 1].second;
				div->Text = System::Convert::ToString(total_divisions);
				doub->Text = System::Convert::ToString(total_doub);
				double maxOlp = 0;
				for (int k = 0; k < size(result); k++) {
					if (maxOlp < result[k][7]) {
						maxOlp = result[k][7];
					}
				}
				for (int k = 0; k < size(result); k++) {
					if (h_max < result[k][8]) {
						h_max = result[k][8];
						x_max = result[k][0];
					}
				}
				for (int k = 0; k < size(result); k++) {
					if (h_min > result[k][8]) {
						h_min = result[k][8];
						x_min = result[k][0];
					}
				}
				maxOLP->Text = System::Convert::ToString(maxOlp);
				max_step->Text = System::Convert::ToString(h_max);
				x_max_step->Text = System::Convert::ToString(x_max);
				min_step->Text = System::Convert::ToString(h_min);
				x_min_step->Text = System::Convert::ToString(x_min);
				Series^ series2 = gcnew Series();
				series2->ChartType = SeriesChartType::Spline;
				series2->Color = System::Drawing::Color::Green;
				series2->LegendText = "V2";
				series2->DataPointCustomProperties::BorderWidth = 2;
				picture->Series->Add(series2);
				for (int j = 0; j < size(result); j++) {
					double x = result[j][0];
					double y = result[j][1];
					picture->Series[0]->Points->AddXY(x, y);
					double y2 = result[j][2];
					picture->Series[1]->Points->AddXY(x, y2);//рисуем численную траекторию второй компоненты
					Table->Rows->Add();
					Table->Rows[j]->Cells[0]->Value = j + 1;
					Table->Rows[j]->Cells[1]->Value = x;
					Table->Rows[j]->Cells[2]->Value = y;
					Table->Rows[j]->Cells[3]->Value = y2;
					Table->Rows[j]->Cells[4]->Value = result[j][5];
					Table->Rows[j]->Cells[5]->Value = result[j][7];
					Table->Rows[j]->Cells[6]->Value = result[j][8];
					Table->Rows[j]->Cells[7]->Value = changes_of_the_step[j].first;
					Table->Rows[j]->Cells[8]->Value = changes_of_the_step[j].second;
					Table->Rows[j]->Cells[9]->Value = result[j][3];
					Table->Rows[j]->Cells[10]->Value = result[j][4];
				}

			}
			//System::Void MyForm_Paint(System::Object ^ sender, System::Windows::Forms::PaintEventArgs ^ e) {
			//	Graphics^ g = e->Graphics; // Используем переданный объект e
			//	Pen^ pen = gcnew Pen(Color::Black);

			//	// Рисуем оси
			//	g->DrawLine(pen, 400, 0, 400, 600); // Вертикальная ось
			//	g->DrawLine(pen, 0, 300, 800, 300); // Горизонтальная ось

			//	double U1 = 0; // Начальные условия
			//	double U2 = 0;
			//	double dt = 0.01; // Шаг времени
			//	double t_max = 10.0; // Максимальное время
			//	for (double t = 0; t < t_max; t += dt) {
			//		auto res = f_second_task(U1, U2, LeftBoarder, A, B); // Ваша функция
			//		double dU1 = res.first;
			//		double dU2 = res.second;
			//		U1 += dU1 * dt;
			//		U2 += dU2 * dt;
			//		// Рисуем точку на графике
			//		int screenU1 = (int)(U1 * 10) + 400; // Масштабирование и смещение
			//		int screenU2 = 300 - (int)(U2 * 10); // Масштабирование и смещение
			//		g->DrawEllipse(pen, screenU1, screenU2, 2, 2); // Рисуем точку
			//	}
			//	//delete pen;
			//}
		}

		for each (Control ^ control in this->Controls)
		{
			control->Visible = false;
		}
		Table->Visible = true;
		n->Visible = true;
		picture->Visible = true;
		picture2->Visible = false;
		picture->ChartAreas[0]->CursorX->IsUserEnabled = true;
		picture->ChartAreas[0]->CursorX->IsUserSelectionEnabled = true;
		picture->ChartAreas[0]->AxisX->ScaleView->Zoomable = true;
		picture->ChartAreas[0]->AxisX->ScrollBar->IsPositionedInside = true;

		picture->ChartAreas[0]->CursorY->IsUserEnabled = true;
		picture->ChartAreas[0]->CursorY->IsUserSelectionEnabled = true;
		picture->ChartAreas[0]->AxisY->ScaleView->Zoomable = true;
		picture->ChartAreas[0]->AxisY->ScrollBar->IsPositionedInside = true;
		reference->Visible = true;
		difBoarder->Visible = true;
		div->Visible = true;
		doub->Visible = true;
		max_step->Visible = true;
		x_max_step->Visible = true;
		min_step->Visible = true;
		x_min_step->Visible = true;
		maxOLP->Visible = true;
		label7->Visible = true;
		label8->Visible = true;
		label9->Visible = true;
		label10->Visible = true;
		label11->Visible = true;
		label12->Visible = true;
		label13->Visible = true;
		label14->Visible = true;
		label15->Visible = true;
		back1->Visible = true;
		label17->Visible = true;
		if (i == 0) {
			label9->Visible = false;
			maxOLP->Visible = false;
			max_step->Visible = false;
			x_max_step->Visible = false;
			min_step->Visible = false;
			x_min_step->Visible = false;
			label10->Visible = false;
			label11->Visible = false;
			div->Visible = false;
			doub->Visible = false;
			label12->Visible = false;
			label13->Visible = false;
			label14->Visible = false;
			label15->Visible = false;

		}
		if (выберитеЗадачуToolStripMenuItem->Text == "Тестовая") {
			x_max_dif->Visible = true;
			label2->Visible = true;
			x_max_uv->Visible = true;
			label18->Visible = true;
		}
		if (выберитеЗадачуToolStripMenuItem->Text == "Основная 2") {
			PhasePortr->Visible = true;
		}
	}
		 //  Graphics^ g;
	private: System::Void back1_Click(System::Object^ sender, System::EventArgs^ e) {
		picture->Series->Clear();
		if (выберитеЗадачуToolStripMenuItem->Text == "Основная 2") {
			picture2->Series->Clear();
		}
		Table->Rows->Clear();
		for each (Control ^ control in this->Controls)
		{
			control->Visible = true;
		}
		if (выберитеЗадачуToolStripMenuItem->Text != "Основная 2") {
			U0_2->Visible = false;
			ParamA->Visible = false;
			ParamB->Visible = false;
			LabelA->Visible = false;
			labelB->Visible = false;
		}
		picture2->Visible = false;
		Table->Visible = false;
		picture->Visible = false;
		reference->Visible = false;
		difBoarder->Visible = false;
		div->Visible = false;
		doub->Visible = false;
		max_step->Visible = false;
		x_max_step->Visible = false;
		maxOLP->Visible = false;
		min_step->Visible = false;
		x_min_step->Visible = false;
		label7->Visible = false;
		label8->Visible = false;
		label9->Visible = false;
		label10->Visible = false;
		label11->Visible = false;
		label12->Visible = false;
		x_max_uv->Visible = false;
		label18->Visible = false;
		label13->Visible = false;
		label14->Visible = false;
		label15->Visible = false;
		back1->Visible = false;
		PhasePortr->Visible = false;
		x_max_dif->Visible = false;
		label2->Visible = false;
		n->Visible = false;
		//pictureBox1->Visible = false;
		shouldPaint = false;
		label17->Visible = false;
		labelLeftBoarder->Visible = false;
		labelRightBoarder->Visible = false;
		if (выберитеЗадачуToolStripMenuItem->Text == "Тестовая") {
			Table->Columns->Remove("Column9");
			Table->Columns->Remove("Column10");
		}
		if (выберитеЗадачуToolStripMenuItem->Text == "Основная 2") {
			Table->Columns->Remove("Column9");
			if (withControl->Checked) {
				Table->Columns->Remove("Column10");
			}
		}
		if (withControl->Checked) {
			Step->Visible = false;
		}
		if (withoutControl->Checked) {
			label6->Visible = false;
			epsilon->Visible = false;
			label4->Visible = false;
		}
	}
	private: System::Void PhasePortr_Click(System::Object^ sender, System::EventArgs^ e) {

		for each (Control ^ control in this->Controls)
		{
			control->Visible = false;
		}
		//pictureBox1->Visible = true;
		back1->Visible = true;
		выберитеЗадачуToolStripMenuItem->Visible = true;
		/*shouldPaint = true;
		this->Invalidate();*/
		int stop = 4;
		double U01 = Convert::ToDouble(U0_1->Text);
		double LeftBoarder = Convert::ToDouble(leftBoarder->Text);
		auto str = initialStep->Text;
		double InitialStep = Convert::ToDouble(str);
		double maxStep = Convert::ToInt32(MaxStep->Text);
		double rightBoarder = Convert::ToDouble(RightBoarder->Text);
		double EpsilonBoarder = Convert::ToDouble(epsilonBoarder->Text);
		double Epsilon = 0.01;
		double C1 = 0, C2 = 0;
		vector<pair<double, double>> changes_of_the_step = { {C1,C2} };
		vector<pair<double, double>> for_test_task;
		int i = 0;
		if (withControl->Checked) {
			i = 1; //с контролем локальной погрешности
			double Epsilon = Convert::ToDouble(epsilon->Text);
		}
		double h_max = InitialStep;
		double x_max = LeftBoarder;
		double h_min = InitialStep;
		double x_min = LeftBoarder;
		double U02 = Convert::ToDouble(U0_2->Text);
		double A = Convert::ToDouble(ParamA->Text);
		double B = Convert::ToDouble(ParamB->Text);
		auto result = runge_kutta_4th_order_for_system(f_second_task, LeftBoarder, U01, U02, A, B, InitialStep, maxStep, Epsilon, i, rightBoarder, EpsilonBoarder, &changes_of_the_step);
		Series^ series = gcnew Series();
		series->ChartType = SeriesChartType::Spline;
		series->Color = System::Drawing::Color::Green;
		series->LegendText = "phasePortr";
		series->DataPointCustomProperties::BorderWidth = 2;
		picture2->Series->Add(series);
		for (int j = 0; j < size(result); j++) {
			double x = result[j][1];
			double y = result[j][2];
			picture2->Series[0]->Points->AddXY(x, y);
		}
		picture2->Visible = true;
	}
	//private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//if (shouldPaint == true) {
		//	g = e->Graphics;
		//	g->Clear(Color::White);
		//	double U01 = Convert::ToDouble(U0_1->Text);
		//	double U02 = Convert::ToDouble(U0_2->Text);
		//	double A = Convert::ToDouble(ParamA->Text);
		//	double B = Convert::ToDouble(ParamB->Text);
		//	double LeftBoarder = Convert::ToDouble(leftBoarder->Text);
		//	const int width = this->ClientSize.Width;
		//	const int height = this->ClientSize.Height;
		//	const int scale = 10; // Масштаб для рисования
		//	const double dt = 0.01; // Шаг времени
		//	const int iterations = 10000; // Количество итераций
		//	g->DrawLine(Pens::Black, 10, 190, 650, 190); // ось X
		//	g->DrawLine(Pens::Black, 320, 10, 320, 390); // ось Y
		//	//Начальные условия
		//	double x = U01;
		//	double y = U02;
		//	double t = LeftBoarder;

		//	// Создаем пенал для рисования
		//	Pen^ pen = gcnew Pen(Color::Blue);

		//	// Рисуем фазовый портрет
		//	for (int i = 0; i < iterations; i++)
		//	{
		//		// Рисуем точку
		//		int drawX = static_cast<int>(width / 2 + x * scale);
		//		int drawY = static_cast<int>(height / 2 - y * scale);
		//		g->DrawEllipse(pen, drawX, drawY, 2, 2);

		//		// Вычисляем производные
		//		auto res = f_second_task(x, y, t, A, B);
		//		double dx = res.first;
		//		double dy = res.second;

		//		// Обновляем значения
		//		x += dx * dt;
		//		y += dy * dt;
		//		t += dt;
		//	}
		//}
	//	;
	//}
	};
}
