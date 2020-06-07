#pragma once
#include "angle.h"
#include <string>
#include <cmath> 
int t = 0;
int num=0;
int num2=0;
bool one = false, two = false, three = false, four = false;
bool minone=false, mintwo=false;
int grad1 = -1, min1 = -1, sec1 = -1;
int grad2 = -1, min2 = -1, sec2 = -1;
int operac = 0;
int func = 0;
int arcfunc = 0;
bool g1, g2;
double otvet = 0;
bool otvetb = false;
int povorot = 0;

namespace calcv2 {
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Button^ button_pls;
	private: System::Windows::Forms::Button^ button_mul;
	private: System::Windows::Forms::Button^ button_rez;
	private: System::Windows::Forms::Button^ button_min;
	private: System::Windows::Forms::Button^ button_div;

	private: System::Windows::Forms::Button^ button_del;
	private: System::Windows::Forms::Button^ button_clr;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::TextBox^ textbox;
	private: System::Windows::Forms::Button^ grad;
	private: System::Windows::Forms::Button^ min;
	private: System::Windows::Forms::Button^ sec;
	private: System::Windows::Forms::Button^ button_sin;
	private: System::Windows::Forms::Button^ button_arcsin;


	private: System::Windows::Forms::Button^ button_cos;
	private: System::Windows::Forms::Button^ button_tan;
	private: System::Windows::Forms::Button^ button_ctg;

	private: System::Windows::Forms::Button^ button_arccos;
	private: System::Windows::Forms::Button^ button_arctan;
	private: System::Windows::Forms::Button^ button_arcctg;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ImageList^ imageList1;


