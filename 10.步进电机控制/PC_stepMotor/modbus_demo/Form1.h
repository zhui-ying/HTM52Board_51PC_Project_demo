#pragma once


namespace modbus_demo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  com_port;
	private: System::Windows::Forms::ComboBox^  com_bps;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::Timer^  timer1ms;
	private: System::Windows::Forms::Timer^  timer100ms;
	private: System::Windows::Forms::Button^  btn_open;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label6;

	private: Iocomp::Instrumentation::Standard::EditInteger^  edit_int;

	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Iocomp::Instrumentation::Professional::SwitchLever^  switch_motor;
	private: Iocomp::Instrumentation::Professional::SwitchLever^  switch_dir;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: Iocomp::Instrumentation::Standard::Slider^  slider_speed;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: Iocomp::Instrumentation::Professional::Motor^  motor1;








	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->com_port = (gcnew System::Windows::Forms::ComboBox());
			this->com_bps = (gcnew System::Windows::Forms::ComboBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timer1ms = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer100ms = (gcnew System::Windows::Forms::Timer(this->components));
			this->btn_open = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->edit_int = (gcnew Iocomp::Instrumentation::Standard::EditInteger());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->switch_motor = (gcnew Iocomp::Instrumentation::Professional::SwitchLever());
			this->switch_dir = (gcnew Iocomp::Instrumentation::Professional::SwitchLever());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->slider_speed = (gcnew Iocomp::Instrumentation::Standard::Slider());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->motor1 = (gcnew Iocomp::Instrumentation::Professional::Motor());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(143, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"端口";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(355, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"波特率";
			this->label2->UseMnemonic = false;
			// 
			// com_port
			// 
			this->com_port->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->com_port->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->com_port->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->com_port->FormattingEnabled = true;
			this->com_port->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"COM1", L"COM2", L"COM3", L"COM4", L"COM5", L"COM6", 
				L"COM7"});
			this->com_port->Location = System::Drawing::Point(208, 19);
			this->com_port->Name = L"com_port";
			this->com_port->Size = System::Drawing::Size(92, 33);
			this->com_port->TabIndex = 0;
			this->com_port->TabStop = false;
			this->com_port->Text = L"COM3";
			// 
			// com_bps
			// 
			this->com_bps->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->com_bps->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->com_bps->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->com_bps->FormattingEnabled = true;
			this->com_bps->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"4800", L"9600", L"14400", L"19200", L"28800", L"38400", 
				L"57600", L"115200"});
			this->com_bps->Location = System::Drawing::Point(430, 19);
			this->com_bps->Name = L"com_bps";
			this->com_bps->Size = System::Drawing::Size(93, 33);
			this->com_bps->TabIndex = 4;
			this->com_bps->TabStop = false;
			this->com_bps->Text = L"28800";
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Form1::serialPort1_DataReceived);
			// 
			// timer1ms
			// 
			this->timer1ms->Interval = 1;
			this->timer1ms->Tick += gcnew System::EventHandler(this, &Form1::timer1ms_Tick);
			// 
			// timer100ms
			// 
			this->timer100ms->Tick += gcnew System::EventHandler(this, &Form1::timer100ms_Tick);
			// 
			// btn_open
			// 
			this->btn_open->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btn_open->Location = System::Drawing::Point(629, 20);
			this->btn_open->Name = L"btn_open";
			this->btn_open->Size = System::Drawing::Size(89, 39);
			this->btn_open->TabIndex = 6;
			this->btn_open->Text = L"开始";
			this->btn_open->UseVisualStyleBackColor = true;
			this->btn_open->Click += gcnew System::EventHandler(this, &Form1::btn_open_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"楷体", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Blue;
			this->label5->Location = System::Drawing::Point(227, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(314, 48);
			this->label5->TabIndex = 19;
			this->label5->Text = L"步进电机实验";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// linkLabel1
			// 
			this->linkLabel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->linkLabel1->LinkArea = System::Windows::Forms::LinkArea(0, 32);
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::AlwaysUnderline;
			this->linkLabel1->Location = System::Drawing::Point(559, 62);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(280, 21);
			this->linkLabel1->TabIndex = 20;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"http://shop120013844.taobao.com/";
			this->linkLabel1->Click += gcnew System::EventHandler(this, &Form1::linkLabel1_Click);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(473, 62);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 21);
			this->label6->TabIndex = 21;
			this->label6->Text = L"淘宝地址：";
			// 
			// edit_int
			// 
			this->edit_int->LoadingBegin();
			this->edit_int->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->edit_int->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->edit_int->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->edit_int->Location = System::Drawing::Point(356, 289);
			this->edit_int->MaxLength = 255;
			this->edit_int->Name = L"edit_int";
			this->edit_int->ReadOnly = true;
			this->edit_int->Size = System::Drawing::Size(68, 34);
			this->edit_int->TabIndex = 24;
			this->edit_int->LoadingEnd();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(321, 314);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 25);
			this->label3->TabIndex = 25;
			this->label3->UseMnemonic = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(839, 58);
			this->panel1->TabIndex = 28;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(145, 58);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->linkLabel1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->com_port);
			this->panel2->Controls->Add(this->com_bps);
			this->panel2->Controls->Add(this->btn_open);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 368);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(839, 83);
			this->panel2->TabIndex = 29;
			// 
			// switch_motor
			// 
			this->switch_motor->LoadingBegin();
			this->switch_motor->Location = System::Drawing::Point(178, 120);
			this->switch_motor->Name = L"switch_motor";
			this->switch_motor->Rotation = Iocomp::Types::RotationQuad::X090;
			this->switch_motor->Size = System::Drawing::Size(87, 35);
			this->switch_motor->TabIndex = 31;
			this->switch_motor->LoadingEnd();
			// 
			// switch_dir
			// 
			this->switch_dir->LoadingBegin();
			this->switch_dir->Location = System::Drawing::Point(542, 120);
			this->switch_dir->Name = L"switch_dir";
			this->switch_dir->Rotation = Iocomp::Types::RotationQuad::X090;
			this->switch_dir->Size = System::Drawing::Size(87, 35);
			this->switch_dir->TabIndex = 32;
			this->switch_dir->LoadingEnd();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(108, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 25);
			this->label4->TabIndex = 33;
			this->label4->Text = L"停止";
			this->label4->UseMnemonic = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(271, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 25);
			this->label7->TabIndex = 34;
			this->label7->Text = L"启动";
			this->label7->UseMnemonic = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(486, 130);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 25);
			this->label8->TabIndex = 35;
			this->label8->Text = L"正转";
			this->label8->UseMnemonic = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(635, 130);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 25);
			this->label9->TabIndex = 36;
			this->label9->Text = L"反转";
			this->label9->UseMnemonic = false;
			// 
			// slider_speed
			// 
			this->slider_speed->LoadingBegin();
			this->slider_speed->Border->Style = Iocomp::Types::BorderStyleControl::Sunken;
			this->slider_speed->Location = System::Drawing::Point(159, 202);
			this->slider_speed->Name = L"slider_speed";
			this->slider_speed->Pointer->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->slider_speed->Pointer->TrackColor = System::Drawing::Color::DarkGray;
			this->slider_speed->Rotation = Iocomp::Types::RotationQuad::X090;
			this->slider_speed->ScaleDisplay->LineInnerVisible = true;
			this->slider_speed->ScaleDisplay->TextFormatting->Precision = 0;
			this->slider_speed->ScaleDisplay->TickMajor->Length = 10;
			this->slider_speed->ScaleDisplay->TickMajor->TextMargin = 3;
			this->slider_speed->ScaleDisplay->TickMajor->Thickness = 2;
			this->slider_speed->ScaleDisplay->TickMid->Length = 6;
			this->slider_speed->ScaleDisplay->TickMinor->Length = 5;
			this->slider_speed->ScaleDisplay->TickMinor->Thickness = 2;
			this->slider_speed->ScaleRange->SplitPercent = 1;
			this->slider_speed->Size = System::Drawing::Size(470, 81);
			this->slider_speed->TabIndex = 37;
			this->slider_speed->UIControl->FocusRectangleShow = false;
			this->slider_speed->UIControl->KeyboardEnabled = false;
			this->slider_speed->UIControl->MouseControlStyle = Iocomp::Types::MouseControlStyleSlider::Slide;
			this->slider_speed->UIControl->MouseWheelEnabled = false;
			this->slider_speed->Value->Max = 100;
			this->slider_speed->ValueChanged += gcnew Iocomp::Delegates::ValueDoubleEventHandler(this, &Form1::knob1_ValueChanged);
			this->slider_speed->LoadingEnd();
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(300, 298);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 25);
			this->label10->TabIndex = 38;
			this->label10->Text = L"速度";
			this->label10->UseMnemonic = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(103, 202);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(50, 25);
			this->label11->TabIndex = 39;
			this->label11->Text = L"减速";
			this->label11->UseMnemonic = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(635, 202);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 25);
			this->label12->TabIndex = 40;
			this->label12->Text = L"加速";
			this->label12->UseMnemonic = false;
			// 
			// motor1
			// 
			this->motor1->LoadingBegin();
			this->motor1->Location = System::Drawing::Point(360, 89);
			this->motor1->Name = L"motor1";
			this->motor1->Size = System::Drawing::Size(80, 80);
			this->motor1->LoadingEnd();
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(839, 451);
			this->Controls->Add(this->motor1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->slider_speed);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->switch_dir);
			this->Controls->Add(this->switch_motor);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->edit_int);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"深圳市航太电子有限公司";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		modbusRTU *modbus;
