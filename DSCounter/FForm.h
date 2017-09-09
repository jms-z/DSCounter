#pragma once

namespace DSCounter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FForm
	/// </summary>
	public ref class FForm : public System::Windows::Forms::Form
	{
			static int second = 0;
			static int minute = 0;
			static int hour = 0;
			String^ sec;
			String^ min;
	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  automaticallyStopTimerToolStripMenuItem;
			 String^ str_hour;


	public:
		FForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			//assign all split boxes to array

			//array<TextBox ^, 1> ^ split_array = gcnew array<TextBox ^, 1>(26);
			//order of splits
			/*split_array[0] = this->textBox3;
			split_array[1] = this->textBox4;
			split_array[2] = this->textBox5;
			split_array[3] = this->textBox8;
			split_array[4] = this->textBox7;
			split_array[5] = this->textBox6;
			split_array[6] = this->textBox11;
			split_array[7] = this->textBox10;
			split_array[8] = this->textBox9;
			split_array[9] = this->textBox14;
			split_array[10] = this->textBox13;
			split_array[11] = this->textBox12;
			split_array[12] = this->textBox15;
			split_array[13] = this->textBox28;
			split_array[14] = this->textBox27;
			split_array[15] = this->textBox26;
			split_array[16] = this->textBox25;
			split_array[17] = this->textBox24;
			split_array[18] = this->textBox23;
			split_array[19] = this->textBox22;
			split_array[20] = this->textBox21;
			split_array[21] = this->textBox20;
			split_array[22] = this->textBox19;
			split_array[23] = this->textBox18;
			split_array[24] = this->textBox17;
			split_array[25] = this->textBox16;
			*/

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  dS1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dS2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dS3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dS3ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  bloodborneToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  setToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  setToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  setToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  setToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  setToolStripMenuItem4;


	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Timer^  timer1;













	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;












	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  MAINTIMER;
	public: 

	public: 
	private: System::ComponentModel::IContainer^  components;
	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dS2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dS3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dS3ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bloodborneToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dS1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->automaticallyStopTimerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
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
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->MAINTIMER = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(267, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Died";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 71);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 22);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(210, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(67, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FForm::textBox1_TextChanged);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(10, 418);
			this->progressBar1->Maximum = 260;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(680, 20);
			this->progressBar1->TabIndex = 3;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->dS2ToolStripMenuItem,
					this->dS3ToolStripMenuItem, this->dS3ToolStripMenuItem1, this->bloodborneToolStripMenuItem, this->dS1ToolStripMenuItem, this->settingsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(700, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &FForm::menuStrip1_ItemClicked);
			// 
			// dS2ToolStripMenuItem
			// 
			this->dS2ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->setToolStripMenuItem1 });
			this->dS2ToolStripMenuItem->Name = L"dS2ToolStripMenuItem";
			this->dS2ToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->dS2ToolStripMenuItem->Text = L"DS1";
			this->dS2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &FForm::dS2ToolStripMenuItem_Click);
			// 
			// setToolStripMenuItem1
			// 
			this->setToolStripMenuItem1->Name = L"setToolStripMenuItem1";
			this->setToolStripMenuItem1->Size = System::Drawing::Size(126, 22);
			this->setToolStripMenuItem1->Text = L"All Bosses";
			this->setToolStripMenuItem1->Click += gcnew System::EventHandler(this, &FForm::setToolStripMenuItem1_Click);
			// 
			// dS3ToolStripMenuItem
			// 
			this->dS3ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->setToolStripMenuItem2 });
			this->dS3ToolStripMenuItem->Name = L"dS3ToolStripMenuItem";
			this->dS3ToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->dS3ToolStripMenuItem->Text = L"DS2: SOFTS";
			this->dS3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &FForm::dS3ToolStripMenuItem_Click);
			// 
			// setToolStripMenuItem2
			// 
			this->setToolStripMenuItem2->Name = L"setToolStripMenuItem2";
			this->setToolStripMenuItem2->Size = System::Drawing::Size(158, 22);
			this->setToolStripMenuItem2->Text = L"Any% Glitchless";
			// 
			// dS3ToolStripMenuItem1
			// 
			this->dS3ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->setToolStripMenuItem3 });
			this->dS3ToolStripMenuItem1->Name = L"dS3ToolStripMenuItem1";
			this->dS3ToolStripMenuItem1->Size = System::Drawing::Size(39, 20);
			this->dS3ToolStripMenuItem1->Text = L"DS3";
			this->dS3ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &FForm::dS3ToolStripMenuItem1_Click);
			// 
			// setToolStripMenuItem3
			// 
			this->setToolStripMenuItem3->Name = L"setToolStripMenuItem3";
			this->setToolStripMenuItem3->Size = System::Drawing::Size(126, 22);
			this->setToolStripMenuItem3->Text = L"All Bosses";
			this->setToolStripMenuItem3->Click += gcnew System::EventHandler(this, &FForm::setToolStripMenuItem3_Click);
			// 
			// bloodborneToolStripMenuItem
			// 
			this->bloodborneToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->setToolStripMenuItem4 });
			this->bloodborneToolStripMenuItem->Name = L"bloodborneToolStripMenuItem";
			this->bloodborneToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->bloodborneToolStripMenuItem->Text = L"Bloodborne";
			// 
			// setToolStripMenuItem4
			// 
			this->setToolStripMenuItem4->Name = L"setToolStripMenuItem4";
			this->setToolStripMenuItem4->Size = System::Drawing::Size(126, 22);
			this->setToolStripMenuItem4->Text = L"All Bosses";
			this->setToolStripMenuItem4->Click += gcnew System::EventHandler(this, &FForm::setToolStripMenuItem4_Click);
			// 
			// dS1ToolStripMenuItem
			// 
			this->dS1ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->setToolStripMenuItem });
			this->dS1ToolStripMenuItem->Name = L"dS1ToolStripMenuItem";
			this->dS1ToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->dS1ToolStripMenuItem->Text = L"Demon Souls";
			this->dS1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &FForm::dS1ToolStripMenuItem_Click);
			// 
			// setToolStripMenuItem
			// 
			this->setToolStripMenuItem->Name = L"setToolStripMenuItem";
			this->setToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->setToolStripMenuItem->Text = L"All Bosses";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->automaticallyStopTimerToolStripMenuItem });
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// automaticallyStopTimerToolStripMenuItem
			// 
			this->automaticallyStopTimerToolStripMenuItem->Checked = true;
			this->automaticallyStopTimerToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->automaticallyStopTimerToolStripMenuItem->Name = L"automaticallyStopTimerToolStripMenuItem";
			this->automaticallyStopTimerToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->automaticallyStopTimerToolStripMenuItem->Text = L"Stop Timer at Last Split";
			this->automaticallyStopTimerToolStripMenuItem->Click += gcnew System::EventHandler(this, &FForm::automaticallyStopTimerToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 114);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 45);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Start Timer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 161);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 45);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Stop Timer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(10, 346);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(89, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Reset Timer";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &FForm::button5_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &FForm::timer1_Tick);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(401, 38);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 22;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(401, 67);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 23;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(401, 96);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 24;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(401, 183);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 27;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(401, 154);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 26;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(401, 125);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 25;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(401, 271);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 30;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(401, 242);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 29;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(401, 213);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 28;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(401, 355);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 33;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(401, 326);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 32;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(401, 297);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 31;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(401, 384);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 34;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(588, 383);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 60;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(588, 354);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 20);
			this->textBox17->TabIndex = 59;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(588, 325);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 20);
			this->textBox18->TabIndex = 58;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(588, 296);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 20);
			this->textBox19->TabIndex = 57;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(588, 270);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 20);
			this->textBox20->TabIndex = 56;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(588, 241);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 20);
			this->textBox21->TabIndex = 55;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(588, 212);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 20);
			this->textBox22->TabIndex = 54;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(588, 182);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 20);
			this->textBox23->TabIndex = 53;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(588, 153);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 20);
			this->textBox24->TabIndex = 52;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(588, 124);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 20);
			this->textBox25->TabIndex = 51;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(588, 95);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 20);
			this->textBox26->TabIndex = 50;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(588, 66);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 20);
			this->textBox27->TabIndex = 49;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(588, 37);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 20);
			this->textBox28->TabIndex = 48;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(146, 114);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(131, 92);
			this->button31->TabIndex = 35;
			this->button31->Text = L"Split";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &FForm::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(10, 375);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(89, 23);
			this->button32->TabIndex = 61;
			this->button32->Text = L"Reset Splits";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &FForm::button32_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(169, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 62;
			this->label1->Text = L"Deaths";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(325, 37);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 63;
			this->label2->Text = L"Split";
			this->label2->Click += gcnew System::EventHandler(this, &FForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(325, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 64;
			this->label3->Text = L"Split";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(325, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 65;
			this->label4->Text = L"Split";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(325, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 66;
			this->label5->Text = L"Split";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(325, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 13);
			this->label6->TabIndex = 67;
			this->label6->Text = L"Split";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(325, 184);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 13);
			this->label7->TabIndex = 68;
			this->label7->Text = L"Split";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(325, 214);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 13);
			this->label8->TabIndex = 69;
			this->label8->Text = L"Split";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(325, 244);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 13);
			this->label9->TabIndex = 70;
			this->label9->Text = L"Split";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(325, 272);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 13);
			this->label10->TabIndex = 71;
			this->label10->Text = L"Split";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(325, 302);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(27, 13);
			this->label11->TabIndex = 72;
			this->label11->Text = L"Split";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(325, 328);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(27, 13);
			this->label12->TabIndex = 73;
			this->label12->Text = L"Split";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(325, 356);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 13);
			this->label13->TabIndex = 74;
			this->label13->Text = L"Split";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(325, 385);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(27, 13);
			this->label14->TabIndex = 75;
			this->label14->Text = L"Split";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(522, 40);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(27, 13);
			this->label15->TabIndex = 76;
			this->label15->Text = L"Split";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(522, 70);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(27, 13);
			this->label16->TabIndex = 77;
			this->label16->Text = L"Split";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(522, 98);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(27, 13);
			this->label17->TabIndex = 78;
			this->label17->Text = L"Split";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(522, 126);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(27, 13);
			this->label18->TabIndex = 79;
			this->label18->Text = L"Split";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(522, 155);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(27, 13);
			this->label19->TabIndex = 80;
			this->label19->Text = L"Split";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(522, 185);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(27, 13);
			this->label20->TabIndex = 81;
			this->label20->Text = L"Split";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(522, 214);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(27, 13);
			this->label21->TabIndex = 82;
			this->label21->Text = L"Split";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(522, 244);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(27, 13);
			this->label22->TabIndex = 83;
			this->label22->Text = L"Split";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(522, 272);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(27, 13);
			this->label23->TabIndex = 84;
			this->label23->Text = L"Split";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(522, 298);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(27, 13);
			this->label24->TabIndex = 85;
			this->label24->Text = L"Split";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(522, 327);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(27, 13);
			this->label25->TabIndex = 86;
			this->label25->Text = L"Split";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(522, 357);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(27, 13);
			this->label26->TabIndex = 87;
			this->label26->Text = L"Split";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(522, 385);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(27, 13);
			this->label27->TabIndex = 88;
			this->label27->Text = L"Split";
			// 
			// MAINTIMER
			// 
			this->MAINTIMER->AutoSize = true;
			this->MAINTIMER->Font = (gcnew System::Drawing::Font(L"Meiryo", 18.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MAINTIMER->Location = System::Drawing::Point(75, 219);
			this->MAINTIMER->Name = L"MAINTIMER";
			this->MAINTIMER->Size = System::Drawing::Size(135, 38);
			this->MAINTIMER->TabIndex = 89;
			this->MAINTIMER->Text = L"00:00:00";
			// 
			// FForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 450);
			this->Controls->Add(this->MAINTIMER);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FForm";
			this->Text = L"Green Sign Soapstone v0.12";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	int count;
	int splitcntr;
	bool autostop;
	bool tmp;

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //player resets
				 textBox1->Text = "0";
				 count = 0;
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //player dies
				 ++count;
				 textBox1->Text = count.ToString();
			 }

	public: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void dS1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
	private: System::Void dS3ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				//start main timer
				 timer1->Enabled = true;
		 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				//stop main timer
				 timer1->Enabled = false;
		 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				//reset main timer to zero
				 second = 0;
				 minute = 0;
				 hour = 0;

				 sec = Convert::ToString(second);
				 min = Convert::ToString(minute);
				 str_hour = Convert::ToString(hour);

				 MAINTIMER->Text = "0" + str_hour + ":" + "0" + min + ":" + "0" + sec;
		 }
	private: System::Void dS3ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {	
		 }

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 //Core timer behavior
				 
				 ++second;

				 if(second == 60){
					 second = 0;
					 ++minute;
				 }

				 if(minute == 60){
					 minute = 0;
					 ++hour;
				 }

				 sec = Convert::ToString(second);
				 min = Convert::ToString(minute);
				 str_hour = Convert::ToString(hour);

				 if((second < 10)&&(minute < 10)){
					MAINTIMER->Text = "0" + str_hour + ":" + "0" + min + ":" + "0" + sec;
				 }

				 if((second >= 10) && (minute < 10)){
					MAINTIMER->Text = "0" + str_hour + ":" + "0" + min + ":" + sec;
				 }

				 if((second < 10) && (minute >= 10)){
					 MAINTIMER->Text = "0" + str_hour + ":" + min + ":" + "0" + sec;
				 }
				 if((second >= 10) && (minute >= 10) || ((second == 10)&&(minute == 10))){
					 MAINTIMER->Text = "0" + str_hour + ":" + min + ":" + sec;
				 }
		 }