	private: System::ComponentModel::IContainer^ components;















	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		//сгенерированный код
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->textbox = (gcnew System::Windows::Forms::TextBox());
			this->button_pls = (gcnew System::Windows::Forms::Button());
			this->button_min = (gcnew System::Windows::Forms::Button());
			this->button_mul = (gcnew System::Windows::Forms::Button());
			this->button_div = (gcnew System::Windows::Forms::Button());
			this->button_rez = (gcnew System::Windows::Forms::Button());
			this->button_del = (gcnew System::Windows::Forms::Button());
			this->button_clr = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->grad = (gcnew System::Windows::Forms::Button());
			this->min = (gcnew System::Windows::Forms::Button());
			this->sec = (gcnew System::Windows::Forms::Button());
			this->button_sin = (gcnew System::Windows::Forms::Button());
			this->button_arcsin = (gcnew System::Windows::Forms::Button());
			this->button_cos = (gcnew System::Windows::Forms::Button());
			this->button_tan = (gcnew System::Windows::Forms::Button());
			this->button_ctg = (gcnew System::Windows::Forms::Button());
			this->button_arccos = (gcnew System::Windows::Forms::Button());
			this->button_arctan = (gcnew System::Windows::Forms::Button());
			this->button_arcctg = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Aqua;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(295, 424);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(44, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Aqua;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(361, 424);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(44, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Aqua;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(427, 424);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(44, 44);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Aqua;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(295, 358);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(44, 44);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Aqua;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(361, 358);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(44, 44);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Aqua;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Location = System::Drawing::Point(427, 358);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(44, 44);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Aqua;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Location = System::Drawing::Point(295, 292);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(44, 44);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Aqua;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Location = System::Drawing::Point(361, 292);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(44, 44);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Aqua;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Location = System::Drawing::Point(427, 292);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(44, 44);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel2->Location = System::Drawing::Point(42, 42);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(2);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(685, 139);
			this->flowLayoutPanel2->TabIndex = 1;
			// 
			// textbox
			// 
			this->textbox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textbox->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->textbox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textbox->Font = (gcnew System::Drawing::Font(L"Verdana", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textbox->Location = System::Drawing::Point(42, 43);
			this->textbox->Margin = System::Windows::Forms::Padding(2);
			this->textbox->Multiline = true;
			this->textbox->Name = L"textbox";
			this->textbox->Size = System::Drawing::Size(685, 138);
			this->textbox->TabIndex = 12;
			this->textbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textbox->TextChanged += gcnew System::EventHandler(this, &MyForm::textbox_TextChanged);
			// 
			// button_pls
			// 
			this->button_pls->BackColor = System::Drawing::Color::RoyalBlue;
			this->button_pls->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_pls->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_pls->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->button_pls->Location = System::Drawing::Point(500, 215);
			this->button_pls->Margin = System::Windows::Forms::Padding(2);
			this->button_pls->Name = L"button_pls";
			this->button_pls->Size = System::Drawing::Size(60, 60);
			this->button_pls->TabIndex = 3;
			this->button_pls->Text = L"+";
			this->button_pls->UseVisualStyleBackColor = false;
			this->button_pls->Click += gcnew System::EventHandler(this, &MyForm::button_pls_Click);
			// 
			// button_min
			// 
			this->button_min->BackColor = System::Drawing::Color::RoyalBlue;
			this->button_min->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_min->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->button_min->Location = System::Drawing::Point(500, 302);
			this->button_min->Margin = System::Windows::Forms::Padding(2);
			this->button_min->Name = L"button_min";
			this->button_min->Size = System::Drawing::Size(60, 60);
			this->button_min->TabIndex = 6;
			this->button_min->Text = L"-";
			this->button_min->UseVisualStyleBackColor = false;
			this->button_min->Click += gcnew System::EventHandler(this, &MyForm::button_min_Click);
			// 
			// button_mul
			// 
			this->button_mul->BackColor = System::Drawing::Color::RoyalBlue;
			this->button_mul->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_mul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mul->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->button_mul->Location = System::Drawing::Point(500, 389);
			this->button_mul->Margin = System::Windows::Forms::Padding(2);
			this->button_mul->Name = L"button_mul";
			this->button_mul->Size = System::Drawing::Size(60, 60);
			this->button_mul->TabIndex = 4;
			this->button_mul->Text = L"*";
			this->button_mul->UseVisualStyleBackColor = false;
			this->button_mul->Click += gcnew System::EventHandler(this, &MyForm::button_mul_Click);
			// 
			// button_div
			// 
			this->button_div->BackColor = System::Drawing::Color::RoyalBlue;
			this->button_div->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_div->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->button_div->Location = System::Drawing::Point(500, 476);
			this->button_div->Margin = System::Windows::Forms::Padding(2);
			this->button_div->Name = L"button_div";
			this->button_div->Size = System::Drawing::Size(60, 60);
			this->button_div->TabIndex = 7;
			this->button_div->Text = L"/";
			this->button_div->UseVisualStyleBackColor = false;
			this->button_div->Click += gcnew System::EventHandler(this, &MyForm::button_div_Click);
			// 
			// button_rez
			// 
			this->button_rez->BackColor = System::Drawing::Color::PaleGreen;
			this->button_rez->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_rez->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_rez->ForeColor = System::Drawing::Color::Black;
			this->button_rez->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button_rez->Location = System::Drawing::Point(589, 466);
			this->button_rez->Margin = System::Windows::Forms::Padding(2);
			this->button_rez->Name = L"button_rez";
			this->button_rez->Size = System::Drawing::Size(137, 68);
			this->button_rez->TabIndex = 5;
			this->button_rez->Text = L"=";
			this->button_rez->UseVisualStyleBackColor = false;
			this->button_rez->Click += gcnew System::EventHandler(this, &MyForm::button_rez_Click);
			// 
			// button_del
			// 
			this->button_del->BackColor = System::Drawing::Color::Aqua;
			this->button_del->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_del->Location = System::Drawing::Point(361, 490);
			this->button_del->Margin = System::Windows::Forms::Padding(2);
			this->button_del->Name = L"button_del";
			this->button_del->Size = System::Drawing::Size(110, 44);
			this->button_del->TabIndex = 9;
			this->button_del->Text = L"←";
			this->button_del->UseVisualStyleBackColor = false;
			this->button_del->Click += gcnew System::EventHandler(this, &MyForm::button_del_Click);
			// 
			// button_clr
			// 
			this->button_clr->BackColor = System::Drawing::Color::DarkRed;
			this->button_clr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_clr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_clr->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->button_clr->Location = System::Drawing::Point(589, 217);
			this->button_clr->Margin = System::Windows::Forms::Padding(2);
			this->button_clr->Name = L"button_clr";
			this->button_clr->Size = System::Drawing::Size(137, 68);
			this->button_clr->TabIndex = 10;
			this->button_clr->Text = L"C";
			this->button_clr->UseVisualStyleBackColor = false;
			this->button_clr->Click += gcnew System::EventHandler(this, &MyForm::button_clr_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::Color::Aqua;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button0->Location = System::Drawing::Point(295, 490);
			this->button0->Margin = System::Windows::Forms::Padding(2);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(44, 44);
			this->button0->TabIndex = 11;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// grad
			// 
			this->grad->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->grad->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->grad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->grad->Location = System::Drawing::Point(295, 217);
			this->grad->Name = L"grad";
			this->grad->Size = System::Drawing::Size(44, 44);
			this->grad->TabIndex = 13;
			this->grad->Text = L"°";
			this->grad->UseVisualStyleBackColor = false;
			this->grad->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// min
			// 
			this->min->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->min->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->min->Location = System::Drawing::Point(361, 217);
			this->min->Name = L"min";
			this->min->Size = System::Drawing::Size(44, 44);
			this->min->TabIndex = 13;
			this->min->Text = L"\'";
			this->min->UseVisualStyleBackColor = false;
			this->min->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// sec
			// 
			this->sec->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->sec->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sec->Location = System::Drawing::Point(427, 217);
			this->sec->Name = L"sec";
			this->sec->Size = System::Drawing::Size(44, 44);
			this->sec->TabIndex = 13;
			this->sec->Text = L"\"";
			this->sec->UseVisualStyleBackColor = false;
			this->sec->Click += gcnew System::EventHandler(this, &MyForm::sec_Click);
			// 
			// button_sin
			// 
			this->button_sin->BackColor = System::Drawing::Color::SpringGreen;
			this->button_sin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_sin->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_sin->Location = System::Drawing::Point(44, 218);
			this->button_sin->Name = L"button_sin";
			this->button_sin->Size = System::Drawing::Size(98, 39);
			this->button_sin->TabIndex = 14;
			this->button_sin->Text = L"sin";
			this->button_sin->UseVisualStyleBackColor = false;
			this->button_sin->Click += gcnew System::EventHandler(this, &MyForm::button_sin_Click);
			// 
			// button_arcsin
			// 
			this->button_arcsin->BackColor = System::Drawing::Color::SpringGreen;
			this->button_arcsin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_arcsin->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_arcsin->Location = System::Drawing::Point(165, 218);
			this->button_arcsin->Name = L"button_arcsin";
			this->button_arcsin->Size = System::Drawing::Size(98, 39);
			this->button_arcsin->TabIndex = 14;
			this->button_arcsin->Text = L"arcsin";
			this->button_arcsin->UseVisualStyleBackColor = false;
			this->button_arcsin->Click += gcnew System::EventHandler(this, &MyForm::button_arcsin_Click);
			// 
			// button_cos
			// 
			this->button_cos->BackColor = System::Drawing::Color::SpringGreen;
			this->button_cos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_cos->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_cos->Location = System::Drawing::Point(44, 287);
			this->button_cos->Name = L"button_cos";
			this->button_cos->Size = System::Drawing::Size(98, 39);
			this->button_cos->TabIndex = 14;
			this->button_cos->Text = L"cos";
			this->button_cos->UseVisualStyleBackColor = false;
			this->button_cos->Click += gcnew System::EventHandler(this, &MyForm::button_cos_Click);
			// 
			// button_tan
			// 
			this->button_tan->BackColor = System::Drawing::Color::SpringGreen;
			this->button_tan->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_tan->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_tan->Location = System::Drawing::Point(44, 356);
			this->button_tan->Name = L"button_tan";
			this->button_tan->Size = System::Drawing::Size(98, 39);
			this->button_tan->TabIndex = 14;
			this->button_tan->Text = L"tan";
			this->button_tan->UseVisualStyleBackColor = false;
			this->button_tan->Click += gcnew System::EventHandler(this, &MyForm::button_tan_Click);
			// 
			// button_ctg
			// 
			this->button_ctg->BackColor = System::Drawing::Color::SpringGreen;
			this->button_ctg->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_ctg->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_ctg->Location = System::Drawing::Point(44, 425);
			this->button_ctg->Name = L"button_ctg";
			this->button_ctg->Size = System::Drawing::Size(98, 39);
			this->button_ctg->TabIndex = 14;
			this->button_ctg->Text = L"ctg";
			this->button_ctg->UseVisualStyleBackColor = false;
			this->button_ctg->Click += gcnew System::EventHandler(this, &MyForm::button_ctg_Click);
			// 
			// button_arccos
			// 
			this->button_arccos->BackColor = System::Drawing::Color::SpringGreen;
			this->button_arccos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_arccos->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_arccos->ImageIndex = 1;
			this->button_arccos->Location = System::Drawing::Point(165, 287);
			this->button_arccos->Name = L"button_arccos";
			this->button_arccos->Size = System::Drawing::Size(98, 39);
			this->button_arccos->TabIndex = 14;
			this->button_arccos->Text = L"arccos";
			this->button_arccos->UseVisualStyleBackColor = false;
			this->button_arccos->Click += gcnew System::EventHandler(this, &MyForm::button_arccos_Click);
			// 
			// button_arctan
			// 
			this->button_arctan->BackColor = System::Drawing::Color::SpringGreen;
			this->button_arctan->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_arctan->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_arctan->Location = System::Drawing::Point(165, 356);
			this->button_arctan->Name = L"button_arctan";
			this->button_arctan->Size = System::Drawing::Size(98, 39);
			this->button_arctan->TabIndex = 14;
			this->button_arctan->Text = L"arctan";
			this->button_arctan->UseVisualStyleBackColor = false;
			this->button_arctan->Click += gcnew System::EventHandler(this, &MyForm::button_arctan_Click);
			// 
			// button_arcctg
			// 
			this->button_arcctg->BackColor = System::Drawing::Color::SpringGreen;
			this->button_arcctg->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_arcctg->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_arcctg->Location = System::Drawing::Point(165, 425);
			this->button_arcctg->Name = L"button_arcctg";
			this->button_arcctg->Size = System::Drawing::Size(98, 39);
			this->button_arcctg->TabIndex = 14;
			this->button_arcctg->Text = L"arcctg";
			this->button_arcctg->UseVisualStyleBackColor = false;
			this->button_arcctg->Click += gcnew System::EventHandler(this, &MyForm::button_arcctg_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::DarkRed;
			this->button10->Location = System::Drawing::Point(40, 490);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(227, 47);
			this->button10->TabIndex = 16;
			this->button10->Text = L"↻\r\n";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(608, 322);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 100);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"2 (1).png");
			this->imageList1->Images->SetKeyName(1, L"2 (25).png");
			this->imageList1->Images->SetKeyName(2, L"2 (49).png");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(768, 575);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textbox);
			this->Controls->Add(this->button_ctg);
			this->Controls->Add(this->button_tan);
			this->Controls->Add(this->button_cos);
			this->Controls->Add(this->button_arcctg);
			this->Controls->Add(this->button_arctan);
			this->Controls->Add(this->button_arccos);
			this->Controls->Add(this->button_arcsin);
			this->Controls->Add(this->button_sin);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->sec);
			this->Controls->Add(this->min);
			this->Controls->Add(this->grad);
			this->Controls->Add(this->button_div);
			this->Controls->Add(this->button_min);
			this->Controls->Add(this->button_pls);
			this->Controls->Add(this->button_mul);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button_del);
			this->Controls->Add(this->button_rez);
			this->Controls->Add(this->button_clr);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void clearrr()
		{
			otvet = 0;
			otvetb = false;
			num = 0;
			num2 = 0;
			one = false, two = false, three = false, four = false;
			minone = false, mintwo = false;
			operac = 0;
			g1 = false, g2 = false;
			textbox->Text = "";
			grad1 = -1, min1 = -1, sec1 = -1;
			grad2 = -1, min2 = -1, sec2 = -1;
			func = arcfunc = 0;
			povorot = 0;
			pictureBox1->Image = imageList1->Images[povorot];
		}
		void knopka(int knop) {
			if (arcfunc == 0 && povorot==0 && func == 0 && arcfunc == 0)
			{
				if (otvetb)
				{
					clearrr();
				}
				std::string y = std::to_string(knop);
				System::String^ s = gcnew System::String(y.c_str());
					if (operac == 0)
					{
						if (!g1)
						{
							if (num <= 999999)
							{
								if (!one || (one && num != 0))
								{
									one = true;
									num = num * 10 + knop;
									textbox->AppendText(s);
								}
							}
							else System::Windows::Forms::MessageBox::Show("выход за пределы допустимых значений", "Ошибка");
						}
						else if (sec1 == -1)
						{
							if (knop != 0 || num > 0)
							{
								num = num * 10 + knop;
								if (num > 59)
								{
									num = num / 10;
									System::Windows::Forms::MessageBox::Show("секунд или минут не больше 59", "Ошибка");
								}
								else
								{
									textbox->AppendText(s);
									two = false;
								}
							}
							else System::Windows::Forms::MessageBox::Show("0 секунд или минут вводить не нужно", "Ошибка");
						}
					}
					else
					{
						if (!g2)
						{
							if (operac == 2)
							{
								if (minone != mintwo)
								{
									if (num2 <= 999999)
									{
										if (!three)
										{
											three = true;
											num2 = num2 * 10 + knop;
											textbox->AppendText(s);
										}
										else if (num2 != 0)
										{
											num2 = num2 * 10 + knop;
											textbox->AppendText(s);
										}
									}
									else System::Windows::Forms::MessageBox::Show("выход за пределы допустимых значений", "Ошибка");
								}
								else if ((num + num2 <= 999999) && (grad1 + num2 <= 999999))
								{
									if (!three)
									{
										three = true;
										num2 = num2 * 10 + knop;
										textbox->AppendText(s);
									}
									else if (num2 != 0)
									{
										num2 = num2 * 10 + knop;
										textbox->AppendText(s);
									}
								}
								else System::Windows::Forms::MessageBox::Show("выход за пределы допустимых значений", "Ошибка");
							}
							if (operac == 1)
							{
								if (minone == mintwo)
								{
									if (num2 <= 999999)
									{
										if (!three)
										{
											three = true;
											num2 = num2 * 10 + knop;
											textbox->AppendText(s);
										}
										else if (num2 != 0)
										{
											num2 = num2 * 10 + knop;
											textbox->AppendText(s);
										}
									}
									else System::Windows::Forms::MessageBox::Show("выход за пределы допустимых значений", "Ошибка");
								}
								else if ((num + num2 <= 999999) && (grad1 + num2 <= 999999))
								{
									if (!three)
									{
										three = true;
										num2 = num2 * 10 + knop;
										textbox->AppendText(s);
									}
									else if (num2 != 0)
									{
										num2 = num2 * 10 + knop;
										textbox->AppendText(s);
									}
								}
								else System::Windows::Forms::MessageBox::Show("выход за пределы допустимых значений", "Ошибка");
							}
							if (operac == 3)
							{
								if (!three || (three && num2 != 0))
								{
									int temp = num2 * 10 + knop;
									if ((num * temp <= 9999999) && (grad1 * temp <= 9999999))
									{
										num2 = temp;
										three = true;
										textbox->AppendText(s);
									}
									else System::Windows::Forms::MessageBox::Show("выход за пределы допустимых значений", "Ошибка");
								}
							}
							if (operac == 4)
							{
								if (num2 <= 999999)
								{
									if (knop != 0)
									{
										num2 = num2 * 10 + knop;
										three = true;
										textbox->AppendText(s);
									}
									if (knop==0)
										if (three)
										{
											num2 = num2 * 10;
											textbox->AppendText(s);
										}else System::Windows::Forms::MessageBox::Show("нельзя делить на 0", "Ошибка");
								}
								else System::Windows::Forms::MessageBox::Show("выход за пределы допустимых значений", "Ошибка");
							}
						}
						else if (sec2 == -1)
						{
							if (knop != 0 || num2 > 0)
							{
								num2 = num2 * 10 + knop;
								if (num2 > 59)
								{
									num2 = num2 / 10;
									System::Windows::Forms::MessageBox::Show("секунд или минут не больше 59", "Ошибка");
								}
								else
								{
									textbox->AppendText(s);
									four = false;
								}
							}
							else System::Windows::Forms::MessageBox::Show("0 секунд или минут вводить не нужно", "Ошибка");
						}
					}
			}
		}
		void knopkafunc(int i)
		{
			if (povorot == 0)
			{
				if ((g1 && operac == 0 && two) || (three && ((g1 && g2 && two && four) || ((operac == 3 || operac == 4) && (g1 && two && !g2) || (g2 && !g1 && four)))))
				{
					if (func != 0)
					{
						String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
						textbox->Text = textp;
						textbox->Text = textbox->Text->Remove(0, 4);
					}
					func = i;
					textbox->Text += ")";
					System::String^ s = textbox->Text;
					switch (i)
					{
					case 1:
						textbox->Text = "sin(";
						break;
					case 2:
						textbox->Text = "cos(";
						break;
					case 3:
						textbox->Text = "tan(";
						break;
					case 4:
						textbox->Text = "ctg(";
						break;
					}
					textbox->AppendText(s);
				}
			}
		}
		void knopkaarcfunc(int i)
		{
			if (otvetb)
			{
				if (arcfunc != 0)
				{
					String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
					textbox->Text = textp;
					textbox->Text = textbox->Text->Remove(0, 7);
				}
				arcfunc = i;
				textbox->Text += ")";
				System::String^ s = textbox->Text;
				switch (i)
				{
				case 1:
					textbox->Text = "arcsin(";
					break;
				case 2:
					textbox->Text = "arccos(";
					break;
				case 3:
					textbox->Text = "arctan(";
					break;
				case 4:
					textbox->Text = "arcctg(";
					break;
				}
				textbox->AppendText(s);
			}
		}
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		knopka(0);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		knopka(1);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		knopka(2);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		knopka(3);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		knopka(4);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		knopka(5);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		knopka(6);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		knopka(7);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		knopka(8);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		knopka(9);
	}
		   //операции
	private: System::Void button_pls_Click(System::Object^ sender, System::EventArgs^ e) {
		if (povorot == 0)
		{
			if (((g1 && two == true) || (!g1)) && func == 0)
			{
				if (one && !three && !mintwo)
				{
					if (operac != 0)
					{
						String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
						textbox->Text = textp;
					}
					two = true;
					operac = 2;
					textbox->Text += "+";
				}
			}
		}
	}
	private: System::Void button_min_Click(System::Object^ sender, System::EventArgs^ e) {
		if (povorot == 0)
		{
			if (arcfunc == 0)
			{
				if (func == 0)
				{
					if (!one && !minone)
					{
						if (otvetb)
							clearrr();
						minone = true;
						textbox->Text += "-";
						return;
					}
					if ((g1 && two == true) || (!g1))
					{
						if (one && operac > 0 && mintwo == false && !three)
						{
							mintwo = true;
							textbox->Text += "-";
						}
						if (one && !three && !mintwo)
						{
							if (operac == 0)
								two = true;
							operac = 1;
							textbox->Text += "-";
						}
					}
				}
			}
		}
	}
	private: System::Void button_mul_Click(System::Object^ sender, System::EventArgs^ e) {
		if (povorot == 0)
		{
			if (((g1 && two == true) || (!g1)) && func == 0)
			{
				if (one && !three && !mintwo)
				{
					if (operac != 0)
					{
						String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
						textbox->Text = textp;
					}
					two = true;
					operac = 3;
					textbox->Text += "*";
				}
			}
		}
	}
	private: System::Void button_div_Click(System::Object^ sender, System::EventArgs^ e) {
		if (povorot == 0)
		{
			if (((g1 && two == true) || (!g1)) && func == 0)
			{
				if (one && !three && !mintwo)
				{
					if (operac != 0)
					{
						String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
						textbox->Text = textp;
					}
					two = true;
					operac = 4;
					textbox->Text += "/";
				}
			}
		}
	}
		   //вывод результата
	private: System::Void button_rez_Click(System::Object^ sender, System::EventArgs^ e) {
		if (povorot == 0)
		{
			if (arcfunc != 0)
			{
				angle k;
				if (arcfunc == 1)
					k.dubl(asin(otvet));
				if (arcfunc == 2)
					k.dubl(acos(otvet));
				if (arcfunc == 3)
					k.dubl(atan(otvet));
				if (arcfunc == 4)
				{
					k.dubl(PI/2-atan(otvet));
				}
				clearrr();
				minone = k.minus;
				grad1 = k.grad;
				min1 = k.min;
				sec1 = k.sec;
				if (minone)
					textbox->Text = "-";
				if (grad1 != 0)
				{
					std::string y = std::to_string(grad1);
					System::String^ s = gcnew System::String(y.c_str());
					textbox->AppendText(s);
					textbox->Text += "°";
				}
				else grad1 = -1;
				if (min1 != 0)
				{
					std::string y = std::to_string(min1);
					System::String^ s = gcnew System::String(y.c_str());
					textbox->AppendText(s);
					textbox->Text += "'";
				}
				else min1 = -1;
				if (sec1 != 0)
				{
					std::string y = std::to_string(sec1);
					System::String^ s = gcnew System::String(y.c_str());
					textbox->AppendText(s);
					textbox->Text += "''";
				}
				else sec1 = -1;
				grad2 = min2 = sec2 = -1;
				g1 = true;
				g2 = false;
				if (grad1 != -1 || min1 != -1 || sec1 != -1)
					one = two = true;
				else
				{
					if (minone)
					{
						String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
						textbox->Text = textp;
					}
					minone = false;
					one = two = true;
					grad1 = 0;
					std::string y = std::to_string(0);
					System::String^ s = gcnew System::String(y.c_str());
					textbox->AppendText(s);
					textbox->Text += "°";
				}
			}
			else
			{
				if (operac != 0)
				{
					if (!g1 && !g2)
					{
						if (minone)
						{
							num = -num;
							minone = false;
						}
						if (mintwo)
						{
							num2 = -num2;
							mintwo = false;
						}
						if (operac == 1)
						{
							num = num - num2;
						}
						if (operac == 2)
						{
							num = num + num2;
						}
						if (operac == 3)
						{
							num = num * num2;
						}
						if (operac == 4)
						{
							if(num2!=0)
							num = num / num2;
							else
							{
								System::Windows::Forms::MessageBox::Show("на 0 делить нельзя", "Ошибка");
								clearrr();
								return;
							}
						}
						textbox->Text = "";
						if (num < 0)
						{
							textbox->Text = "-";
							minone = true;
							num = -num;
						}
						std::string y = std::to_string(num);
						System::String^ s = gcnew System::String(y.c_str());
						textbox->AppendText(s);
						num2 = 0;
						operac = 0;
						one = true, two = false, three = false, four = false;
						grad1 = min1 = sec1 = grad2 = min2 = sec2 = -1;
					}
					else
					{
						if (((!g2 && (operac == 3 || operac == 4)) || four) && two && three)
						{
							if (grad1 == -1)
								grad1 = 0;
							if (min1 == -1)
								min1 = 0;
							if (sec1 == -1)
								sec1 = 0;
							if (grad2 == -1)
								grad2 = 0;
							if (min2 == -1)
								min2 = 0;
							if (sec2 == -1)
								sec2 = 0;
							angle k1(minone, grad1, min1, sec1);
							angle k2(mintwo, grad2, min2, sec2);
							angle k3;
							if (operac == 1)
							{
								k3 = k1 - k2;
							}
							if (operac == 2)
							{
								k3 = k1 + k2;
							}
							if (operac == 3)
							{
								if (g1)
								{
									if (mintwo)
										num2 = -num2;
									k3 = k1 * num2;
								}
								if (g2)
								{
									if (minone)
										num = -num;
									k3 = k2 * num;
								}
							}
							if (operac == 4)
							{
								if (g1)
								{
									if (mintwo)
										num2 = -num2;
									if(num2!=0)
									k3 = k1 / num2;
									else
									{
										System::Windows::Forms::MessageBox::Show("на 0 делить нельзя", "Ошибка");
										clearrr();
										return;
									}
								}
							}
							minone = k3.minus;
							grad1 = k3.grad;
							min1 = k3.min;
							sec1 = k3.sec;
							if (func != 0)
							{
								otvetb = true;
								double m = k3.radshow();
								switch (func)
								{
								case 1:
									otvet = sin(m);
									break;
								case 2:
									otvet = cos(m);
									break;
								case 3:
									if ((grad1 + 90) % 180 == 0 && min1 == 0 && sec1 == 0)
									{
										otvetb = false;
										System::Windows::Forms::MessageBox::Show("такого тангенса нет", "Ошибка");
									}
									else
										otvet = tan(m);
									break;
								case 4:
									if (grad1 % 180 == 0 && min1 == 0 && sec1 == 0)
									{
										otvetb = false;
										System::Windows::Forms::MessageBox::Show("такого котангенса нет", "Ошибка");
									}
									else
										otvet = double(1) / tan(m);
									break;
								}
								if (otvetb)
								{
									if (otvet < 0)
										textbox->Text = "-";
									std::string y = std::to_string(otvet);
									System::String^ s = gcnew System::String(y.c_str());
									textbox->Text = s;
								}
								else
								{
									textbox->Text = "";
									otvet = 0;
								}
								num = 0;
								num2 = 0;
								one = false, two = false, three = false, four = false;
								bool minone = false, mintwo = false;
								grad1 = -1, min1 = -1, sec1 = -1;
								grad2 = -1, min2 = -1, sec2 = -1;
								operac = 0;
								arcfunc = 0;
								g1 = g2 = 0;
								func = 0;
							}
							else
							{
								textbox->Text = "";
								if (minone)
									textbox->Text = "-";
								if (grad1 != 0)
								{
									std::string y = std::to_string(grad1);
									System::String^ s = gcnew System::String(y.c_str());
									textbox->AppendText(s);
									textbox->Text += "°";
								}
								else grad1 = -1;
								if (min1 != 0)
								{
									std::string y = std::to_string(min1);
									System::String^ s = gcnew System::String(y.c_str());
									textbox->AppendText(s);
									textbox->Text += "'";
								}
								else min1 = -1;
								if (sec1 != 0)
								{
									std::string y = std::to_string(sec1);
									System::String^ s = gcnew System::String(y.c_str());
									textbox->AppendText(s);
									textbox->Text += "''";
								}
								else sec1 = -1;
								grad2 = min2 = sec2 = -1;
								g1 = true;
								g2 = false;
								if (grad1 != -1 || min1 != -1 || sec1 != -1)
									one = two = true;
								else
								{
									if (minone)
									{
										String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
										textbox->Text = textp;
									}
									minone = false;
									one = two = true;
									grad1 = 0;
									std::string y = std::to_string(0);
									System::String^ s = gcnew System::String(y.c_str());
									textbox->AppendText(s);
									textbox->Text += "°";
								}
								mintwo = false;
								three = four = false;
								operac = 0;
								num = num2 = 0;
							}
						}
					}
				}
				else if (func != 0)
				{
					otvetb = true;
					if (grad1 == -1)
						grad1 = 0;
					if (min1 == -1)
						min1 = 0;
					if (sec1 == -1)
						sec1 = 0;
					angle k(minone, grad1, min1, sec1);
					double m = k.radshow();
					switch (func)
					{
					case 1:
						otvet = sin(m);
						break;
					case 2:
						otvet = cos(m);
						break;
					case 3:
						if ((grad1 + 90) % 180 == 0 && min1 == 0 && sec1 == 0)
						{
							otvetb = false;
							System::Windows::Forms::MessageBox::Show("такого тангенса нет", "Ошибка");
						}
						else
							otvet = tan(m);
						break;
					case 4:
						if (grad1 % 180 == 0 && min1 == 0 && sec1 == 0)
						{
							otvetb = false;
							System::Windows::Forms::MessageBox::Show("такого котангенса нет", "Ошибка");
						}
						else
							otvet = double(1) / tan(m);
						break;
					}
					if (otvetb)
					{
						if (otvet < 0)
							textbox->Text = "-";
						std::string y = std::to_string(otvet);
						System::String^ s = gcnew System::String(y.c_str());
						textbox->Text = s;
					}
					else
					{
						textbox->Text = "";
						otvet = 0;
					}
					num = 0;
					num2 = 0;
					one = false, two = false, three = false, four = false;
					bool minone = false, mintwo = false;
					grad1 = -1, min1 = -1, sec1 = -1;
					grad2 = -1, min2 = -1, sec2 = -1;
					operac = 0;
					arcfunc = 0;
					g1 = g2 = 0;
					func = 0;
				}
			}
		}
	}
		   //удаление
	private: System::Void button_del_Click(System::Object^ sender, System::EventArgs^ e) {
		if (povorot != 0)
		{
			povorot = 0;
			otvet = 0;
			textbox->Text = "";
			if (minone)
				textbox->Text = "-";
			if (grad1 != 0)
			{
				std::string y = std::to_string(grad1);
				System::String^ s = gcnew System::String(y.c_str());
				textbox->AppendText(s);
				textbox->Text += "°";
			}
			else grad1 = -1;
			if (min1 != 0)
			{
				std::string y = std::to_string(min1);
				System::String^ s = gcnew System::String(y.c_str());
				textbox->AppendText(s);
				textbox->Text += "'";
			}
			else min1 = -1;
			if (sec1 != 0)
			{
				std::string y = std::to_string(sec1);
				System::String^ s = gcnew System::String(y.c_str());
				textbox->AppendText(s);
				textbox->Text += "''";
			}
			else sec1 = -1;
			pictureBox1->Image = imageList1->Images[povorot];
			return;
		}
		if (arcfunc != 0)
		{
			String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
			textbox->Text = textp;
			textbox->Text = textbox->Text->Remove(0, 7);
			arcfunc = 0;
			return;
		}
		if (otvetb)
		{
			clearrr();
			return;
		}
		if (func != 0)
		{
			func = 0;
			String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
			textbox->Text = textp;
			textbox->Text = textbox->Text->Remove(0, 4);
			return;
		}
		if (g2)
		{
			if (four)
			{
				if (sec2 != -1)
				{
					num2 = sec2;
					four = false;
					sec2 = -1;
					String^ textp = textbox->Text->Remove(textbox->Text->Length - 2);
					textbox->Text = textp;
					if (grad2 == -1 && min2 == -1)
						g2 = false;
					return;
				}
				if (min2 != -1)
				{
					num2 = min2;
					four = false;
					min2 = -1;
					String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
					textbox->Text = textp;
					if (grad2 == -1)
						g2 = false;
					return;
				}
				if (grad2 != -1)
				{
					num2 = grad2;
					four = false;
					grad2 = -1;
					g2 = false;
					String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
					textbox->Text = textp;
					return;
				}
			}
			else
			{
				num2 = num2 / 10;
				if (num2 == 0)
					four = true;
				String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
				textbox->Text = textp;
				return;
			}
		}
		if (three)
		{
			four = false;
			num2 = num2 / 10;
			if (num2 == 0)
				three = false;
			String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
			textbox->Text = textp;
			return;
		}
		if (mintwo)
		{
			mintwo = false;
			String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
			textbox->Text = textp;
			return;
		}
		if (operac)
		{
			operac = 0;
			String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
			textbox->Text = textp;
			return;
		}
		if(g1)
		{
			if (two)
			{
				if (sec1 != -1)
				{
					num = sec1;
					two = false;
					sec1 = -1;
					String^ textp = textbox->Text->Remove(textbox->Text->Length - 2);
					textbox->Text = textp;
					if (grad1 == -1 && min1 == -1)
						g1 = false;
					return;
				}
				if (min1 != -1)
				{
					num = min1;
					two = false;
					min1 = -1;
					String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
					textbox->Text = textp;
					if (grad1 == -1)
						g1 = false;
					return;
				}
				if (grad1 != -1)
				{
					num = grad1;
					two = false;
					grad1 = -1;
					g1 = false;
					String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
					textbox->Text = textp;
					return;
				}
			}
			else
			{
				num = num / 10;
				if (num == 0)
					two = true;
				String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
				textbox->Text = textp;
				return;
			}
		}
		if (one)
		{
			two = false;
			num = num / 10;
			if (num == 0)
				one = false;
			String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
			textbox->Text = textp;
			return;
		}
		if (minone)
		{
			minone = false;
			String^ textp = textbox->Text->Remove(textbox->Text->Length - 1);
			textbox->Text = textp;
			return;
		}
	}
	private: System::Void button_clr_Click(System::Object^ sender, System::EventArgs^ e) {
		clearrr();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (one && operac == 0 && g1 == false)
		{
			two = true;
			textbox->Text += "°";
			g1 = true;
			grad1 = num;
			num = 0;
		}
		else if (three && g2 == false)
		{
			if ((operac == 3 && g1 == false) || ((operac == 1 || operac == 2)) && g1 == true)
			{
			four = true;
			textbox->Text += "°";
			g2 = true;
			grad2 = num2;
			num2 = 0;
			}
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (one && operac == 0 && min1 == -1 && sec1 == -1 && !two)
		{
			if (num < 60)
			{
				two = true;
				textbox->Text += "'";
				g1 = true;
				min1 = num;
				num = 0;
			}
			else
				System::Windows::Forms::MessageBox::Show("секунд или минут не больше 59", "Ошибка");
		}
		else if (three && min2 == -1 && sec2 == -1 && !four)
		{
			if ((operac == 3 && g1 == false) || ((operac == 1 || operac == 2)) && g1 == true)
			{
				if (num2 < 60)
				{
					four = true;
					textbox->Text += "'";
					g2 = true;
					min2 = num2;
					num2 = 0;
				}
				else 
					System::Windows::Forms::MessageBox::Show("секунд или минут не больше 59", "Ошибка");
			}
		}
	}
private: System::Void sec_Click(System::Object^ sender, System::EventArgs^ e) {
		if (one && operac == 0 && sec1 == -1 && !two)
		{
		if (num < 60)
			{
				two = true;
				textbox->Text += "''";
				g1 = true;
				sec1 = num;
				num = 0;
			}
			else
				System::Windows::Forms::MessageBox::Show("секунд или минут не больше 59", "Ошибка");
		}
		else if (three && sec2 == -1 && !four)
		{
			if ((operac == 3 && g1 == false) || ((operac == 1 || operac == 2)) && g1 == true)
			{
				if (num2 < 60)
				{
					four = true;
					textbox->Text += "''";
					g2 = true;
					sec2 = num2;
					num2 = 0;
				}	
				else
				System::Windows::Forms::MessageBox::Show("секунд или минут не больше 59", "Ошибка");
			}
		}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_sin_Click(System::Object^ sender, System::EventArgs^ e) {
	knopkafunc(1);
}
private: System::Void button_cos_Click(System::Object^ sender, System::EventArgs^ e) {
	knopkafunc(2);
}
private: System::Void button_tan_Click(System::Object^ sender, System::EventArgs^ e) {
	knopkafunc(3);
}
private: System::Void button_ctg_Click(System::Object^ sender, System::EventArgs^ e) {
	knopkafunc(4);
}
private: System::Void button_secans_Click(System::Object^ sender, System::EventArgs^ e) {
	knopkafunc(5);
}
private: System::Void button_arcsin_Click(System::Object^ sender, System::EventArgs^ e) {
	knopkaarcfunc(1);
}
private: System::Void button_arccos_Click(System::Object^ sender, System::EventArgs^ e) {
	knopkaarcfunc(2);
}
private: System::Void button_arctan_Click(System::Object^ sender, System::EventArgs^ e) {
	knopkaarcfunc(3);
}
private: System::Void button_arcctg_Click(System::Object^ sender, System::EventArgs^ e) {
	knopkaarcfunc(4);
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	t = t + 1;
}
private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (povorot != 0 || (g1 && two && operac == 0 && func==0))
	{
		if (grad1 == -1)
			grad1 = 0;
		if (min1 == -1)
			min1 = 0;
		if (sec1 == -1)
			sec1 = 0;
		angle k(minone, grad1, min1, sec1);
		povorot++;
		if (povorot == 3)
			povorot = 0;
		if (povorot == 1)
		{
			otvet = k.pishow();
			textbox->Text = "";
			std::string y = std::to_string(otvet);
			System::String^ s = gcnew System::String(y.c_str());
			textbox->Text = s;
		}
		if(povorot==2)
		{
			otvet = k.radshow();
			textbox->Text = "";
			std::string y = std::to_string(otvet);
			System::String^ s = gcnew System::String(y.c_str());
			textbox->Text = s;
		}
		if (povorot == 0)
		{
			otvet = 0;
			textbox->Text = "";
			if (minone)
				textbox->Text = "-";
			if (grad1 != 0)
			{
				std::string y = std::to_string(grad1);
				System::String^ s = gcnew System::String(y.c_str());
				textbox->AppendText(s);
				textbox->Text += "°";
			}
			else grad1 = -1;
			if (min1 != 0)
			{
				std::string y = std::to_string(min1);
				System::String^ s = gcnew System::String(y.c_str());
				textbox->AppendText(s);
				textbox->Text += "'";
			}
			else min1 = -1;
			if (sec1 != 0)
			{
				std::string y = std::to_string(sec1);
				System::String^ s = gcnew System::String(y.c_str());
				textbox->AppendText(s);
				textbox->Text += "''";
			}
			else sec1 = -1;
		}
		pictureBox1->Image = imageList1->Images[povorot];
	}
}
};
}
