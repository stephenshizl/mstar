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
// This file is automatically generated by SkinTool [Version:0.2.3][Build:Dec 18 2014 17:25:00]
/////////////////////////////////////////////////////////////////////////////


/// @Keymap_Table_Begin

static KEYEVENT _ZUI_TBLSEG _AudioLanguage_Items_Keymap[] =
{
{VK_SELECT, EN_EXE_CLOSE_CURRENT_OSD},
{VK_LEFT, EN_EXE_AUDIO_LANG_LEFT},
{VK_RIGHT, EN_EXE_AUDIO_LANG_RIGHT},
{VK_UP, EN_EXE_AUDIO_LANG_UP},
{VK_DOWN, EN_EXE_AUDIO_LANG_DOWN},
{VK_NULL, 0},
};

/// @Keymap_Table_End

/////////////////////////////////////////////////////

// Navigation Table

/////////////////////////////////////////////////////

static HWND _MP_TBLSEG _AUDLANG_LIST_ITEM0_Navigation[] = {HWND_AUDLANG_LIST_ITEM9, HWND_AUDLANG_LIST_ITEM1, HWND_AUDLANG_LIST_ITEM0, HWND_AUDLANG_LIST_ITEM0};

static HWND _MP_TBLSEG _AUDLANG_LIST_ITEM1_Navigation[] = {HWND_AUDLANG_LIST_ITEM0, HWND_AUDLANG_LIST_ITEM2, HWND_AUDLANG_LIST_ITEM1, HWND_AUDLANG_LIST_ITEM1};

static HWND _MP_TBLSEG _AUDLANG_LIST_ITEM2_Navigation[] = {HWND_AUDLANG_LIST_ITEM1, HWND_AUDLANG_LIST_ITEM3, HWND_AUDLANG_LIST_ITEM2, HWND_AUDLANG_LIST_ITEM2};

static HWND _MP_TBLSEG _AUDLANG_LIST_ITEM3_Navigation[] = {HWND_AUDLANG_LIST_ITEM2, HWND_AUDLANG_LIST_ITEM4, HWND_AUDLANG_LIST_ITEM3, HWND_AUDLANG_LIST_ITEM3};

static HWND _MP_TBLSEG _AUDLANG_LIST_ITEM4_Navigation[] = {HWND_AUDLANG_LIST_ITEM3, HWND_AUDLANG_LIST_ITEM5, HWND_AUDLANG_LIST_ITEM4, HWND_AUDLANG_LIST_ITEM4};

static HWND _MP_TBLSEG _AUDLANG_LIST_ITEM5_Navigation[] = {HWND_AUDLANG_LIST_ITEM4, HWND_AUDLANG_LIST_ITEM6, HWND_AUDLANG_LIST_ITEM5, HWND_AUDLANG_LIST_ITEM5};

static HWND _MP_TBLSEG _AUDLANG_LIST_ITEM6_Navigation[] = {HWND_AUDLANG_LIST_ITEM5, HWND_AUDLANG_LIST_ITEM7, HWND_AUDLANG_LIST_ITEM6, HWND_AUDLANG_LIST_ITEM6};

static HWND _MP_TBLSEG _AUDLANG_LIST_ITEM7_Navigation[] = {HWND_AUDLANG_LIST_ITEM6, HWND_AUDLANG_LIST_ITEM8, HWND_AUDLANG_LIST_ITEM7, HWND_AUDLANG_LIST_ITEM7};

static HWND _MP_TBLSEG _AUDLANG_LIST_ITEM8_Navigation[] = {HWND_AUDLANG_LIST_ITEM7, HWND_AUDLANG_LIST_ITEM9, HWND_AUDLANG_LIST_ITEM8, HWND_AUDLANG_LIST_ITEM8};

static HWND _MP_TBLSEG _AUDLANG_LIST_ITEM9_Navigation[] = {HWND_AUDLANG_LIST_ITEM8, HWND_AUDLANG_LIST_ITEM0, HWND_AUDLANG_LIST_ITEM9, HWND_AUDLANG_LIST_ITEM9};

//////////////////////////////////////////////////////
// Window List

