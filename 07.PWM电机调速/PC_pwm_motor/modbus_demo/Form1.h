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
	private: Iocomp::Instrumentation::Standard::Slider^  slider1;
	private: Iocomp::Instrumentation::Standard::EditInteger^  edit_int;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label8;

	private: Iocomp::Instrumentation::Professional::SwitchLever^  switchLever1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
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
			this->slider1 = (gcnew Iocomp::Instrumentation::Standard::Slider());
			this->edit_int = (gcnew Iocomp::Instrumentation::Standard::EditInteger());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->switchLever1 = (gcnew Iocomp::Instrumentation::Professional::SwitchLever());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			this->label1->Location = System::Drawing::Point(208, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"端口";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(413, 27);
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
			this->com_port->Location = System::Drawing::Point(273, 22);
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
			this->com_bps->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"4800", L"9600", L"14400", L"19200", L"28800", L"38400", 
				L"57600"});
			this->com_bps->Location = System::Drawing::Point(488, 24);
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
			this->label5->Size = System::Drawing::Size(291, 48);
			this->label5->TabIndex = 19;
			this->label5->Text = L"PWM电机调速";
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
			// slider1
			// 
			this->slider1->LoadingBegin();
			this->slider1->Border->Style = Iocomp::Types::BorderStyleControl::Sunken;
			this->slider1->Location = System::Drawing::Point(273, 137);
			this->slider1->Name = L"slider1";
			this->slider1->Pointer->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->slider1->Pointer->TrackColor = System::Drawing::Color::DarkGray;
			this->slider1->Rotation = Iocomp::Types::RotationQuad::X090;
			this->slider1->ScaleDisplay->LineInnerVisible = true;
			this->slider1->ScaleDisplay->TextFormatting->Precision = 0;
			this->slider1->ScaleDisplay->TickMajor->Length = 10;
			this->slider1->ScaleDisplay->TickMajor->TextMargin = 3;
			this->slider1->ScaleDisplay->TickMajor->Thickness = 2;
			this->slider1->ScaleDisplay->TickMid->Length = 6;
			this->slider1->ScaleDisplay->TickMinor->Length = 5;
			this->slider1->ScaleDisplay->TickMinor->Thickness = 2;
			this->slider1->ScaleRange->SplitPercent = 1;
			this->slider1->Size = System::Drawing::Size(470, 81);
			this->slider1->TabIndex = 23;
			this->slider1->UIControl->FocusRectangleShow = false;
			this->slider1->UIControl->KeyboardEnabled = false;
			this->slider1->UIControl->MouseControlStyle = Iocomp::Types::MouseControlStyleSlider::Slide;
			this->slider1->UIControl->MouseWheelEnabled = false;
			this->slider1->UpdateFrameRate = 30;
			this->slider1->Value->AsDouble = 30;
			this->slider1->Value->Max = 100;
			this->slider1->ValueChanged += gcnew Iocomp::Delegates::ValueDoubleEventHandler(this, &Form1::slider1_ValueChanged);
			this->slider1->LoadingEnd();
			// 
			// edit_int
			// 
			this->edit_int->LoadingBegin();
			this->edit_int->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->edit_int->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->edit_int->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->edit_int->Location = System::Drawing::Point(477, 249);
			this->edit_int->MaxLength = 255;
			this->edit_int->Name = L"edit_int";
			this->edit_int->ReadOnly = true;
			this->edit_int->Size = System::Drawing::Size(68, 34);
			this->edit_int->TabIndex = 24;
			this->edit_int->Value->AsString = L"30";
			this->edit_int->LoadingEnd();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(402, 258);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 25);
			this->label3->TabIndex = 25;
			this->label3->Text = L"占空比";
			this->label3->UseMnemonic = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(219, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 25);
			this->label4->TabIndex = 26;
			this->label4->Text = L"减速";
			this->label4->UseMnemonic = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(747, 109);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 25);
			this->label7->TabIndex = 27;
			this->label7->Text = L"加速";
			this->label7->UseMnemonic = false;
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
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(551, 258);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 25);
			this->label8->TabIndex = 30;
			this->label8->Text = L"%";
			this->label8->UseMnemonic = false;
			// 
			// switchLever1
			// 
			this->switchLever1->LoadingBegin();
			this->switchLever1->Location = System::Drawing::Point(68, 246);
			this->switchLever1->Name = L"switchLever1";
			this->switchLever1->Rotation = Iocomp::Types::RotationQuad::X090;
			this->switchLever1->Size = System::Drawing::Size(112, 37);
			this->switchLever1->TabIndex = 33;
			this->switchLever1->ValueChanged += gcnew Iocomp::Delegates::ValueBooleanEventHandler(this, &Form1::switchLever1_ValueChanged);
			this->switchLever1->LoadingEnd();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(195, 258);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 25);
			this->label9->TabIndex = 34;
			this->label9->Text = L"启动";
			this->label9->UseMnemonic = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 258);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 25);
			this->label10->TabIndex = 35;
			this->label10->Text = L"停止";
			this->label10->UseMnemonic = false;
			// 
			// motor1
			// 
			this->motor1->LoadingBegin();
			this->motor1->Location = System::Drawing::Point(68, 120);
			this->motor1->Name = L"motor1";
			this->motor1->Size = System::Drawing::Size(105, 108);
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
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->switchLever1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->edit_int);
			this->Controls->Add(this->slider1);
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
			// int temp = System::Int32::Parse()
			 int temp = edit_int->Value;
			 int motor_flag;
			 if(switchLever1->Value)
				 motor_flag = 1;
			 else
				 motor_flag = 0;

			 if(temp != modbus->modbus_Addt.motor_spped || motor_flag != modbus->modbus_Addt.motor_flag)//数据有改变。发送数据
			 {
				modbus->modbus_Addt.motor_spped = temp;
				modbus->modbus_Addt.motor_flag = motor_flag;
				modbus->SendWriteCommand(FUN_WRITENREG,0,2,&(modbus->modbus_Addt.motor_spped));
				SendData();
				return;
			 }
			 //发送读取所有值指令
			 //刷新数据
			 modbus->SendReadCommand(4,0,5);
			 SendData();
		 }
private: System::Void linkLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process::Start(linkLabel1->Text);
		 }
private: System::Void slider1_ValueChanged(System::Object^  sender, Iocomp::Classes::ValueDoubleEventArgs^  e) {
			 edit_int->Value = slider1->Value->AsInteger;
		 }
private: System::Void switchLever1_ValueChanged(System::Object^  sender, Iocomp::Classes::ValueBooleanEventArgs^  e) {
			 if(switchLever1->Value) 
				 motor1->Animation->On = true;
			 else 
				 motor1->Animation->On = false;
		 }
};
}

