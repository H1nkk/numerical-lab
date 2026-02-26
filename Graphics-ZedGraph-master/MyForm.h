#pragma once
#include <math.h>
#include <utility>
#include <vector>
#include <tuple>
#include <functional>

#define STEPS 100

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		static float f3(float x, float u) {
			return -7.0 / 2.0 * u;
		}

		static float f4(float x, float u) {
			return 5 * u;
		}

		static float f3_pervoobr(float x) {
			return exp(-7.0/2.0 * x);
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sdfg;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::Button^ button1;
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;



















































	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sdfg = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(896, 543);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->checkBox2);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(888, 517);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(313, 423);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(57, 17);
			this->checkBox2->TabIndex = 46;
			this->checkBox2->Text = L"fixed h";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(247, 421);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(49, 20);
			this->textBox9->TabIndex = 45;
			this->textBox9->Text = L"0,1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(168, 424);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 13);
			this->label9->TabIndex = 44;
			this->label9->Text = L"border epsilon";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(85, 421);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(61, 20);
			this->textBox8->TabIndex = 43;
			this->textBox8->Text = L"20";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(51, 426);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 42;
			this->label8->Text = L"Nmax";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(263, 375);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(61, 20);
			this->textBox7->TabIndex = 41;
			this->textBox7->Text = L"0,1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(244, 379);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 13);
			this->label7->TabIndex = 40;
			this->label7->Text = L"u0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(441, 379);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 39;
			this->label6->Text = L"E";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(461, 375);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(80, 20);
			this->textBox6->TabIndex = 38;
			this->textBox6->Text = L"0,000001";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(795, 377);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 20);
			this->textBox4->TabIndex = 37;
			this->textBox4->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(776, 380);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 36;
			this->label4->Text = L"b";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(683, 376);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(48, 20);
			this->textBox5->TabIndex = 35;
			this->textBox5->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(664, 378);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 34;
			this->label5->Text = L"a";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(683, 418);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 29);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Zoom";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(349, 375);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 20);
			this->textBox3->TabIndex = 32;
			this->textBox3->Text = L"0,1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(330, 379);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 31;
			this->label3->Text = L"h";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(175, 374);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 20);
			this->textBox2->TabIndex = 30;
			this->textBox2->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(156, 377);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"b";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 377);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 27;
			this->label1->Text = L"a";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(63, 375);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 20);
			this->textBox1->TabIndex = 28;
			this->textBox1->Text = L"0";
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->i, this->x,
					this->Column3, this->Column4, this->sdfg, this->Column1, this->F_1, this->F_2, this->Column2, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(548, 11);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(334, 327);
			this->dataGridView1->TabIndex = 26;
			// 
			// i
			// 
			this->i->DividerWidth = 4;
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			this->i->ReadOnly = true;
			this->i->Width = 50;
			// 
			// x
			// 
			this->x->HeaderText = L"X";
			this->x->Name = L"x";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"V";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"V2";
			this->Column4->Name = L"Column4";
			// 
			// sdfg
			// 
			this->sdfg->HeaderText = L"V-V2";
			this->sdfg->Name = L"sdfg";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ОЛП";
			this->Column1->Name = L"Column1";
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"h";
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			// 
			// F_2
			// 
			this->F_2->HeaderText = L"C1";
			this->F_2->Name = L"F_2";
			this->F_2->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"C2";
			this->Column2->Name = L"Column2";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"U";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"|U-V|";
			this->Column6->Name = L"Column6";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(399, 416);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 29);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(23, 11);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(501, 327);
			this->zedGraphControl1->TabIndex = 24;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(888, 517);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(920, 556);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"x";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 
		double f1(double x){
			return sin(x);
		}

		double f2(double x) {
			return sin(2 * x);
		}



		std::pair<float, float> small_RG4(float x, float u, std::function<float(float, float)> f, float h) {
			float prev_x = x;
			float prev_u = u;
			float new_x = prev_x + h;

			float k1 = f(prev_x, prev_u);
			float k2 = f(prev_x + h / 2.0, prev_u + h / 2.0 * k1);
			float k3 = f(prev_x + h / 2.0, prev_u + h / 2.0 * k2);
			float k4 = f(prev_x + h, prev_u + h * k3);
			float new_u = prev_u + h / 6.0 * (k1 + 2 * k2 + 2 * k3 + k4);

			return { new_x, new_u };
		}

		std::vector<std::pair<float, float>> RG4_fixed(float x0, float u0, std::function<float(float, float)> f, float h) {
			std::vector<float> x(1, x0);
			std::vector<float> u(1, u0);
			std::vector<std::pair<float, float>> res;
			res.push_back({ x[0], u[0] });

			for (int step = 1; step <= STEPS; step++) {
				auto res_with_h = small_RG4(x[step - 1], u[step - 1], f, h);
				float new_x = res_with_h.first;
				float new_u = res_with_h.second;

				x.push_back(new_x);
				u.push_back(new_u);

				res.push_back({ x[step], u[step] });
			}

			return res;
		}

		std::vector<std::tuple<double, double, double, double, double, double, double, double>> RG4_fixd(float x0, float u0, std::function<float(float, float)> f, float h, float E, int Nmax, float b, float b_epsilon) {
			std::vector<float> x(1, x0);
			std::vector<float> u(1, u0);
			std::vector<std::tuple<double, double, double, double, double, double, double, double>> res;
			// std::vector<std::pair<float, float>> res;

			int division_count = 0;
			int mult_count = 0;

			bool overflow = false;

			for (int step = 1; step <= Nmax; step++) {
				auto res_with_h = small_RG4(x[step - 1], u[step - 1], f, h);
				float new_x = res_with_h.first;
				float new_u = res_with_h.second;

				auto res_with_half_h1 = small_RG4(x[step - 1], u[step - 1], f, h / 2.0);
				auto res_with_half_h2 = small_RG4(res_with_half_h1.first, res_with_half_h1.second, f, h / 2.0);

				float precise_new_x = res_with_half_h2.first;
				float precise_new_u = res_with_half_h2.second;

				float S = (precise_new_u - new_u) / (16 - 1);

				if (new_x > b) {
					overflow = true;
					h /= 2.0;
					step--;
					continue;
				}

				if (overflow && new_x >= b - b_epsilon) {
					std::tuple<double, double, double, double, double, double, double, double> stats{
					new_x, // xi
					new_u, // vi
					precise_new_u, // v2i
					new_u - precise_new_u, // vi - v2i
					16 * S, // ОЛП
					h, // hi
					division_count, // C1
					mult_count // C2
					};

					res.push_back(stats);
					break;
				}

				x.push_back(new_x);
				u.push_back(new_u);

				std::tuple<double, double, double, double, double, double, double, double> stats{
					new_x, // xi
					new_u, // vi
					precise_new_u, // v2i
					new_u - precise_new_u, // vi - v2i
					16 * S, // ОЛП
					h, // hi
					division_count, // C1
					mult_count // C2
				};

				res.push_back(stats);
				division_count = 0;
				mult_count = 0;
			}

			return res;
		}

		//						xi,      vi,    v2i, vi - v2i, ОЛП,       hi,    C1,      C2
		std::vector<std::tuple<double, double, double, double, double, double, double, double>> RG4_adaptive(float x0, float u0, std::function<float(float, float)> f, float h, float E, int Nmax, float b, float b_epsilon) {
			std::vector<float> x(1, x0);
			std::vector<float> u(1, u0);
			std::vector<std::tuple<double, double, double, double, double, double, double, double>> res;
			// std::vector<std::pair<float, float>> res;

			int division_count = 0;
			int mult_count = 0;

			bool overflow = false;

			for (int step = 1; step <= Nmax; step++) {
				auto res_with_h = small_RG4(x[step - 1], u[step - 1], f, h);
				float new_x = res_with_h.first;
				float new_u = res_with_h.second;

				auto res_with_half_h1 = small_RG4(x[step - 1], u[step - 1], f, h / 2.0);
				auto res_with_half_h2 = small_RG4(res_with_half_h1.first, res_with_half_h1.second, f, h / 2.0);

				float precise_new_x = res_with_half_h2.first;
				float precise_new_u = res_with_half_h2.second;

				float S = (precise_new_u - new_u) / (16 - 1);
				if (abs(S) > E) {
					h /= 2.0; // >> 1
					division_count++;
					step--;
					continue;
				}


				if (new_x > b) {
					overflow = true;
					h /= 2.0;
					division_count++;
					step--;
					continue;
				}

				if (overflow && new_x >= b - b_epsilon) {
					std::tuple<double, double, double, double, double, double, double, double> stats{
					new_x, // xi
					new_u, // vi
					precise_new_u, // v2i
					new_u - precise_new_u, // vi - v2i
					16 * S, // ОЛП
					h, // hi
					division_count, // C1
					mult_count // C2
					};

					res.push_back(stats);
					break;
				}

				if (abs(S) < E / 32) { // E >> 5
					h *= 2.0; // << 1
					mult_count++;
				}

				x.push_back(new_x);
				u.push_back(new_u);

				std::tuple<double, double, double, double, double, double, double, double> stats{
					new_x, // xi
					new_u, // vi
					precise_new_u, // v2i
					new_u - precise_new_u, // vi - v2i
					16 * S, // ОЛП
					h, // hi
					division_count, // C1
					mult_count // C2
				};

				res.push_back(stats);
				division_count = 0;
				mult_count = 0;
			}

			return res;
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		//PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

		//
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);
		//abort();
		double h = Convert::ToDouble(textBox3->Text);

		double E = Convert::ToDouble(textBox6->Text);
		int Nmax = Convert::ToInt32(textBox8->Text);
		double b_epsilon = Convert::ToDouble(textBox9->Text);


		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;

		double x0 = 0;
		double u0 = Convert::ToDouble(textBox7->Text);

		bool fixed_h = checkBox2->Checked;

		std::vector<std::tuple<double, double, double, double, double, double, double, double>> vect2;

		if (fixed_h) {
			vect2 = RG4_fixd(x0, u0, f3, 0.01f, E, Nmax, xmax, b_epsilon);
		}
		else {
			vect2 = RG4_adaptive(x0, u0, f3, 0.01f, E, Nmax, xmax, b_epsilon);
		}

		int i = 0;
		dataGridView1->Rows->Clear();
		int step = 0;
		for (auto& p : vect2)
		{
			++step;
			//

			float x = std::get<0>(p);
			float v = std::get<1>(p);
			f1_list->Add(x, v);
			//f2_list->Add(x, f2(x));
			//
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = step;

			dataGridView1->Rows[i]->Cells[1]->Value = std::get<0>(p);
			dataGridView1->Rows[i]->Cells[2]->Value = std::get<1>(p);
			dataGridView1->Rows[i]->Cells[3]->Value = std::get<2>(p);
			dataGridView1->Rows[i]->Cells[4]->Value = std::get<3>(p);
			dataGridView1->Rows[i]->Cells[5]->Value = std::get<4>(p);
			dataGridView1->Rows[i]->Cells[6]->Value = std::get<5>(p);
			dataGridView1->Rows[i]->Cells[7]->Value = std::get<6>(p);
			dataGridView1->Rows[i]->Cells[8]->Value = std::get<7>(p);

			dataGridView1->Rows[i]->Cells[9]->Value = f3_pervoobr(x);
			dataGridView1->Rows[i]->Cells[10]->Value = abs(f3_pervoobr(x)-v);


			//dataGridView1->Rows[i]->Cells[2]->Value = floor(f2(x) * 1000) / 1000;
			i++;
		}
		/*
		for (double x = xmin; x <= xmax; x += h)
		{
			//
			f1_list->Add(x, f1(x));
			f2_list->Add(x, f2(x));
			//
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = x; 			
			dataGridView1->Rows[i]->Cells[1]->Value = floor(f1(x) * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[2]->Value = floor(f2(x) * 1000) / 1000;
			i++;
		}
		*/
		LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red,SymbolType::Plus);
		//LineItem Curve2 = panel->AddCurve("F2(x)", f2_list, Color::Blue, SymbolType::None);

		// Óñòàíàâëèâàåì èíòåðåñóþùèé íàñ èíòåðâàë ïî îñè X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
