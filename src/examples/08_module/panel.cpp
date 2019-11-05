//panel.cpp
Panel::Panel(wxWindow * parent) : wxPanel(parent, -1)
{
	//create a button and bind to the Panel class OnDisplay function
	auto m_buttonAction = new wxButton(this, -1, wxT("Do something"));
	m_buttonAction->Bind(wxEVT_BUTTON, &Panel::OnDisplay, this);
}
//when button is clicked this function will execute
void Panel::OnDisplay(wxCommandEvent & event)
{
	wxMessageBox("Button clicked   ",
		"Hello Textbox", wxOK | wxICON_INFORMATION);
}