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

	private: Iocomp::Instrumentation::Standard::Led^  led1;
	private: System::Windows::Forms::Button^  btn_open;
	private: Iocomp::Instrumentation::Standard::Led^  led2;
	private: Iocomp::Instrumentation::Standard::Led^  led3;
	private: Iocomp::Instrumentation::Standard::Led^  led4;
	private: Iocomp::Instrumentation::Standard::Led^  led5;
	private: Iocomp::Instrumentation::Standard::Led^  led6;
	private: Iocomp::Instrumentation::Standard::Led^  led7;
	private: Iocomp::Instrumentation::Standard::Led^  led8;
	private: Iocomp::Instrumentation::Professional::SwitchLever^  switchLever1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


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
			this->led1 = (gcnew Iocomp::Instrumentation::Standard::Led());
			this->btn_open = (gcnew System::Windows::Forms::Button());
			this->led2 = (gcnew Iocomp::Instrumentation::Standard::Led());
			this->led3 = (gcnew Iocomp::Instrumentation::Standard::Led());
			this->led4 = (gcnew Iocomp::Instrumentation::Standard::Led());
			this->led5 = (gcnew Iocomp::Instrumentation::Standard::Led());
			this->led6 = (gcnew Iocomp::Instrumentation::Standard::Led());
			this->led7 = (gcnew Iocomp::Instrumentation::Standard::Led());
			this->led8 = (gcnew Iocomp::Instrumentation::Standard::Led());
			this->switchLever1 = (gcnew Iocomp::Instrumentation::Professional::SwitchLever());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(92, 347);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"端口";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(297, 347);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"波特率";
			this->label2->UseMnemonic = false;
			// 
			// com_port
			// 
			this->com_port->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->com_port->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->com_port->FormattingEnabled = true;
			this->com_port->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"COM1", L"COM2", L"COM3", L"COM4", L"COM5", L"COM6", 
				L"COM7"});
			this->com_port->Location = System::Drawing::Point(157, 342);
			this->com_port->Name = L"com_port";
			this->com_port->Size = System::Drawing::Size(92, 33);
			this->com_port->TabIndex = 0;
			this->com_port->TabStop = false;
			this->com_port->Text = L"COM3";
			// 
			// com_bps
			// 
			this->com_bps->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->com_bps->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->com_bps->FormattingEnabled = true;
			this->com_bps->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"4800", L"9600", L"14400", L"19200", L"28800", L"38400", 
				L"57600"});
			this->com_bps->Location = System::Drawing::Point(372, 344);
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
			// led1
			// 
			this->led1->LoadingBegin();
			this->led1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->led1->Indicator->ColorActive = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->led1->Indicator->ColorInactive = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->led1->Indicator->ColorInactiveAuto = false;
			this->led1->Location = System::Drawing::Point(68, 135);
			this->led1->Name = L"led1";
			this->led1->Size = System::Drawing::Size(40, 40);
			this->led1->Click += gcnew System::EventHandler(this, &Form1::led_Click);
			this->led1->LoadingEnd();
			// 
			// btn_open
			// 
			this->btn_open->Location = System::Drawing::Point(513, 340);
			this->btn_open->Name = L"btn_open";
			this->btn_open->Size = System::Drawing::Size(89, 39);
			this->btn_open->TabIndex = 6;
			this->btn_open->Text = L"开始";
			this->btn_open->UseVisualStyleBackColor = true;
			this->btn_open->Click += gcnew System::EventHandler(this, &Form1::btn_open_Click_1);
			// 
			// led2
			// 
			this->led2->LoadingBegin();
			this->led2->Indicator->ColorActive = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->led2->Indicator->ColorInactive = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->led2->Indicator->ColorInactiveAuto = false;
			this->led2->Location = System::Drawing::Point(144, 135);
			this->led2->Name = L"led2";
			this->led2->Size = System::Drawing::Size(40, 40);
			this->led2->Click += gcnew System::EventHandler(this, &Form1::led_Click);
			this->led2->LoadingEnd();
			// 
			// led3
			// 
			this->led3->LoadingBegin();
			this->led3->Indicator->ColorActive = System::Drawing::Color::Red;
			this->led3->Indicator->ColorInactive = System::Drawing::Color::Gray;
			this->led3->Indicator->ColorInactiveAuto = false;
			this->led3->Location = System::Drawing::Point(220, 135);
			this->led3->Name = L"led3";
			this->led3->Size = System::Drawing::Size(40, 40);
			this->led3->Click += gcnew System::EventHandler(this, &Form1::led_Click);
			this->led3->LoadingEnd();
			// 
			// led4
			// 
			this->led4->LoadingBegin();
			this->led4->Indicator->ColorActive = System::Drawing::Color::Red;
			this->led4->Indicator->ColorInactive = System::Drawing::Color::Gray;
			this->led4->Indicator->ColorInactiveAuto = false;
			this->led4->Location = System::Drawing::Point(296, 135);
			this->led4->Name = L"led4";
			this->led4->Size = System::Drawing::Size(40, 40);
			this->led4->Click += gcnew System::EventHandler(this, &Form1::led_Click);
			this->led4->LoadingEnd();
			// 
			// led5
			// 
			this->led5->LoadingBegin();
			this->led5->Indicator->ColorActive = System::Drawing::Color::Red;
			this->led5->Indicator->ColorInactive = System::Drawing::Color::Gray;
			this->led5->Indicator->ColorInactiveAuto = false;
			this->led5->Location = System::Drawing::Point(372, 135);
			this->led5->Name = L"led5";
			this->led5->Size = System::Drawing::Size(40, 40);
			this->led5->Click += gcnew System::EventHandler(this, &Form1::led_Click);
			this->led5->LoadingEnd();
			// 
			// led6
			// 
			this->led6->LoadingBegin();
			this->led6->Indicator->ColorActive = System::Drawing::Color::Red;
			this->led6->Indicator->ColorInactive = System::Drawing::Color::Gray;
			this->led6->Indicator->ColorInactiveAuto = false;
			this->led6->Location = System::Drawing::Point(448, 135);
			this->led6->Name = L"led6";
			this->led6->Size = System::Drawing::Size(40, 40);
			this->led6->Click += gcnew System::EventHandler(this, &Form1::led_Click);
			this->led6->LoadingEnd();
			// 
			// led7
			// 
			this->led7->LoadingBegin();
			this->led7->Indicator->ColorActive = System::Drawing::Color::Red;
			this->led7->Indicator->ColorInactive = System::Drawing::Color::Gray;
			this->led7->Indicator->ColorInactiveAuto = false;
			this->led7->Location = System::Drawing::Point(524, 135);
			this->led7->Name = L"led7";
			this->led7->Size = System::Drawing::Size(40, 40);
			this->led7->Click += gcnew System::EventHandler(this, &Form1::led_Click);
			this->led7->LoadingEnd();
			// 
			// led8
			// 
			this->led8->LoadingBegin();
			this->led8->Indicator->ColorActive = System::Drawing::Color::Red;
			this->led8->Indicator->ColorInactive = System::Drawing::Color::Gray;
			this->led8->Indicator->ColorInactiveAuto = false;
			this->led8->Location = System::Drawing::Point(600, 135);
			this->led8->Name = L"led8";
			this->led8->Size = System::Drawing::Size(40, 40);
			this->led8->Click += gcnew System::EventHandler(this, &Form1::led_Click);
			this->led8->LoadingEnd();
			// 
			// switchLever1
			// 
			this->switchLever1->LoadingBegin();
			this->switchLever1->Enabled = false;
			this->switchLever1->Location = System::Drawing::Point(280, 204);
			this->switchLever1->Name = L"switchLever1";
			this->switchLever1->Rotation = Iocomp::Types::RotationQuad::X090;
			this->switchLever1->Size = System::Drawing::Size(104, 39);
			this->switchLever1->TabIndex = 8;
			this->switchLever1->ValueChanged += gcnew Iocomp::Delegates::ValueBooleanEventHandler(this, &Form1::switchLever1_ValueChanged);
			this->switchLever1->LoadingEnd();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(212, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 25);
			this->label3->TabIndex = 9;
			this->label3->Text = L"控制";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(407, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"流水灯";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"楷体", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Blue;
			this->label5->Location = System::Drawing::Point(223, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(242, 48);
			this->label5->TabIndex = 19;
			this->label5->Text = L"LED灯控制";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->linkLabel1->LinkArea = System::Windows::Forms::LinkArea(0, 32);
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::AlwaysUnderline;
			this->linkLabel1->Location = System::Drawing::Point(444, 393);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(280, 21);
			this->linkLabel1->TabIndex = 20;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"http://shop120013844.taobao.com/";
			this->linkLabel1->Click += gcnew System::EventHandler(this, &Form1::linkLabel1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(358, 393);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 21);
			this->label6->TabIndex = 21;
			this->label6->Text = L"淘宝地址：";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(730, 57);
			this->panel1->TabIndex = 30;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(145, 57);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 328);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(730, 85);
			this->panel2->TabIndex = 31;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(730, 413);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->switchLever1);
			this->Controls->Add(this->led8);
			this->Controls->Add(this->led7);
			this->Controls->Add(this->led6);
			this->Controls->Add(this->led5);
			this->Controls->Add(this->led4);
			this->Controls->Add(this->led3);
			this->Controls->Add(this->led2);
			this->Controls->Add(this->btn_open);
			this->Controls->Add(this->led1);
			this->Controls->Add(this->com_bps);
			this->Controls->Add(this->com_port);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"深圳市航太电子有限公司";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		modbusRTU *modbus;
		Int16 led_value;
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
					 switchLever1->Enabled = true;
				 }
				 else
				 {
					 btn_open->Text = "开始";
					 serialPort1->Close();
					 timer1ms->Enabled = false;
					 timer100ms->Enabled = false;
					 switchLever1->Enabled = false;
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
			modbus->modbus_Addt.LED_value = 0xff;
			led_value = 0;
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
			 if (modbus->modbus_Addt.LED_ctrl == COMM_FLOW)
			 {
				 Int16 led_value_temp = modbus->modbus_Addt.LED_value;
				 led1->Value = ((led_value_temp & 0x0001) > 0);
				 led2->Value = ((led_value_temp & 0x0002) > 0);
				 led3->Value = ((led_value_temp & 0x0004) > 0);
				 led4->Value = ((led_value_temp & 0x0008) > 0);
				 led5->Value = ((led_value_temp & 0x0010) > 0);
				 led6->Value = ((led_value_temp & 0x0020) > 0);
				 led7->Value = ((led_value_temp & 0x0040) > 0);
				 led8->Value = ((led_value_temp & 0x0080) > 0);
			 }
			 //发送读取所有值指令
			 //刷新数据
			 modbus->SendReadCommand(4,0,2);
			 SendData();
		 }