/*
		// Óñòàíàâëèâàåì èíòåðåñóþùèé íàñ èíòåðâàë ïî îñè Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;
*/
		// Âûçûâàåì ìåòîä AxisChange (), ÷òîáû îáíîâèòü äàííûå îá îñÿõ. 
		// Â ïðîòèâíîì ñëó÷àå íà ðèñóíêå áóäåò ïîêàçàíà òîëüêî ÷àñòü ãðàôèêà, 
		// êîòîðàÿ óìåùàåòñÿ â èíòåðâàëû ïî îñÿì, óñòàíîâëåííûå ïî óìîë÷àíèþ
		zedGraphControl1->AxisChange();
		// Îáíîâëÿåì ãðàôèê
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double xmin = Convert::ToDouble(textBox5->Text);
	double xmax = Convert::ToDouble(textBox4->Text);
	// Óñòàíàâëèâàåì èíòåðåñóþùèé íàñ èíòåðâàë ïî îñè X
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;

	// Âûçûâàåì ìåòîä AxisChange (), ÷òîáû îáíîâèòü äàííûå îá îñÿõ. 
	// Â ïðîòèâíîì ñëó÷àå íà ðèñóíêå áóäåò ïîêàçàíà òîëüêî ÷àñòü ãðàôèêà, 
	// êîòîðàÿ óìåùàåòñÿ â èíòåðâàëû ïî îñÿì, óñòàíîâëåííûå ïî óìîë÷àíèþ
	zedGraphControl1->AxisChange();
	// Îáíîâëÿåì ãðàôèê
	zedGraphControl1->Invalidate();

}

};
}
