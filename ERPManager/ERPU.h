//---------------------------------------------------------------------------

#ifndef ERPUH
#define ERPUH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "cxClasses.hpp"
#include "cxLookAndFeels.hpp"
#include "dxSkinBlack.hpp"
#include "dxSkinBlue.hpp"
#include "dxSkinBlueprint.hpp"
#include "dxSkinCaramel.hpp"
#include "dxSkinCoffee.hpp"
#include "dxSkinDarkRoom.hpp"
#include "dxSkinDarkSide.hpp"
#include "dxSkinDevExpressDarkStyle.hpp"
#include "dxSkinDevExpressStyle.hpp"
#include "dxSkinFoggy.hpp"
#include "dxSkinGlassOceans.hpp"
#include "dxSkinHighContrast.hpp"
#include "dxSkiniMaginary.hpp"
#include "dxSkinLilian.hpp"
#include "dxSkinLiquidSky.hpp"
#include "dxSkinLondonLiquidSky.hpp"
#include "dxSkinMcSkin.hpp"
#include "dxSkinMetropolis.hpp"
#include "dxSkinMetropolisDark.hpp"
#include "dxSkinMoneyTwins.hpp"
#include "dxSkinOffice2007Black.hpp"
#include "dxSkinOffice2007Blue.hpp"
#include "dxSkinOffice2007Green.hpp"
#include "dxSkinOffice2007Pink.hpp"
#include "dxSkinOffice2007Silver.hpp"
#include "dxSkinOffice2010Black.hpp"
#include "dxSkinOffice2010Blue.hpp"
#include "dxSkinOffice2010Silver.hpp"
#include "dxSkinOffice2013DarkGray.hpp"
#include "dxSkinOffice2013LightGray.hpp"
#include "dxSkinOffice2013White.hpp"
#include "dxSkinPumpkin.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinsDefaultPainters.hpp"
#include "dxSkinSeven.hpp"
#include "dxSkinSevenClassic.hpp"
#include "dxSkinsForm.hpp"
#include "dxSkinSharp.hpp"
#include "dxSkinSharpPlus.hpp"
#include "dxSkinSilver.hpp"
#include "dxSkinSpringTime.hpp"
#include "dxSkinStardust.hpp"
#include "dxSkinSummer2008.hpp"
#include "dxSkinTheAsphaltWorld.hpp"
#include "dxSkinValentine.hpp"
#include "dxSkinVisualStudio2013Blue.hpp"
#include "dxSkinVisualStudio2013Dark.hpp"
#include "dxSkinVisualStudio2013Light.hpp"
#include "dxSkinVS2010.hpp"
#include "dxSkinWhiteprint.hpp"
#include "dxSkinXmas2008Blue.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include "cxButtons.hpp"
#include "cxGraphics.hpp"
#include "cxLookAndFeelPainters.hpp"
#include <Vcl.ActnCtrls.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.Ribbon.hpp>
#include <Vcl.RibbonLunaStyleActnCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.ActnMenus.hpp>
#include <Vcl.RibbonActnMenus.hpp>
#include <Vcl.Buttons.hpp>
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxEdit.hpp"
#include "cxMaskEdit.hpp"
#include "cxTextEdit.hpp"
#include <Vcl.Mask.hpp>
#include <Vcl.ComCtrls.hpp>
#include "cxLabel.hpp"
#include <Vcl.Graphics.hpp>
#include "cxCustomData.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxFilter.hpp"
#include "cxGrid.hpp"
#include "cxGridCustomTableView.hpp"
#include "cxGridCustomView.hpp"
#include "cxGridDBTableView.hpp"
#include "cxGridLevel.hpp"
#include "cxGridTableView.hpp"
#include "cxNavigator.hpp"
#include "cxStyles.hpp"
#include "dxSkinscxPCPainter.hpp"
#include <Data.DB.hpp>
//---------------------------------------------------------------------------
class TERPF : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel3;
	TPanel *Panel2;
	TPanel *Panel5;
	TPanel *Panel1;
	TdxSkinController *dxSkinController1;
	TcxButton *btStock;
	TcxButton *btReceive;
	TcxButton *btRelease;
	TcxButton *btUsage;
	TcxButton *btRepair;
	TcxButton *btTemple;
	TcxButton *btItem;
	TcxButton *btLogout;
	TcxButton *btUser;
	TLabel *Label1;
	TcxButton *btSearch;
	TDateTimePicker *DateTimePicker2;
	TDateTimePicker *DateTimePicker1ch;
	TLabel *lbTitle;
	TcxButton *cxButton11;
	TcxButton *cxButton12;
	TMaskEdit *edSearch;
	TImageList *ImageList1;
	TPanel *Panel4;
	TcxGridDBTableView *grdTableDBTableView1;
	TcxGridLevel *grdTableLevel1;
	TcxGrid *grdTable;
	TcxGridDBColumn *grdTableDBTableView1Column1;
	TcxGridDBColumn *grdTableDBTableView1Column2;
	TcxGridDBColumn *grdTableDBTableView1Column3;
	TcxGridDBColumn *grdTableDBTableView1Column4;
	TcxGridDBColumn *grdTableDBTableView1Column5;
	TcxGridDBColumn *grdTableDBTableView1Column6;
	TcxGridDBColumn *grdTableDBTableView1Column7;
	TcxGridDBColumn *grdTableDBTableView1Column8;
	TcxGridDBColumn *grdTableDBTableView1Column9;
	TcxGridDBColumn *grdTableDBTableView1Column10;
	TcxGridDBColumn *grdTableDBTableView1Column11;
private:	// User declarations
public:		// User declarations
	__fastcall TERPF(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TERPF *ERPF;
//---------------------------------------------------------------------------
#endif