private: System::Void dS2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
				//reset splits - resets all split times - doesnt stop timer
			progressBar1->Value = 0;
			splitcntr = 0;
			this->textBox3->Text = "";
			this->textBox4->Text = "";
			this->textBox5->Text = "";
			this->textBox8->Text = "";
			this->textBox7->Text = "";
			this->textBox6->Text = "";
			this->textBox11->Text = "";
			this->textBox10->Text = "";
			this->textBox9->Text = "";
			this->textBox14->Text = "";
			this->textBox13->Text = "";
			this->textBox12->Text = "";
			this->textBox15->Text = "";
			this->textBox28->Text = "";
			this->textBox27->Text = "";
			this->textBox26->Text = "";
			this->textBox25->Text = "";
			this->textBox24->Text = "";
			this->textBox23->Text = "";
			this->textBox22->Text = "";
			this->textBox21->Text = "";
			this->textBox20->Text = "";
			this->textBox19->Text = "";
			this->textBox18->Text = "";
			this->textBox17->Text = "";
			this->textBox16->Text = "";
				
		 }
private: System::Void setToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Set DS1 Splits - set names, reset split times
			 progressBar1->Value = 0;
			 splitcntr = 0;
				 label2->Text = "Asylum Demon";
				 label3->Text = "Taurus";
				 label4->Text = "Gargoyles";
				 label5->Text = "Capra";
				 label6->Text = "Gaping";
				 label7->Text = "Butterfly";
				 label8->Text = "Quelaag";
				 label9->Text = "Iron Golem";
				 label10->Text = "O&S";
				 label11->Text = "Sif";
				 label12->Text = "Stray Demon";
				 label13->Text = "Seath";
				 label14->Text = "Pinwheel";
				 label15->Text = "Nito";
				 label16->Text = "Ceaseless";
				 label17->Text = "Firesage";
				 label18->Text = "Centipede";
				 label19->Text = "Bed of Chaos";
				 label20->Text = "4 Kings";
				 label21->Text = "Guardian";
				 label22->Text = "Artorias"; 
				 label23->Text = "Manus";
				 label24->Text = "Kalameet";
				 label25->Text = "Priscilla";
				 label26->Text = "Gwyndolin";
				 label27->Text = "Gwyn"; 
		 }
