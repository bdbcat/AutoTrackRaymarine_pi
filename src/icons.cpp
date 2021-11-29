/* Autogenerated by png2wx.pl on Sat Feb  3 13:26:08 2018 */
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#	include <wx/wx.h>
#endif
#include <wx/mstream.h>
#include "icons.h"

#ifdef PLUGIN_USE_SVG
#include "ocpn_plugin.h"
   wxString _svg_tracking;
   wxString _svg_tracking_rollover;
   wxString _svg_tracking_toggled;
#endif

wxBitmap *_img_AutoTrackRaymarine;

void initialize_images(void)
{
	{
		wxMemoryInputStream sm("\211PNG\r\n\032\n\000\000\000\rIHDR\000\000\000 \000\000\000 \b\006\000\000\000szz\364\000\000\000\006bKGD\000\377\000\377\000\377\240\275\247\223\000\000\000\011pHYs\000\000\013\023\000\000\013\023\001\000\232\234\030\000\000\000\atIME\a\342\002\003\022\031 @\341\022i\000\000\000\236IDATX\303\355\226Q\013\200 \014\204o\322\213\377\377\277\326\343z\bE\202\302m\016\025\266'\011\307\276\273\263\214\230\2311\261\016M\323\005\252\353\014\033?I\034h\a\277K\013\322\005\3607\330\n\2220\271\222V}&\273[\252C\330\016.\353\213\235\034\220\252\321\364%\255\372\236\347\303\001\276\254v\213@\373nK\372\304\207\260\250\315dS\036\037\242\275\356\202\272\231\036\200\223\355\203M\000\0000\3527b\375\313h\031\000\017\373#\202}\000\274\362\217\b\366\000\360\314?\"X\037\300;\177\000\270\001\020iH\036|\245^\240\000\000\000\000IEND\256B`\202", 273);
		_img_AutoTrackRaymarine = new wxBitmap(wxImage(sm));
	}
	
#ifdef PLUGIN_USE_SVG
    wxFileName fn;
    fn.SetPath(GetPluginDataDir("AutoTrackRaymarine_pi"));
    fn.AppendDir(_T("data"));
    fn.SetFullName(_T("tracking.svg"));
    _svg_tracking = fn.GetFullPath();
	
    fn.SetFullName(_T("tracking_rollover.svg"));
    _svg_tracking_rollover = fn.GetFullPath();

    fn.SetFullName(_T("tracking_toggled.svg"));
    _svg_tracking_toggled = fn.GetFullPath();
#endif
	
	return;
}
