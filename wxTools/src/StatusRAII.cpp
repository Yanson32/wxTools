#include "AwesomeWMShared/StatusRAII.h"


StatusRAII::StatusRAII(wxStatusBar *statusbar, const wxString &message, const long newPosition):
status(statusbar),
position(newPosition)
{
	status->PushStatusText(message, position);
}

StatusRAII::~StatusRAII()
{
	status->PopStatusText(position);
}