private: System::Void setToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Set DS3 Splits - sets names, resets split times
			 progressBar1->Value = 0;
			 splitcntr = 0;
				 label2->Text = "Gundyr";
				 label3->Text = "Vordt";
				 label4->Text = "Greatwood";
				 label5->Text = "Crystal Sage";
				 label6->Text = "Abyss Watchers";
				 label7->Text = "Deacons";
				 label8->Text = "Wolnir";
				 label9->Text = "Old Demon King";
				 label10->Text = "Pontiff";
				 label11->Text = "Dancer";
				 label12->Text = "Ocerios";
				 label13->Text = "Wyvern";
				 label14->Text = "Champion Gundyr";
				 label15->Text = "Dragonslayer";
				 label16->Text = "Twin Princes";
				 label17->Text = "Nameless King";
				 label18->Text = "Gravetenders";
				 label19->Text = "Friede";
				 label20->Text = "Soul of Cinder";
				 label21->Text = "";
				 label22->Text = ""; 
				 label23->Text = "";
				 label24->Text = "";
				 label25->Text = "";
				 label26->Text = "";
				 label27->Text = ""; 
		 }
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
			 //set split
			  if(splitcntr == 0){
				 this->textBox3->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 1){
				 this->textBox4->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 2){
				 this->textBox5->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 3){
				 this->textBox8->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 4){
				 this->textBox7->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 5){
				 this->textBox6->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 6){
				 this->textBox11->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 7){
				 this->textBox10->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 8){
				 this->textBox9->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 9){
				 this->textBox14->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 10){
				 this->textBox13->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 11){
				 this->textBox12->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 12){
				 this->textBox15->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 13){
				 this->textBox28->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 14){
				 this->textBox27->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 15){
				 this->textBox26->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 16){
				 this->textBox25->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 17){
				 this->textBox24->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 18){
				 this->textBox23->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 19){
				 this->textBox22->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 20){
				 this->textBox21->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 21){
				 this->textBox20->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 22){
				 this->textBox19->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 23){
				 this->textBox18->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 24){
				 this->textBox17->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;
				 return;
			 }if(splitcntr == 25){
				 this->textBox16->Text = MAINTIMER->Text;
				 splitcntr++;
				 progressBar1->Value = progressBar1->Value +10;

				 if(autostop == true){ //if autostop toggle is on
				 timer1->Enabled = false;
				 }

				 return;
			 }if(splitcntr >= 26){
				//display message?
			 }
		 }