private: System::Void btn_open_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 	try
			 {
				 if (btn_open->Text == "开始")
				 {
					 serialPort1->BaudRate = System::UInt32::Parse(com_bps->Text);
					 serialPort1->PortName = com_port->Text;
					 serialPort1->Open();
					 btn_open->Text = "结束";
					 timer1ms->Enabled = true;
					 timer100ms->Enabled = true;
				 }
				 else
				 {
					 btn_open->Text = "开始";
					 serialPort1->Close();
					 timer1ms->Enabled = false;
					 timer100ms->Enabled = false;
				 }
			 }
			 catch (Exception^ e)
			 {
				MessageBox::Show("端口异常:" + e->Message);	
			 }
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			modbus = new modbusRTU();
			modbus->init_MODBUS();
			int index = Application::ExecutablePath->LastIndexOf("\\");
			String^ path = Application::ExecutablePath->Substring(0,index) + "\\hantech.png";
			try
			{
				pictureBox1->Image = Image::FromFile(path);
			}
			catch(Exception^ e)
			{

			}

		 }
private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
			unsigned char buf_temp[50];
			cli::array<unsigned char>^ buf = gcnew cli::array<unsigned char>(50);
			modbus->rec_time_out = 0;//一旦接收到数据，自动清零1ms计数
			int length = serialPort1->Read(buf,0,50);
			for(int i=0;i<length;i++)
			{
				buf_temp[i] = buf[i];
			}
			modbus->RecProcess(buf_temp,length);
		 }
 private: void SendData()
{
	modbus->ClearRevBuf();
	cli::array<unsigned char> ^buf = gcnew cli::array<unsigned char>(60);
	for(int i=0;i<modbus->send_count;i++)
	{
		buf[i] = modbus->modbus_send_buf[i];
	}
	serialPort1->Write(buf,0,modbus->send_count);
}

