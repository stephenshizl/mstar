////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2010 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// (''MStar Confidential Information'') by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// This file is automatically generated by SkinTool [Version:0.2.3][Build:Dec 28 2015 14:35:41]
/////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////
// MAINFRAME styles..


/////////////////////////////////////////////////////
// TENKEY_TRANSPARENT_BG styles..


/////////////////////////////////////////////////////
// TENKEY_BG styles..

static DRAWSTYLE _MP_TBLSEG _Zui_Tenkey_Bg_Normal_DrawStyle[] =
{
    { CP_BITMAP, CP_ZUI_BITMAP_INDEX_204 },
    { CP_NOON, 0 },
};

/////////////////////////////////////////////////////
// TENKEY_BG_C styles..

static DRAWSTYLE _MP_TBLSEG _Zui_Tenkey_Bg_C_Normal_DrawStyle[] =
{
    { CP_BITMAP, CP_ZUI_BITMAP_INDEX_163 },
    { CP_NOON, 0 },
};

/////////////////////////////////////////////////////
// TENKEY_CHANNEL_TITLE styles..

static DRAWSTYLE _MP_TBLSEG _Zui_Tenkey_Channel_Title_Normal_DrawStyle[] =
{
    { CP_TEXT_OUT, CP_ZUI_TEXT_OUT_INDEX_684 },
    { CP_NOON, 0 },
};
#define _Zui_Tenkey_Channel_Title_Focus_DrawStyle _Zui_Tenkey_Channel_Title_Normal_DrawStyle
#define _Zui_Tenkey_Channel_Title_Disabled_DrawStyle _Zui_Tenkey_Channel_Title_Normal_DrawStyle

/////////////////////////////////////////////////////
// TENKEY_CHNUMBER styles..

static DRAWSTYLE _MP_TBLSEG _Zui_Tenkey_Chnumber_Normal_DrawStyle[] =
{
    { CP_TEXT_OUT, CP_ZUI_TEXT_OUT_INDEX_277 },
    { CP_NOON, 0 },
};
#define _Zui_Tenkey_Chnumber_Focus_DrawStyle _Zui_Tenkey_Chnumber_Normal_DrawStyle

//////////////////////////////////////////////////////
// Window Draw Style List  (normal, focused, disable)

WINDOWDRAWSTYLEDATA _MP_TBLSEG _GUI_WindowsDrawStyleList_Zui_Tenkey_Number[] =
{
    // HWND_MAINFRAME
    { NULL, NULL, NULL     },

    // HWND_TENKEY_TRANSPARENT_BG
    { NULL, NULL, NULL     },

    // HWND_TENKEY_BG
    { _Zui_Tenkey_Bg_Normal_DrawStyle, NULL, NULL     },

    // HWND_TENKEY_BG_C
    { _Zui_Tenkey_Bg_C_Normal_DrawStyle, NULL, NULL     },

    // HWND_TENKEY_CHANNEL_TITLE
    { _Zui_Tenkey_Channel_Title_Normal_DrawStyle, _Zui_Tenkey_Channel_Title_Focus_DrawStyle, _Zui_Tenkey_Channel_Title_Disabled_DrawStyle     },

    // HWND_TENKEY_CHNUMBER
    { _Zui_Tenkey_Chnumber_Normal_DrawStyle, _Zui_Tenkey_Chnumber_Focus_DrawStyle, NULL     },

};