private: System::Void automaticallyStopTimerToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			//setting autostop at last split
			 if(automaticallyStopTimerToolStripMenuItem->Checked == false){
				 automaticallyStopTimerToolStripMenuItem->Checked = true;
				 autostop = true;
				 return;
			 }
			 if(automaticallyStopTimerToolStripMenuItem->Checked == true){
				 automaticallyStopTimerToolStripMenuItem->Checked = false;
				 autostop = false;
				 return;
			 }
		 }
private: System::Void setToolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //bloodborne boss splits
			 progressBar1->Value = 0;
			 splitcntr = 0;
				 label2->Text = "Cleric Beast";
				 label3->Text = "Gascoigne";
				 label4->Text = "Blood Starved";
				 label5->Text = "Amelia";
				 label6->Text = "Shadows";
				 label7->Text = "Rom";
				 label8->Text = "One Reborn";
				 label9->Text = "Micolash";
				 label10->Text = "Wet Nurse";
				 label11->Text = "Darkbeast Paarl";
				 label12->Text = "Amygdala";
				 label13->Text = "Emissary";
				 label14->Text = "Ebritas";
				 label15->Text = "Logarius";
				 label16->Text = "Moon Presence";
				 label17->Text = "Ludwig";
				 label18->Text = "Living Failures";
				 label19->Text = "Maria";
				 label20->Text = "Laurence";
				 label21->Text = "Orphan";
				 label22->Text = "Gehrman"; 
				 label23->Text = "";
				 label24->Text = "";
				 label25->Text = "";
				 label26->Text = "";
				 label27->Text = ""; 
		 }
};
}
