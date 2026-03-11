/*
 * func-name: ?Initialize@GUISystem@@UAEXXZ
 * func-address: 0x100d77a0
 * callers: none
 * callees: 0x10075e80, 0x100d6e70, 0x100d9450, 0x100d9510, 0x101a2534
 */

void __thiscall GUISystem::Initialize(GUISystem *this)
{
  _DWORD *v2; // eax
  GUISystem *v3; // ecx
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  GUISystem *v6; // ecx
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  GUISystem *v9; // ecx
  _DWORD *v10; // esi
  _DWORD *v11; // eax
  GUISystem *v12; // ecx
  _DWORD *v13; // esi
  _DWORD *v14; // eax
  GUISystem *v15; // ecx
  _DWORD *v16; // esi
  _DWORD *v17; // eax
  GUISystem *v18; // ecx
  _DWORD *v19; // esi
  _DWORD *v20; // eax
  GUISystem *v21; // ecx
  _DWORD *v22; // eax
  GUISystem *v23; // ecx
  _DWORD *v24; // eax
  GUISystem *v25; // ecx
  _DWORD *v26; // eax
  GUISystem *v27; // ecx
  _DWORD *v28; // eax
  GUISystem *v29; // ecx
  _DWORD *v30; // eax
  GUISystem *v31; // ecx
  _DWORD *v32; // eax
  GUISystem *v33; // ecx
  _DWORD *v34; // eax
  GUISystem *v35; // ecx
  _DWORD *v36; // eax
  GUISystem *v37; // ecx
  _DWORD *v38; // eax
  GUISystem *v39; // ecx
  _DWORD *v40; // eax
  GUISystem *v41; // ecx
  _DWORD *v42; // eax
  GUISystem *v43; // ecx
  _DWORD *v44; // eax
  GUISystem *v45; // ecx
  _DWORD *v46; // eax
  GUISystem *v47; // ecx
  char v48; // [esp-20h] [ebp-48h] BYREF
  int v49; // [esp-1Ch] [ebp-44h]
  int v50; // [esp-18h] [ebp-40h]
  int v51; // [esp-14h] [ebp-3Ch]
  int v52; // [esp-10h] [ebp-38h]
  int v53; // [esp-Ch] [ebp-34h]
  int v54; // [esp-8h] [ebp-30h]
  _DWORD *v55; // [esp-4h] [ebp-2Ch]
  int v56; // [esp+8h] [ebp-20h] BYREF
  _DWORD *v57; // [esp+Ch] [ebp-1Ch]
  _BYTE v58[12]; // [esp+10h] [ebp-18h] BYREF
  int v59; // [esp+24h] [ebp-4h]

  GUISystem::InitFont(this);
  *((_DWORD *)this + 3) = 0;
  dword_10281804 = -1;
  dword_10281808 = -1;
  dword_1028180C = -1;
  dword_10281810 = -1;
  (**(void (__thiscall ***)(GUISystem *))this)(this);
  v2 = operator new(4u);
  if ( v2 )
  {
    *v2 = &Property_Serializer<bool>::`vftable';
    v4 = v2;
  }
  else
  {
    v4 = 0;
  }
  GUISystem::GetControlFactory(v3);
  v56 = 4;
  v57 = v4;
  sub_100D9450(v58, &v56);
  v5 = operator new(4u);
  if ( v5 )
  {
    *v5 = &Property_Serializer<int>::`vftable';
    v7 = v5;
  }
  else
  {
    v7 = 0;
  }
  GUISystem::GetControlFactory(v6);
  v56 = 1;
  v57 = v7;
  sub_100D9450(v58, &v56);
  v8 = operator new(4u);
  if ( v8 )
  {
    *v8 = &Property_Serializer<long>::`vftable';
    v10 = v8;
  }
  else
  {
    v10 = 0;
  }
  GUISystem::GetControlFactory(v9);
  v56 = 2;
  v57 = v10;
  sub_100D9450(v58, &v56);
  v11 = operator new(4u);
  if ( v11 )
  {
    *v11 = &Property_Serializer<std::wstring>::`vftable';
    v13 = v11;
  }
  else
  {
    v13 = 0;
  }
  GUISystem::GetControlFactory(v12);
  v56 = 5;
  v57 = v13;
  sub_100D9450(v58, &v56);
  v14 = operator new(4u);
  if ( v14 )
  {
    *v14 = &Property_Serializer<tagRECT>::`vftable';
    v16 = v14;
  }
  else
  {
    v16 = 0;
  }
  GUISystem::GetControlFactory(v15);
  v56 = 6;
  v57 = v16;
  sub_100D9450(v58, &v56);
  v17 = operator new(4u);
  if ( v17 )
  {
    *v17 = &Property_Serializer<unsigned long>::`vftable';
    v19 = v17;
  }
  else
  {
    v19 = 0;
  }
  GUISystem::GetControlFactory(v18);
  v56 = 7;
  v57 = v19;
  sub_100D9450(v58, &v56);
  v20 = operator new(4u);
  if ( v20 )
    *v20 = &Maker<CTYDialog>::`vftable';
  else
    v20 = 0;
  v55 = v20;
  v56 = (int)&v48;
  std::string::string(&v48, "Dialog");
  v59 = 0;
  GUISystem::GetControlFactory(v21);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
  v22 = operator new(4u);
  if ( v22 )
    *v22 = &Maker<CREStatic>::`vftable';
  else
    v22 = 0;
  v55 = v22;
  v56 = (int)&v48;
  std::string::string(&v48, "StaticText");
  v59 = 1;
  GUISystem::GetControlFactory(v23);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
  v24 = operator new(4u);
  if ( v24 )
    *v24 = &Maker<CREButton>::`vftable';
  else
    v24 = 0;
  v55 = v24;
  v56 = (int)&v48;
  std::string::string(&v48, "Button");
  v59 = 2;
  GUISystem::GetControlFactory(v25);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
  v26 = operator new(4u);
  if ( v26 )
    *v26 = &Maker<CSeperateLine>::`vftable';
  else
    v26 = 0;
  v55 = v26;
  v56 = (int)&v48;
  std::string::string(&v48, "SeperateLine");
  v59 = 3;
  GUISystem::GetControlFactory(v27);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
  v28 = operator new(4u);
  if ( v28 )
    *v28 = &Maker<CPictureLabel>::`vftable';
  else
    v28 = 0;
  v55 = v28;
  v56 = (int)&v48;
  std::string::string(&v48, "PictureLabel");
  v59 = 4;
  GUISystem::GetControlFactory(v29);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
  v30 = operator new(4u);
  if ( v30 )
    *v30 = &Maker<CProgressBar>::`vftable';
  else
    v30 = 0;
  v55 = v30;
  v56 = (int)&v48;
  std::string::string(&v48, "ProgressBar");
  v59 = 5;
  GUISystem::GetControlFactory(v31);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
  v32 = operator new(4u);
  if ( v32 )
    *v32 = &Maker<CRECheckBox>::`vftable';
  else
    v32 = 0;
  v55 = v32;
  v56 = (int)&v48;
  std::string::string(&v48, "CheckBox");
  v59 = 6;
  GUISystem::GetControlFactory(v33);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
  v34 = operator new(4u);
  if ( v34 )
    *v34 = &Maker<CREEditBox>::`vftable';
  else
    v34 = 0;
  v55 = v34;
  v56 = (int)&v48;
  std::string::string(&v48, "EditBox");
  v59 = 7;
  GUISystem::GetControlFactory(v35);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
  v36 = operator new(4u);
  if ( v36 )
    *v36 = &Maker<CREIMEEditBox>::`vftable';
  else
    v36 = 0;
  v55 = v36;
  v56 = (int)&v48;
  std::string::string(&v48, "IMEEditBox");
  v59 = 8;
  GUISystem::GetControlFactory(v37);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
  v38 = operator new(4u);
  if ( v38 )
    *v38 = &Maker<CPasswordEB>::`vftable';
  else
    v38 = 0;
  v55 = v38;
  v56 = (int)&v48;
  std::string::string(&v48, "PasswordEditBox");
  v59 = 9;
  GUISystem::GetControlFactory(v39);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
  v40 = operator new(4u);
  if ( v40 )
    *v40 = &Maker<CPaster>::`vftable';
  else
    v40 = 0;
  v55 = v40;
  v56 = (int)&v48;
  std::string::string(&v48, "Paster");
  v59 = 10;
  GUISystem::GetControlFactory(v41);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
  v42 = operator new(4u);
  if ( v42 )
    *v42 = &Maker<CRESlider>::`vftable';
  else
    v42 = 0;
  v55 = v42;
  v56 = (int)&v48;
  std::string::string(&v48, "Slider");
  v59 = 11;
  GUISystem::GetControlFactory(v43);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
  v44 = operator new(4u);
  if ( v44 )
    *v44 = &Maker<CREComboBox>::`vftable';
  else
    v44 = 0;
  v55 = v44;
  v56 = (int)&v48;
  std::string::string(&v48, "ComboBox");
  v59 = 12;
  GUISystem::GetControlFactory(v45);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
  v46 = operator new(4u);
  if ( v46 )
    *v46 = &Maker<CTYVStatic>::`vftable';
  else
    v46 = 0;
  v55 = v46;
  v56 = (int)&v48;
  std::string::string(&v48, "VerticalStaticText");
  v59 = 13;
  GUISystem::GetControlFactory(v47);
  v59 = -1;
  sub_100D9510(v48, v49, v50, v51, v52, v53, v54, v55);
}