private: System::Void led_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(!(serialPort1->IsOpen)) return;//串口没开，直接退出
			 if (modbus->modbus_Addt.LED_ctrl != COMM_PC) return;//指令不对不可点击
			 timer100ms->Stop();
			 Iocomp::Instrumentation::Standard::Led^  led = (Iocomp::Instrumentation::Standard::Led^ )sender;
			 String^ temp = led->Name->Substring(3);
			 int position = System::UInt32::Parse(temp)-1;
			 if(led->Value->AsBoolean == true)
			 {
				led->Value = false;
				led_value = led_value & ~(0x01<<position);//置0
			 }
			 else
			 {
				led->Value = true;
				led_value = led_value | (0x01<<position);//置1
			 }	

			 modbus->modbus_Addt.LED_value = led_value;
			 modbus->SendWriteCommand(6,0,1,&(modbus->modbus_Addt.LED_value));
			 SendData();
			 timer100ms->Start();//重新打开20ms计时器
		 }
private: System::Void switchLever1_ValueChanged(System::Object^  sender, Iocomp::Classes::ValueBooleanEventArgs^  e) {
			timer100ms->Stop();
			Int16 temp = 0;
			if(switchLever1->Value->AsBoolean == true) temp = 1;
			led1->Value = false;
			led2->Value = false;
			led3->Value = false;
			led4->Value = false;
			led5->Value = false;
			led6->Value = false;
			led7->Value = false;
			led8->Value = false;
			led_value = 0;
			modbus->modbus_Addt.LED_ctrl = temp;
			modbus->modbus_Addt.LED_value = 0;
			modbus->SendWriteCommand(16,0,2,&(modbus->modbus_Addt.LED_value));
			SendData();
			timer100ms->Start();//重新打开20ms计时器
		 }
private: System::Void linkLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process::Start(linkLabel1->Text);
		 }
};
}

