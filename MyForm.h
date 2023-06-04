#pragma once
#include <iostream>
#include <cmath>   

#define PI 3.14159265    

namespace Lab3CG {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

	

	
	private: System::Windows::Forms::Button^ button2;

	
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox13;
    

	//////////////////
	//////////////////
	//////////////////

	array<Point>^ coord = gcnew array<Point>(4);
	int z1, z2, z3, z4, angle;
	private: System::Windows::Forms::Label^ label3;
		   array<int>^ predCoord = gcnew array<int>(4);

	private: void Paint() {
		Graphics^ PaintFigure = pictureBox1->CreateGraphics();
		pictureBox1->Refresh();

		int width = pictureBox1->Width; //размеры pictureBox
		int height = pictureBox1->Height;

		PaintFigure->DrawLine(Pens::Black, width / 2, 0, width / 2, height); //y
		PaintFigure->DrawLine(Pens::Black, 0, height / 2, width, height / 2); //x

		PaintFigure->TranslateTransform(width / 2, height / 2);

		double step = 0.1;

		//по u - горизонтали 
		for (double u = 0; u <= 1; u += step) {
			int a = (1 - 0) * (1 - u) * coord[0].X + 0 * (1 - u) * coord[1].X + (1 - 0) * u * coord[2].X + u * 0 * coord[3].X;
			int b = (1 - 0) * (1 - u) * coord[0].Y + 0 * (1 - u) * coord[1].Y + (1 - 0) * u * coord[2].Y + u * 0 * coord[3].Y;
			int c = (1 - 1) * (1 - u) * coord[0].X + 1 * (1 - u) * coord[1].X + (1 - 1) * u * coord[2].X + u * 1 * coord[3].X;
			int d = (1 - 1) * (1 - u) * coord[0].Y + 1 * (1 - u) * coord[1].Y + (1 - 1) * u * coord[2].Y + u * 1 * coord[3].Y;
			PaintFigure->DrawLine(Pens::Red, a, -b, c, -d);
		}

		//по w - вертикали 
		for (double w = 0; w <= 1; w += step) {
			int a = (1 - w) * (1 - 0) * coord[0].X + w * (1 - 0) * coord[1].X + (1 - w) * 0 * coord[2].X + w * 0 * coord[3].X;
			int b = (1 - w) * (1 - 0) * coord[0].Y + w * (1 - 0) * coord[1].Y + (1 - w) * 0 * coord[2].Y + w * 0 * coord[3].Y;
			int c = (1 - w) * (1 - 1) * coord[0].X + w * (1 - 1) * coord[1].X + (1 - w) * 1 * coord[2].X + w * 1 * coord[3].X;
			int d = (1 - w) * (1 - 1) * coord[0].Y + w * (1 - 1) * coord[1].Y + (1 - w) * 1 * coord[2].Y + w * 1 * coord[3].Y;
			PaintFigure->DrawLine(Pens::Red, a, -b, c, -d);
		}
	}


	//////////////////
	//////////////////
	//////////////////

#pragma region Windows Form Designer generated code

		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(40, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(617, 616);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(824, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 48);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(737, 509);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(743, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(694, 144);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(839, 144);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(984, 143);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(694, 199);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(839, 198);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(984, 198);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 9;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(694, 261);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 26);
			this->textBox7->TabIndex = 10;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(839, 261);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 26);
			this->textBox8->TabIndex = 11;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(984, 261);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 26);
			this->textBox9->TabIndex = 12;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(694, 328);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 26);
			this->textBox10->TabIndex = 13;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(839, 328);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 26);
			this->textBox11->TabIndex = 14;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(984, 328);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 26);
			this->textBox12->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(787, 464);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 16;
			this->label2->Text = L"label2";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(935, 509);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 46);
			this->button3->TabIndex = 17;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(839, 625);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 26);
			this->textBox13->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(864, 582);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 19;
			this->label3->Text = L"label3";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1214, 703);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Задайте координаты X, Y, Z 4 точек";
		label2->Text = "Поворот относительно оси";
		label3->Text = "Угол";

		button1->Text = "Рисовать";
		button2->Text = "X";
		button3->Text = "Y";
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		/*coord[0] = Point(20, 50);
		coord[1] = Point(70, 100);
		coord[2] = Point(125, 20);
		coord[3] = Point(100, 150);

		z1 = 100;
		z2 = 50;
		z3 = 40;
		z4 = 60;*/

		coord[0] = Point(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text));
		coord[1] = Point(Convert::ToInt32(textBox4->Text), Convert::ToInt32(textBox5->Text));
		coord[2] = Point(Convert::ToInt32(textBox7->Text), Convert::ToInt32(textBox8->Text));
		coord[3] = Point(Convert::ToInt32(textBox10->Text), Convert::ToInt32(textBox11->Text));

		z1 = Convert::ToInt32(textBox3->Text);
		z2 = Convert::ToInt32(textBox6->Text);
		z3 = Convert::ToInt32(textBox9->Text);
		z4 = Convert::ToInt32(textBox12->Text);

		Paint();
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //относительно X
		angle = Convert::ToInt32(textBox13->Text);

		predCoord[0] = coord[0].Y;
		predCoord[1] = coord[1].Y;
		predCoord[2] = coord[2].Y;
		predCoord[3] = coord[3].Y;

		coord[0].Y = coord[0].Y * cos(angle * PI / 180) + z1 * sin (angle * PI / 180) ;
		coord[1].Y = coord[1].Y * cos(angle * PI / 180) + z2 * sin(angle * PI / 180);
		coord[2].Y = coord[2].Y * cos(angle * PI / 180) + z3 * sin(angle * PI / 180);
		coord[3].Y = coord[3].Y * cos(angle * PI / 180) + z4 * sin(angle * PI / 180);

		z1 = -predCoord[0] * sin(angle * PI / 180) + z1 * cos(angle);
		z2 = -predCoord[1] * sin(angle * PI / 180) + z2 * cos(angle);
		z3 = -predCoord[2] * sin(angle * PI / 180) + z3 * cos(angle);
		z4 = -predCoord[3] * sin(angle * PI / 180) + z4 * cos(angle);

		Paint();
	}



	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //по оси y
		angle = Convert::ToInt32(textBox13->Text);

		predCoord[0] = coord[0].X;
		predCoord[1] = coord[1].X;
		predCoord[2] = coord[2].X;
		predCoord[3] = coord[3].X;

		coord[0].X = coord[0].X * cos(angle * PI / 180) + z1 * sin(angle * PI / 180);
		coord[1].X = coord[1].X * cos(angle * PI / 180) + z2 * sin(angle * PI / 180);
		coord[2].X = coord[2].X * cos(angle * PI / 180) + z3 * sin(angle * PI / 180);
		coord[3].X = coord[3].X * cos(angle * PI / 180) + z4 * sin(angle * PI / 180);

		z1 = -predCoord[0] * sin(angle * PI / 180) + z1 * cos(angle);
		z2 = -predCoord[1] * sin(angle * PI / 180) + z2 * cos(angle);
		z3 = -predCoord[2] * sin(angle * PI / 180) + z3 * cos(angle);
		z4 = -predCoord[3] * sin(angle * PI / 180) + z4 * cos(angle);

		Paint();
	}

};
}
