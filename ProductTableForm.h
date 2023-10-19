#pragma once

namespace Projecttest2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for ProductTableForm
	/// </summary>
	public ref class ProductTableForm : public System::Windows::Forms::Form
	{
	public:
		ProductTableForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProductTableForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ tdlProducts;
	private: System::Windows::Forms::PictureBox^ imgProductImage;
	private: System::Windows::Forms::RichTextBox^ txtProductDescription;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ lblProductDescription;
	private: System::Windows::Forms::Label^ lblProductName;
	private: System::Windows::Forms::RichTextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtName;


	private: System::Windows::Forms::Button^ btnUpdate;



	private: System::Windows::Forms::Label^ lblProductPrice;
	private: System::Windows::Forms::Label^ lblProductStock;
	private: System::Windows::Forms::NumericUpDown^ numPrice;

	private: System::Windows::Forms::NumericUpDown^ numStock;

	private: System::Windows::Forms::Button^ btnChangeImage;
	private: System::Windows::Forms::Button^ btnDeleteItem;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductTableForm::typeid));
			this->tdlProducts = (gcnew System::Windows::Forms::DataGridView());
			this->imgProductImage = (gcnew System::Windows::Forms::PictureBox());
			this->txtProductDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnChangeImage = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->lblProductPrice = (gcnew System::Windows::Forms::Label());
			this->lblProductDescription = (gcnew System::Windows::Forms::Label());
			this->lblProductStock = (gcnew System::Windows::Forms::Label());
			this->lblProductName = (gcnew System::Windows::Forms::Label());
			this->numPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->numStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnDeleteItem = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tdlProducts))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProductImage))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStock))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tdlProducts
			// 
			this->tdlProducts->AllowUserToAddRows = false;
			this->tdlProducts->AllowUserToDeleteRows = false;
			this->tdlProducts->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tdlProducts->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->tdlProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tdlProducts->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->tdlProducts->Location = System::Drawing::Point(364, 12);
			this->tdlProducts->MultiSelect = false;
			this->tdlProducts->Name = L"tdlProducts";
			this->tdlProducts->ReadOnly = true;
			this->tdlProducts->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tdlProducts->Size = System::Drawing::Size(353, 399);
			this->tdlProducts->TabIndex = 0;
			this->tdlProducts->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductTableForm::tdlProducts_CellClick);
			// 
			// imgProductImage
			// 
			this->imgProductImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgProductImage->Location = System::Drawing::Point(13, 13);
			this->imgProductImage->Name = L"imgProductImage";
			this->imgProductImage->Size = System::Drawing::Size(152, 127);
			this->imgProductImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgProductImage->TabIndex = 1;
			this->imgProductImage->TabStop = false;
			// 
			// txtProductDescription
			// 
			this->txtProductDescription->Location = System::Drawing::Point(180, 12);
			this->txtProductDescription->Name = L"txtProductDescription";
			this->txtProductDescription->ReadOnly = true;
			this->txtProductDescription->Size = System::Drawing::Size(169, 128);
			this->txtProductDescription->TabIndex = 2;
			this->txtProductDescription->Text = L"";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(13, 147);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(336, 268);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnChangeImage);
			this->tabPage1->Controls->Add(this->btnUpdate);
			this->tabPage1->Controls->Add(this->lblProductPrice);
			this->tabPage1->Controls->Add(this->lblProductDescription);
			this->tabPage1->Controls->Add(this->lblProductStock);
			this->tabPage1->Controls->Add(this->lblProductName);
			this->tabPage1->Controls->Add(this->numPrice);
			this->tabPage1->Controls->Add(this->numStock);
			this->tabPage1->Controls->Add(this->txtDescription);
			this->tabPage1->Controls->Add(this->txtName);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(328, 242);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Update Item";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btnChangeImage
			// 
			this->btnChangeImage->Location = System::Drawing::Point(176, 143);
			this->btnChangeImage->Name = L"btnChangeImage";
			this->btnChangeImage->Size = System::Drawing::Size(133, 39);
			this->btnChangeImage->TabIndex = 16;
			this->btnChangeImage->Text = L"Change Image";
			this->btnChangeImage->UseVisualStyleBackColor = true;
			this->btnChangeImage->Click += gcnew System::EventHandler(this, &ProductTableForm::btnChangeImage_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(176, 189);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(133, 38);
			this->btnUpdate->TabIndex = 15;
			this->btnUpdate->Text = L"Update Item";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductTableForm::btnUpdate_Click);
			// 
			// lblProductPrice
			// 
			this->lblProductPrice->AutoSize = true;
			this->lblProductPrice->Location = System::Drawing::Point(15, 189);
			this->lblProductPrice->Name = L"lblProductPrice";
			this->lblProductPrice->Size = System::Drawing::Size(71, 13);
			this->lblProductPrice->TabIndex = 14;
			this->lblProductPrice->Text = L"Product Price";
			// 
			// lblProductDescription
			// 
			this->lblProductDescription->AutoSize = true;
			this->lblProductDescription->Location = System::Drawing::Point(18, 65);
			this->lblProductDescription->Name = L"lblProductDescription";
			this->lblProductDescription->Size = System::Drawing::Size(100, 13);
			this->lblProductDescription->TabIndex = 10;
			this->lblProductDescription->Text = L"Product Description";
			// 
			// lblProductStock
			// 
			this->lblProductStock->AutoSize = true;
			this->lblProductStock->Location = System::Drawing::Point(15, 143);
			this->lblProductStock->Name = L"lblProductStock";
			this->lblProductStock->Size = System::Drawing::Size(75, 13);
			this->lblProductStock->TabIndex = 13;
			this->lblProductStock->Text = L"Product Stock";
			// 
			// lblProductName
			// 
			this->lblProductName->AutoSize = true;
			this->lblProductName->Location = System::Drawing::Point(15, 10);
			this->lblProductName->Name = L"lblProductName";
			this->lblProductName->Size = System::Drawing::Size(75, 13);
			this->lblProductName->TabIndex = 9;
			this->lblProductName->Text = L"Product Name";
			// 
			// numPrice
			// 
			this->numPrice->DecimalPlaces = 2;
			this->numPrice->Location = System::Drawing::Point(15, 207);
			this->numPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->numPrice->Name = L"numPrice";
			this->numPrice->Size = System::Drawing::Size(155, 20);
			this->numPrice->TabIndex = 12;
			this->numPrice->ThousandsSeparator = true;
			// 
			// numStock
			// 
			this->numStock->Location = System::Drawing::Point(15, 162);
			this->numStock->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->numStock->Name = L"numStock";
			this->numStock->Size = System::Drawing::Size(154, 20);
			this->numStock->TabIndex = 11;
			this->numStock->ThousandsSeparator = true;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(15, 84);
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(280, 43);
			this->txtDescription->TabIndex = 8;
			this->txtDescription->Text = L"";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(15, 29);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(280, 20);
			this->txtName->TabIndex = 7;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->btnDeleteItem);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(328, 242);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Delete Item";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnDeleteItem
			// 
			this->btnDeleteItem->Location = System::Drawing::Point(6, 144);
			this->btnDeleteItem->Name = L"btnDeleteItem";
			this->btnDeleteItem->Size = System::Drawing::Size(316, 92);
			this->btnDeleteItem->TabIndex = 0;
			this->btnDeleteItem->Text = L"Delete Item";
			this->btnDeleteItem->UseVisualStyleBackColor = true;
			this->btnDeleteItem->Click += gcnew System::EventHandler(this, &ProductTableForm::btnDeleteItem_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(17, 421);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(332, 75);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// ProductTableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 505);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->txtProductDescription);
			this->Controls->Add(this->imgProductImage);
			this->Controls->Add(this->tdlProducts);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ProductTableForm";
			this->Text = L"ProductTableForm";
			this->Load += gcnew System::EventHandler(this, &ProductTableForm::ProductTableForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tdlProducts))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProductImage))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStock))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	//Connection DataBase MySQL
	String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=admin";
	MySqlConnection^ conn = gcnew MySqlConnection(connString);

	void populateTable() {
		try
		{
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT PID,ProductName,ProductStock,ProductPrice From tblproducts", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			tdlProducts->DataSource = dt;
			conn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to Read Data.");
		}
	}

	private: System::Void ProductTableForm_Load(System::Object^ sender, System::EventArgs^ e) {
		populateTable();
	}
	private: System::Void tdlProducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		//MessageBox::Show(tdlProducts->CurrentCell->RowIndex.ToString());
		String^ currPID = tdlProducts->Rows[tdlProducts->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
		try
		{
			conn->Open();

			imgProductImage->Image = nullptr;
			txtProductDescription->Text = "";
			txtName->Text = "";
			txtDescription->Text = "";
			numPrice->Value = 0;
			numStock->Value = 0;

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT ProductImage, ProductDescription From tblproducts WHERE PID ="+currPID, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			String^ productDescription = dt->Rows[0]->ItemArray[1]->ToString();
			txtProductDescription->Text = productDescription;

			txtDescription->Text = productDescription;
			txtName->Text = tdlProducts->Rows[tdlProducts->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
			numStock->Value = Convert::ToInt32(tdlProducts->Rows[tdlProducts->CurrentCell->RowIndex]->Cells[2]->Value);
			numPrice->Value = Convert::ToDecimal(tdlProducts->Rows[tdlProducts->CurrentCell->RowIndex]->Cells[3]->Value);


			array<unsigned char>^ productImage = (array<unsigned char>^)dt->Rows[0]->ItemArray[0];
			MemoryStream^ ms = gcnew MemoryStream(productImage);
			imgProductImage->Image = Image::FromStream(ms);

			conn->Close();
		}
		catch (Exception^ e)
		{
			//MessageBox::Show("Failed To Read Data.");
			conn->Close();
		}
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ currPID = tdlProducts->Rows[tdlProducts->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
		String^ productName = txtName->Text;
		String^ productDescription = txtDescription->Text;
		int productStock = Convert::ToInt32(numStock->Value);
		double productPrice = Convert::ToDouble(numPrice->Value);

		array<unsigned char>^ productImage;

		try
		{
			MemoryStream^ ms = gcnew MemoryStream();
			if (imgProductImage->Image != nullptr) {
				imgProductImage->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				productImage = ms->ToArray();
			}
		}
		catch (Exception^ e)
		{

		}
		
		try
		{
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE tblproducts SET ProductName=@productName,ProductDescription=@productDescription,ProductStock=@productStock,ProductPrice=@productPrice,ProductImage=@productImage WHERE PID="+currPID,conn);
			
			cmd->Parameters->AddWithValue("@productName", productName);
			cmd->Parameters->AddWithValue("@productDescription", productDescription);
			cmd->Parameters->AddWithValue("@productStock", productStock);
			cmd->Parameters->AddWithValue("@productPrice", productPrice);
			cmd->Parameters->AddWithValue("@productImage", productImage);

			cmd->ExecuteNonQuery();
			MessageBox::Show(productName + " Successfully Updated");
			conn->Close();
			populateTable();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(productName + "Error Updating.");
		}

	}
	private: System::Void btnChangeImage_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "PNG Files *.png|*.png|JPG Files *.jpg|*.jpg|All Files *.*|*.*";

		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
			imgProductImage->ImageLocation = ofd->FileName;
		}
	}
	private: System::Void btnDeleteItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ currPID = tdlProducts->Rows[tdlProducts->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
		
		try
		{
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM tblproducts WHERE PID="+currPID,conn);
			cmd->ExecuteNonQuery();
			conn->Close();
			MessageBox::Show("Successfuly Deleted.");
			populateTable();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error Deleting.");
		}
	}
};
}