WINDOWDATA _MP_TBLSEG _GUI_WindowList_Zui_Audio_Language[] =
{
    // HWND_MAINFRAME
    {
        EN_ZUI_MAINFRAMEWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_BG_PANE
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_BG_C
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_BG_L
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_BG_R
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_BG_TITLE_TEXT
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_BG_OK_BTN
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_LIST_PANE
    {
        EN_ZUI_AUTOCLOSE_WINPROC, (void*)AUDIO_LANGUAGE_TIME_OUT_MS, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_LIST_ITEM0
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        _AUDLANG_LIST_ITEM0_Navigation,
        _AudioLanguage_Items_Keymap,
    },

    // HWND_AUDLANG_ITEM0_FOCUS_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM0_ARROW_ICON
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM0_LANG_TEXT
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM0_AUDIO_TYPE_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM0_AUDIO_TYPE2_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM0_L_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM0_R_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_LIST_ITEM1
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        _AUDLANG_LIST_ITEM1_Navigation,
        _AudioLanguage_Items_Keymap,
    },

    // HWND_AUDLANG_ITEM1_FOCUS_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM1_ARROW_ICON
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM1_LANG_TEXT
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM1_AUDIO_TYPE_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM1_AUDIO_TYPE2_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM1_L_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM1_R_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_LIST_ITEM2
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        _AUDLANG_LIST_ITEM2_Navigation,
        _AudioLanguage_Items_Keymap,
    },

    // HWND_AUDLANG_ITEM2_FOCUS_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM2_ARROW_ICON
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM2_LANG_TEXT
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM2_AUDIO_TYPE_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM2_AUDIO_TYPE2_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM2_L_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM2_R_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_LIST_ITEM3
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        _AUDLANG_LIST_ITEM3_Navigation,
        _AudioLanguage_Items_Keymap,
    },

    // HWND_AUDLANG_ITEM3_FOCUS_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM3_ARROW_ICON
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM3_LANG_TEXT
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM3_AUDIO_TYPE_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM3_AUDIO_TYPE2_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM3_L_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM3_R_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_LIST_ITEM4
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        _AUDLANG_LIST_ITEM4_Navigation,
        _AudioLanguage_Items_Keymap,
    },

    // HWND_AUDLANG_ITEM4_FOCUS_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM4_ARROW_ICON
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM4_LANG_TEXT
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM4_AUDIO_TYPE_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM4_AUDIO_TYPE2_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM4_L_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM4_R_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_LIST_ITEM5
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        _AUDLANG_LIST_ITEM5_Navigation,
        _AudioLanguage_Items_Keymap,
    },

    // HWND_AUDLANG_ITEM5_FOCUS_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM5_ARROW_ICON
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM5_LANG_TEXT
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM5_AUDIO_TYPE_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM5_AUDIO_TYPE2_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM5_L_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM5_R_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_LIST_ITEM6
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        _AUDLANG_LIST_ITEM6_Navigation,
        _AudioLanguage_Items_Keymap,
    },

    // HWND_AUDLANG_ITEM6_FOCUS_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM6_ARROW_ICON
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM6_LANG_TEXT
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM6_AUDIO_TYPE_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM6_AUDIO_TYPE2_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM6_L_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM6_R_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_LIST_ITEM7
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        _AUDLANG_LIST_ITEM7_Navigation,
        _AudioLanguage_Items_Keymap,
    },

    // HWND_AUDLANG_ITEM7_FOCUS_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM7_ARROW_ICON
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM7_LANG_TEXT
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM7_AUDIO_TYPE_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM7_AUDIO_TYPE2_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM7_L_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM7_R_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_LIST_ITEM8
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        _AUDLANG_LIST_ITEM8_Navigation,
        _AudioLanguage_Items_Keymap,
    },

    // HWND_AUDLANG_ITEM8_FOCUS_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM8_ARROW_ICON
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM8_LANG_TEXT
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM8_AUDIO_TYPE_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM8_AUDIO_TYPE2_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM8_L_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM8_R_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_LIST_ITEM9
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        _AUDLANG_LIST_ITEM9_Navigation,
        _AudioLanguage_Items_Keymap,
    },

    // HWND_AUDLANG_ITEM9_FOCUS_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM9_ARROW_ICON
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM9_LANG_TEXT
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM9_AUDIO_TYPE_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM9_AUDIO_TYPE2_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM9_L_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_AUDLANG_ITEM9_R_SOUND_ICON
    {
        EN_ZUI_DYNAMICBITMAP_WINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

};