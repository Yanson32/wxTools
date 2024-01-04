#ifndef STATUS_RAII_H
#define STATUS_RAII_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include <wxtools_export.h>

class WXTOOLS_EXPORT StatusRAII
{
	public:
        	StatusRAII(wxStatusBar *statusbar, const wxString &message, const long newPosition = 0);
                virtual ~StatusRAII();
	private:
		wxStatusBar *status = nullptr;
		const long position = 0;
};

#endif
