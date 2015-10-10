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



	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;









	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  lab_keyvalue;
	private: System::Windows::Forms::Label^  lab_keyadd;
	private: System::Windows::Forms::Label^  label7;












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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lab_keyvalue = (gcnew System::Windows::Forms::Label());
			this->lab_keyadd = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->label5->Text = L"红外接收实验";
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
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(270, 191);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(162, 38);
			this->label10->TabIndex = 38;
			this->label10->Text = L"遥控键值：";
			this->label10->UseMnemonic = false;
			// 
			// lab_keyvalue
			// 
			this->lab_keyvalue->AutoSize = true;
			this->lab_keyvalue->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->lab_keyvalue->ForeColor = System::Drawing::Color::Red;
			this->lab_keyvalue->Location = System::Drawing::Point(438, 191);
			this->lab_keyvalue->Name = L"lab_keyvalue";
			this->lab_keyvalue->Size = System::Drawing::Size(34, 38);
			this->lab_keyvalue->TabIndex = 0;
			this->lab_keyvalue->Text = L"0";
			this->lab_keyvalue->UseMnemonic = false;
			// 
			// lab_keyadd
			// 
			this->lab_keyadd->AutoSize = true;
			this->lab_keyadd->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->lab_keyadd->ForeColor = System::Drawing::Color::Red;
			this->lab_keyadd->Location = System::Drawing::Point(438, 138);
			this->lab_keyadd->Name = L"lab_keyadd";
			this->lab_keyadd->Size = System::Drawing::Size(34, 38);
			this->lab_keyadd->TabIndex = 39;
			this->lab_keyadd->Text = L"0";
			this->lab_keyadd->UseMnemonic = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(270, 138);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(162, 38);
			this->label7->TabIndex = 40;
			this->label7->Text = L"遥控地址：";
			this->label7->UseMnemonic = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(839, 451);
			this->Controls->Add(this->lab_keyadd);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lab_keyvalue);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label3);
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
			 lab_keyvalue->Text = modbus->modbus_Addt.key_value.ToString();
			 lab_keyadd->Text = modbus->modbus_Addt.key_add.ToString();
			 //发送读取所有值指令

			 //刷新数据
			 modbus->SendReadCommand(FUN_REG,0,2);
			 SendData();
		 }

private: System::Void linkLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process::Start(linkLabel1->Text);
		 }
};
}

