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





















	private: System::Windows::Forms::ImageList^  imageList1;























	private: System::Windows::Forms::ImageList^  imageList2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: Iocomp::Instrumentation::Plotting::Plot^  plot_U;


	private: Iocomp::Instrumentation::Plotting::PlotToolBarStandard^  plotToolBarStandard1;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton1;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton2;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton3;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton4;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton5;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton6;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton7;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton8;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton9;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton10;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton11;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton12;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton13;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton14;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton15;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton16;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton17;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton18;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton19;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton20;
	private: Iocomp::Classes::PlotToolBarButton^  plotToolBarButton21;
	private: System::Windows::Forms::ImageList^  imageList3;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: Iocomp::Instrumentation::Standard::Thermometer^  the_temper;
private: System::Windows::Forms::Label^  label3;
private: Iocomp::Instrumentation::Standard::EditDouble^  edit_temper;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::NumericUpDown^  num_temph;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::NumericUpDown^  num_templ;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;




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
			Iocomp::Classes::PlotChannelTrace^  plotChannelTrace4 = (gcnew Iocomp::Classes::PlotChannelTrace());
			Iocomp::Classes::PlotDataCursorXY^  plotDataCursorXY4 = (gcnew Iocomp::Classes::PlotDataCursorXY());
			Iocomp::Classes::PlotDataView^  plotDataView4 = (gcnew Iocomp::Classes::PlotDataView());
			Iocomp::Classes::PlotLabelBasic^  plotLabelBasic4 = (gcnew Iocomp::Classes::PlotLabelBasic());
			Iocomp::Classes::PlotLegendBasic^  plotLegendBasic4 = (gcnew Iocomp::Classes::PlotLegendBasic());
			Iocomp::Classes::PlotXAxis^  plotXAxis4 = (gcnew Iocomp::Classes::PlotXAxis());
			Iocomp::Classes::PlotYAxis^  plotYAxis4 = (gcnew Iocomp::Classes::PlotYAxis());
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
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->plot_U = (gcnew Iocomp::Instrumentation::Plotting::Plot());
			this->plotToolBarStandard1 = (gcnew Iocomp::Instrumentation::Plotting::PlotToolBarStandard());
			this->plotToolBarButton1 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton2 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton3 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton4 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton5 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton6 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton7 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton8 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton9 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton10 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton11 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton12 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton13 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton14 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton15 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton16 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton17 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton18 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton19 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton20 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->plotToolBarButton21 = (gcnew Iocomp::Classes::PlotToolBarButton());
			this->imageList3 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->the_temper = (gcnew Iocomp::Instrumentation::Standard::Thermometer());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->edit_temper = (gcnew Iocomp::Instrumentation::Standard::EditDouble());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->num_temph = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->num_templ = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_temph))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_templ))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(123, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"端口";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(328, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"波特率";
			this->label2->UseMnemonic = false;
			// 
			// com_port
			// 
			this->com_port->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->com_port->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->com_port->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->com_port->FormattingEnabled = true;
			this->com_port->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"COM1", L"COM2", L"COM3", L"COM4", L"COM5", L"COM6", 
				L"COM7"});
			this->com_port->Location = System::Drawing::Point(188, 18);
			this->com_port->Name = L"com_port";
			this->com_port->Size = System::Drawing::Size(92, 33);
			this->com_port->TabIndex = 0;
			this->com_port->TabStop = false;
			this->com_port->Text = L"COM3";
			// 
			// com_bps
			// 
			this->com_bps->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->com_bps->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->com_bps->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->com_bps->FormattingEnabled = true;
			this->com_bps->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"4800", L"9600", L"14400", L"19200", L"28800", L"38400", 
				L"57600"});
			this->com_bps->Location = System::Drawing::Point(403, 18);
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
			this->btn_open->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btn_open->Location = System::Drawing::Point(563, 16);
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
			this->label5->Location = System::Drawing::Point(270, 6);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(363, 48);
			this->label5->TabIndex = 19;
			this->label5->Text = L"温度传感器实验";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label5->UseMnemonic = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->linkLabel1->LinkArea = System::Windows::Forms::LinkArea(0, 32);
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::AlwaysUnderline;
			this->linkLabel1->Location = System::Drawing::Point(626, 442);
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
			this->label6->Location = System::Drawing::Point(530, 442);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 21);
			this->label6->TabIndex = 21;
			this->label6->Text = L"淘宝地址：";
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"");
			this->imageList1->Images->SetKeyName(1, L"");
			this->imageList1->Images->SetKeyName(2, L"");
			this->imageList1->Images->SetKeyName(3, L"");
			this->imageList1->Images->SetKeyName(4, L"");
			this->imageList1->Images->SetKeyName(5, L"");
			this->imageList1->Images->SetKeyName(6, L"");
			this->imageList1->Images->SetKeyName(7, L"");
			this->imageList1->Images->SetKeyName(8, L"");
			this->imageList1->Images->SetKeyName(9, L"");
			this->imageList1->Images->SetKeyName(10, L"");
			this->imageList1->Images->SetKeyName(11, L"");
			this->imageList1->Images->SetKeyName(12, L"");
			this->imageList1->Images->SetKeyName(13, L"");
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"");
			this->imageList2->Images->SetKeyName(1, L"");
			this->imageList2->Images->SetKeyName(2, L"");
			this->imageList2->Images->SetKeyName(3, L"");
			this->imageList2->Images->SetKeyName(4, L"");
			this->imageList2->Images->SetKeyName(5, L"");
			this->imageList2->Images->SetKeyName(6, L"");
			this->imageList2->Images->SetKeyName(7, L"");
			this->imageList2->Images->SetKeyName(8, L"");
			this->imageList2->Images->SetKeyName(9, L"");
			this->imageList2->Images->SetKeyName(10, L"");
			this->imageList2->Images->SetKeyName(11, L"");
			this->imageList2->Images->SetKeyName(12, L"");
			this->imageList2->Images->SetKeyName(13, L"");
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btn_open);
			this->panel1->Controls->Add(this->com_bps);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->com_port);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 383);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(906, 79);
			this->panel1->TabIndex = 41;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(906, 57);
			this->panel2->TabIndex = 42;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(145, 57);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->plot_U);
			this->panel3->Controls->Add(this->plotToolBarStandard1);
			this->panel3->Location = System::Drawing::Point(0, 57);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(485, 326);
			this->panel3->TabIndex = 43;
			// 
			// plot_U
			// 
			this->plot_U->LoadingBegin();
			this->plot_U->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			plotChannelTrace4->CanFocus = false;
			plotChannelTrace4->Color = System::Drawing::Color::Red;
			plotChannelTrace4->ContextMenuEnabled = false;
			plotChannelTrace4->Name = L"Channel 1";
			plotChannelTrace4->OPCXValueSource = Iocomp::Types::OPCXValueType::SystemClock;
			plotChannelTrace4->TitleText = L"Channel 1";
			plotChannelTrace4->UserCanEdit = false;
			plotChannelTrace4->VisibleInLegend = false;
			plotChannelTrace4->XAxisName = L"time";
			plotChannelTrace4->YAxisName = L"temperature";
			this->plot_U->Channels->Add(plotChannelTrace4);
			plotDataCursorXY4->Hint->Fill->Pen->Color = System::Drawing::SystemColors::InfoText;
			plotDataCursorXY4->Name = L"Data-Cursor 1";
			plotDataCursorXY4->TitleText = L"Data-Cursor 1";
			plotDataCursorXY4->XAxisName = L"time";
			plotDataCursorXY4->YAxisName = L"temperature";
			this->plot_U->DataCursors->Add(plotDataCursorXY4);
			plotDataView4->DockOrder = 0;
			plotDataView4->Name = L"Data-View 1";
			plotDataView4->TitleText = L"Data-View 1";
			this->plot_U->DataViews->Add(plotDataView4);
			this->plot_U->Dock = System::Windows::Forms::DockStyle::Fill;
			this->plot_U->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			plotLabelBasic4->DockOrder = 0;
			plotLabelBasic4->Name = L"Label 1";
			plotLabelBasic4->TitleText = L"Label 1";
			plotLabelBasic4->Visible = false;
			this->plot_U->Labels->Add(plotLabelBasic4);
			plotLegendBasic4->DockOrder = 0;
			plotLegendBasic4->Name = L"Legend 1";
			plotLegendBasic4->TitleText = L"Legend 1";
			plotLegendBasic4->Visible = false;
			this->plot_U->Legends->Add(plotLegendBasic4);
			this->plot_U->Location = System::Drawing::Point(0, 28);
			this->plot_U->Name = L"plot_U";
			this->plot_U->Size = System::Drawing::Size(485, 298);
			this->plot_U->TabIndex = 1;
			plotXAxis4->CanFocus = false;
			plotXAxis4->ContextMenuEnabled = false;
			plotXAxis4->ControlKeyToggleEnabled = false;
			plotXAxis4->DockOrder = 0;
			plotXAxis4->MasterUISlave = false;
			plotXAxis4->Name = L"time";
			plotXAxis4->ScaleDisplay->TextFormatting->DateTimeFormat = L"mm:ss";
			plotXAxis4->ScaleDisplay->TextFormatting->Style = Iocomp::Types::TextFormatDoubleStyle::DateTime;
			plotXAxis4->ScaleRange->Span = 0.000694444446708076;
			plotXAxis4->Title->Text = L"时间";
			plotXAxis4->UserCanEdit = false;
			this->plot_U->XAxes->Add(plotXAxis4);
			plotYAxis4->CanFocus = false;
			plotYAxis4->ContextMenuEnabled = false;
			plotYAxis4->ControlKeyToggleEnabled = false;
			plotYAxis4->DockOrder = 0;
			plotYAxis4->GridLines->Mid->Visible = true;
			plotYAxis4->MasterUISlave = false;
			plotYAxis4->Name = L"temperature";
			plotYAxis4->ScaleRange->Span = 50;
			plotYAxis4->Title->Text = L"温度";
			plotYAxis4->UserCanEdit = false;
			this->plot_U->YAxes->Add(plotYAxis4);
			this->plot_U->LoadingEnd();
			// 
			// plotToolBarStandard1
			// 
			this->plotToolBarStandard1->LoadingBegin();
			this->plotToolBarStandard1->Appearance = System::Windows::Forms::ToolBarAppearance::Flat;
			this->plotToolBarStandard1->Buttons->AddRange(gcnew cli::array< System::Windows::Forms::ToolBarButton^  >(21) {this->plotToolBarButton1, 
				this->plotToolBarButton2, this->plotToolBarButton3, this->plotToolBarButton4, this->plotToolBarButton5, this->plotToolBarButton6, 
				this->plotToolBarButton7, this->plotToolBarButton8, this->plotToolBarButton9, this->plotToolBarButton10, this->plotToolBarButton11, 
				this->plotToolBarButton12, this->plotToolBarButton13, this->plotToolBarButton14, this->plotToolBarButton15, this->plotToolBarButton16, 
				this->plotToolBarButton17, this->plotToolBarButton18, this->plotToolBarButton19, this->plotToolBarButton20, this->plotToolBarButton21});
			this->plotToolBarStandard1->DropDownArrows = true;
			this->plotToolBarStandard1->ImageList = this->imageList3;
			this->plotToolBarStandard1->Location = System::Drawing::Point(0, 0);
			this->plotToolBarStandard1->Name = L"plotToolBarStandard1";
			this->plotToolBarStandard1->Plot = this->plot_U;
			this->plotToolBarStandard1->ShowToolTips = true;
			this->plotToolBarStandard1->Size = System::Drawing::Size(485, 28);
			this->plotToolBarStandard1->TabIndex = 2;
			this->plotToolBarStandard1->LoadingEnd();
			// 
			// plotToolBarButton1
			// 
			this->plotToolBarButton1->LoadingBegin();
			this->plotToolBarButton1->Enabled = false;
			this->plotToolBarButton1->ImageIndex = 0;
			this->plotToolBarButton1->Name = L"plotToolBarButton1";
			this->plotToolBarButton1->ToolTipText = L"Tracking Resume";
			this->plotToolBarButton1->LoadingEnd();
			// 
			// plotToolBarButton2
			// 
			this->plotToolBarButton2->LoadingBegin();
			this->plotToolBarButton2->Command = Iocomp::Types::PlotToolBarCommandStyle::TrackingPause;
			this->plotToolBarButton2->ImageIndex = 1;
			this->plotToolBarButton2->Name = L"plotToolBarButton2";
			this->plotToolBarButton2->ToolTipText = L"Tracking Pause";
			this->plotToolBarButton2->LoadingEnd();
			// 
			// plotToolBarButton3
			// 
			this->plotToolBarButton3->LoadingBegin();
			this->plotToolBarButton3->Command = Iocomp::Types::PlotToolBarCommandStyle::Separator;
			this->plotToolBarButton3->Enabled = false;
			this->plotToolBarButton3->Name = L"plotToolBarButton3";
			this->plotToolBarButton3->Style = System::Windows::Forms::ToolBarButtonStyle::Separator;
			this->plotToolBarButton3->LoadingEnd();
			// 
			// plotToolBarButton4
			// 
			this->plotToolBarButton4->LoadingBegin();
			this->plotToolBarButton4->Command = Iocomp::Types::PlotToolBarCommandStyle::AxesScroll;
			this->plotToolBarButton4->ImageIndex = 2;
			this->plotToolBarButton4->Name = L"plotToolBarButton4";
			this->plotToolBarButton4->Pushed = true;
			this->plotToolBarButton4->ToolTipText = L"Axes Scroll";
			this->plotToolBarButton4->LoadingEnd();
			// 
			// plotToolBarButton5
			// 
			this->plotToolBarButton5->LoadingBegin();
			this->plotToolBarButton5->Command = Iocomp::Types::PlotToolBarCommandStyle::AxesZoom;
			this->plotToolBarButton5->ImageIndex = 3;
			this->plotToolBarButton5->Name = L"plotToolBarButton5";
			this->plotToolBarButton5->ToolTipText = L"Axes Zoom";
			this->plotToolBarButton5->LoadingEnd();
			// 
			// plotToolBarButton6
			// 
			this->plotToolBarButton6->LoadingBegin();
			this->plotToolBarButton6->Command = Iocomp::Types::PlotToolBarCommandStyle::Separator;
			this->plotToolBarButton6->Enabled = false;
			this->plotToolBarButton6->Name = L"plotToolBarButton6";
			this->plotToolBarButton6->Style = System::Windows::Forms::ToolBarButtonStyle::Separator;
			this->plotToolBarButton6->LoadingEnd();
			// 
			// plotToolBarButton7
			// 
			this->plotToolBarButton7->LoadingBegin();
			this->plotToolBarButton7->Command = Iocomp::Types::PlotToolBarCommandStyle::ZoomOut;
			this->plotToolBarButton7->ImageIndex = 4;
			this->plotToolBarButton7->Name = L"plotToolBarButton7";
			this->plotToolBarButton7->ToolTipText = L"Zoom-Out";
			this->plotToolBarButton7->LoadingEnd();
			// 
			// plotToolBarButton8
			// 
			this->plotToolBarButton8->LoadingBegin();
			this->plotToolBarButton8->Command = Iocomp::Types::PlotToolBarCommandStyle::ZoomIn;
			this->plotToolBarButton8->ImageIndex = 5;
			this->plotToolBarButton8->Name = L"plotToolBarButton8";
			this->plotToolBarButton8->ToolTipText = L"Zoom-In";
			this->plotToolBarButton8->LoadingEnd();
			// 
			// plotToolBarButton9
			// 
			this->plotToolBarButton9->LoadingBegin();
			this->plotToolBarButton9->Command = Iocomp::Types::PlotToolBarCommandStyle::Separator;
			this->plotToolBarButton9->Enabled = false;
			this->plotToolBarButton9->Name = L"plotToolBarButton9";
			this->plotToolBarButton9->Style = System::Windows::Forms::ToolBarButtonStyle::Separator;
			this->plotToolBarButton9->LoadingEnd();
			// 
			// plotToolBarButton10
			// 
			this->plotToolBarButton10->LoadingBegin();
			this->plotToolBarButton10->Command = Iocomp::Types::PlotToolBarCommandStyle::Select;
			this->plotToolBarButton10->ImageIndex = 6;
			this->plotToolBarButton10->Name = L"plotToolBarButton10";
			this->plotToolBarButton10->Pushed = true;
			this->plotToolBarButton10->ToolTipText = L"Select";
			this->plotToolBarButton10->LoadingEnd();
			// 
			// plotToolBarButton11
			// 
			this->plotToolBarButton11->LoadingBegin();
			this->plotToolBarButton11->Command = Iocomp::Types::PlotToolBarCommandStyle::ZoomBox;
			this->plotToolBarButton11->ImageIndex = 7;
			this->plotToolBarButton11->Name = L"plotToolBarButton11";
			this->plotToolBarButton11->ToolTipText = L"Zoom-Box";
			this->plotToolBarButton11->LoadingEnd();
			// 
			// plotToolBarButton12
			// 
			this->plotToolBarButton12->LoadingBegin();
			this->plotToolBarButton12->Command = Iocomp::Types::PlotToolBarCommandStyle::DataCursor;
			this->plotToolBarButton12->ImageIndex = 8;
			this->plotToolBarButton12->Name = L"plotToolBarButton12";
			this->plotToolBarButton12->ToolTipText = L"Data-Cursor";
			this->plotToolBarButton12->LoadingEnd();
			// 
			// plotToolBarButton13
			// 
			this->plotToolBarButton13->LoadingBegin();
			this->plotToolBarButton13->Command = Iocomp::Types::PlotToolBarCommandStyle::Separator;
			this->plotToolBarButton13->Enabled = false;
			this->plotToolBarButton13->Name = L"plotToolBarButton13";
			this->plotToolBarButton13->Style = System::Windows::Forms::ToolBarButtonStyle::Separator;
			this->plotToolBarButton13->LoadingEnd();
			// 
			// plotToolBarButton14
			// 
			this->plotToolBarButton14->LoadingBegin();
			this->plotToolBarButton14->Command = Iocomp::Types::PlotToolBarCommandStyle::Edit;
			this->plotToolBarButton14->ImageIndex = 9;
			this->plotToolBarButton14->Name = L"plotToolBarButton14";
			this->plotToolBarButton14->ToolTipText = L"Edit";
			this->plotToolBarButton14->LoadingEnd();
			// 
			// plotToolBarButton15
			// 
			this->plotToolBarButton15->LoadingBegin();
			this->plotToolBarButton15->Command = Iocomp::Types::PlotToolBarCommandStyle::Separator;
			this->plotToolBarButton15->Enabled = false;
			this->plotToolBarButton15->Name = L"plotToolBarButton15";
			this->plotToolBarButton15->Style = System::Windows::Forms::ToolBarButtonStyle::Separator;
			this->plotToolBarButton15->LoadingEnd();
			// 
			// plotToolBarButton16
			// 
			this->plotToolBarButton16->LoadingBegin();
			this->plotToolBarButton16->Command = Iocomp::Types::PlotToolBarCommandStyle::Copy;
			this->plotToolBarButton16->ImageIndex = 10;
			this->plotToolBarButton16->Name = L"plotToolBarButton16";
			this->plotToolBarButton16->ToolTipText = L"Copy to Clipboard";
			this->plotToolBarButton16->LoadingEnd();
			// 
			// plotToolBarButton17
			// 
			this->plotToolBarButton17->LoadingBegin();
			this->plotToolBarButton17->Command = Iocomp::Types::PlotToolBarCommandStyle::Save;
			this->plotToolBarButton17->ImageIndex = 11;
			this->plotToolBarButton17->Name = L"plotToolBarButton17";
			this->plotToolBarButton17->ToolTipText = L"Save";
			this->plotToolBarButton17->LoadingEnd();
			// 
			// plotToolBarButton18
			// 
			this->plotToolBarButton18->LoadingBegin();
			this->plotToolBarButton18->Command = Iocomp::Types::PlotToolBarCommandStyle::Separator;
			this->plotToolBarButton18->Enabled = false;
			this->plotToolBarButton18->Name = L"plotToolBarButton18";
			this->plotToolBarButton18->Style = System::Windows::Forms::ToolBarButtonStyle::Separator;
			this->plotToolBarButton18->LoadingEnd();
			// 
			// plotToolBarButton19
			// 
			this->plotToolBarButton19->LoadingBegin();
			this->plotToolBarButton19->Command = Iocomp::Types::PlotToolBarCommandStyle::Print;
			this->plotToolBarButton19->ImageIndex = 12;
			this->plotToolBarButton19->Name = L"plotToolBarButton19";
			this->plotToolBarButton19->ToolTipText = L"Print";
			this->plotToolBarButton19->LoadingEnd();
			// 
			// plotToolBarButton20
			// 
			this->plotToolBarButton20->LoadingBegin();
			this->plotToolBarButton20->Command = Iocomp::Types::PlotToolBarCommandStyle::Preview;
			this->plotToolBarButton20->ImageIndex = 13;
			this->plotToolBarButton20->Name = L"plotToolBarButton20";
			this->plotToolBarButton20->ToolTipText = L"Preview";
			this->plotToolBarButton20->LoadingEnd();
			// 
			// plotToolBarButton21
			// 
			this->plotToolBarButton21->LoadingBegin();
			this->plotToolBarButton21->Command = Iocomp::Types::PlotToolBarCommandStyle::PageSetup;
			this->plotToolBarButton21->ImageIndex = 14;
			this->plotToolBarButton21->Name = L"plotToolBarButton21";
			this->plotToolBarButton21->ToolTipText = L"Page Setup";
			this->plotToolBarButton21->LoadingEnd();
			// 
			// imageList3
			// 
			this->imageList3->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList3.ImageStream")));
			this->imageList3->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList3->Images->SetKeyName(0, L"");
			this->imageList3->Images->SetKeyName(1, L"");
			this->imageList3->Images->SetKeyName(2, L"");
			this->imageList3->Images->SetKeyName(3, L"");
			this->imageList3->Images->SetKeyName(4, L"");
			this->imageList3->Images->SetKeyName(5, L"");
			this->imageList3->Images->SetKeyName(6, L"");
			this->imageList3->Images->SetKeyName(7, L"");
			this->imageList3->Images->SetKeyName(8, L"");
			this->imageList3->Images->SetKeyName(9, L"");
			this->imageList3->Images->SetKeyName(10, L"");
			this->imageList3->Images->SetKeyName(11, L"");
			this->imageList3->Images->SetKeyName(12, L"");
			this->imageList3->Images->SetKeyName(13, L"");
			// 
			// the_temper
			// 
			this->the_temper->LoadingBegin();
			this->the_temper->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->the_temper->Location = System::Drawing::Point(551, 63);
			this->the_temper->Name = L"the_temper";
			this->the_temper->Pointer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->the_temper->ScaleDisplay->GeneratorStyle = Iocomp::Types::ScaleGeneratorStyle::Fixed;
			this->the_temper->ScaleDisplay->TickMajor->Length = 10;
			this->the_temper->ScaleRange->Span = 50;
			this->the_temper->Size = System::Drawing::Size(82, 302);
			this->the_temper->Value->AsDouble = 30;
			this->the_temper->Value->Max = 50;
			this->the_temper->LoadingEnd();
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(688, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 25);
			this->label3->TabIndex = 45;
			this->label3->Text = L"温度";
			this->label3->UseMnemonic = false;
			// 
			// edit_temper
			// 
			this->edit_temper->LoadingBegin();
			this->edit_temper->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->edit_temper->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->edit_temper->Location = System::Drawing::Point(744, 244);
			this->edit_temper->Name = L"edit_temper";
			this->edit_temper->ReadOnly = true;
			this->edit_temper->Size = System::Drawing::Size(75, 33);
			this->edit_temper->TabIndex = 46;
			this->edit_temper->Value->AsDouble = 30;
			this->edit_temper->LoadingEnd();
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(825, 252);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 25);
			this->label4->TabIndex = 47;
			this->label4->Text = L"°C";
			this->label4->UseMnemonic = false;
			// 
			// num_temph
			// 
			this->num_temph->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->num_temph->BackColor = System::Drawing::Color::Silver;
			this->num_temph->Location = System::Drawing::Point(802, 83);
			this->num_temph->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {50, 0, 0, 0});
			this->num_temph->Name = L"num_temph";
			this->num_temph->ReadOnly = true;
			this->num_temph->Size = System::Drawing::Size(52, 33);
			this->num_temph->TabIndex = 49;
			this->num_temph->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {30, 0, 0, 0});
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(689, 91);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 25);
			this->label7->TabIndex = 50;
			this->label7->Text = L"高位报警值";
			this->label7->UseMnemonic = false;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(689, 138);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 25);
			this->label8->TabIndex = 52;
			this->label8->Text = L"低位报警值";
			this->label8->UseMnemonic = false;
			// 
			// num_templ
			// 
			this->num_templ->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->num_templ->BackColor = System::Drawing::Color::Silver;
			this->num_templ->Location = System::Drawing::Point(802, 130);
			this->num_templ->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {50, 0, 0, 0});
			this->num_templ->Name = L"num_templ";
			this->num_templ->ReadOnly = true;
			this->num_templ->Size = System::Drawing::Size(52, 33);
			this->num_templ->TabIndex = 51;
			this->num_templ->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {28, 0, 0, 0});
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(861, 91);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 25);
			this->label9->TabIndex = 54;
			this->label9->Text = L"°C";
			this->label9->UseMnemonic = false;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(861, 138);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 25);
			this->label10->TabIndex = 55;
			this->label10->Text = L"°C";
			this->label10->UseMnemonic = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(906, 462);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->num_templ);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->num_temph);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->edit_temper);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->the_temper);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->linkLabel1);
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
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_temph))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->num_templ))->EndInit();
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
			plot_U->Channels->Trace["Channel 1"]->Trace->Thickness = 2;
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
			double temperature = (modbus->modbus_Addt.temperature)*0.0625;
			temperature = Math::Round(temperature,1);//取1位小数
			//限幅
			if(temperature > the_temper->ScaleRange->Max) temperature = the_temper->ScaleRange->Max;
			if(temperature < the_temper->ScaleRange->Min) temperature = the_temper->ScaleRange->Min;
			plot_U->Channels[0]->AddXY(System::DateTime::Now,temperature);//绘图
			edit_temper->Value = temperature;
			the_temper->Value = temperature;
			if(temperature <= Decimal::ToInt16(num_templ->Value))  
				the_temper->Pointer->ForeColor = Color::Blue;
			else if(temperature >= Decimal::ToInt16(num_temph->Value))
				the_temper->Pointer->ForeColor = Color::Red;
			else the_temper->Pointer->ForeColor = Color::DarkOrange;

			//发送控制值
			int temper_l = modbus->modbus_Addt.temper_l/16;//  0.0625 = 1/16
			int temper_h = modbus->modbus_Addt.temper_h/16;
			if((temper_l != Decimal::ToInt16(num_templ->Value)) || (temper_h != Decimal::ToInt16(num_temph->Value)))
			{
				modbus->modbus_Addt.temper_l = Decimal::ToInt16(num_templ->Value)*16;
				modbus->modbus_Addt.temper_h = Decimal::ToInt16(num_temph->Value)*16;
				modbus->SendWriteCommand(FUN_WRITENREG,1,2,&(modbus->modbus_Addt.temper_h));
				SendData();
				return;
			}
			 //发送读取所有值指令
			 //刷新数据
			 modbus->SendReadCommand(4,0,3);
			 SendData();
		 }
private: System::Void linkLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process::Start(linkLabel1->Text);
		 }
};
}