private: System::Void timer1ms_Tick(System::Object^  sender, System::EventArgs^  e) {
 modbus->RecOKProcess();
         }
private: System::Void timer100ms_Tick(System::Object^  sender, System::EventArgs^  e) {
			 //读取公共区，刷新显示值
			 int stepmotor_speed = edit_int->Value;
			 int stepmotor_switch = 0;
			 int stepmotor_dir = 0;
			 if(switch_motor->Value->AsBoolean == true) stepmotor_switch = 1;
			 if(switch_dir->Value->AsBoolean == true) stepmotor_dir = 1;
			 if(stepmotor_speed != modbus->modbus_Addt.stepmotor_speed || stepmotor_switch != modbus->modbus_Addt.stepmotor_switch || stepmotor_dir != modbus->modbus_Addt.stepmotor_dir)
			 { 
				 motor1->Animation->On = switch_motor->Value->AsBoolean;
				 if(stepmotor_speed == 0) motor1->Animation->On = false;
				 if(motor1->Animation->On == true)
				 {
					 if(switch_dir->Value->AsBoolean == true) motor1->Animation->Direction = Iocomp::Types::FrameDirection::Forward;
					 else motor1->Animation->Direction = Iocomp::Types::FrameDirection::Reverse;
					 motor1->Animation->Interval = 200 - stepmotor_speed;
				 }

				modbus->modbus_Addt.stepmotor_speed = stepmotor_speed;
				modbus->modbus_Addt.stepmotor_switch = stepmotor_switch;
				modbus->modbus_Addt.stepmotor_dir = stepmotor_dir;
				modbus->SendWriteCommand(FUN_WRITENREG,0,3,&(modbus->modbus_Addt.stepmotor_speed));
				SendData();
			 }
			 //发送读取所有值指令
			 //刷新数据
			 modbus->SendReadCommand(FUN_REG,0,3);
			 SendData();
		 }

private: System::Void linkLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process::Start(linkLabel1->Text);
		 }
private: System::Void knob1_ValueChanged(System::Object^  sender, Iocomp::Classes::ValueDoubleEventArgs^  e) {
			 edit_int->Value = slider_speed->Value->AsInteger;
		 }
};
}

