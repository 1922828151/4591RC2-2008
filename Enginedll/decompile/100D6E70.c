/*
 * func-name: ?InitFont@GUISystem@@IAEXXZ
 * func-address: 0x100d6e70
 * callers: 0x100d77a0
 * callees: 0x10029ca0, 0x1006fbf0, 0x10097220, 0x100d9c80, 0x10149420, 0x1017c0d0, 0x1017c260, 0x1017c4e0, 0x1017cd10, 0x1017e0a0
 */

void __thiscall GUISystem::InitFont(GUISystem *this)
{
  unsigned int v2; // edi
  int *v3; // esi
  unsigned int v4; // ebx
  int v5; // eax
  const CHAR *v6; // eax
  const wchar_t *v7; // eax
  int v8; // eax
  int v9; // eax
  const CHAR *v10; // eax
  const wchar_t *v11; // eax
  int v12; // eax
  int v13; // eax
  const CHAR *v14; // eax
  const wchar_t *v15; // eax
  int v16; // eax
  int v17; // eax
  const CHAR *v18; // eax
  const wchar_t *v19; // eax
  int v20; // eax
  int v21; // eax
  const CHAR *v22; // eax
  const wchar_t *v23; // eax
  int v24; // [esp-38h] [ebp-11Ch] BYREF
  int v25; // [esp-34h] [ebp-118h]
  int v26; // [esp-30h] [ebp-114h]
  int v27; // [esp-2Ch] [ebp-110h]
  int v28; // [esp-28h] [ebp-10Ch]
  int v29; // [esp-24h] [ebp-108h]
  int v30; // [esp-20h] [ebp-104h]
  char v31; // [esp-1Ch] [ebp-100h] BYREF
  int v32; // [esp-18h] [ebp-FCh]
  int v33; // [esp-14h] [ebp-F8h]
  int v34; // [esp-10h] [ebp-F4h]
  int v35; // [esp-Ch] [ebp-F0h]
  int v36; // [esp-8h] [ebp-ECh]
  int v37; // [esp-4h] [ebp-E8h]
  int v38; // [esp+0h] [ebp-E4h]
  int v39; // [esp+4h] [ebp-E0h]
  char *v40; // [esp+10h] [ebp-D4h]
  char *v41; // [esp+14h] [ebp-D0h] BYREF
  _BYTE v42[28]; // [esp+1Ch] [ebp-C8h] BYREF
  int v43; // [esp+38h] [ebp-ACh]
  char v44; // [esp+3Ch] [ebp-A8h]
  _BYTE v45[28]; // [esp+40h] [ebp-A4h] BYREF
  int v46[24]; // [esp+5Ch] [ebp-88h] BYREF
  _BYTE v47[28]; // [esp+BCh] [ebp-28h] BYREF
  int v48; // [esp+E0h] [ebp-4h]

  sub_1017CD10(v38, v39);
  v48 = 0;
  std::string::string(v47, "fonts.ini");
  LOBYTE(v48) = 1;
  FindMedia((int)v47, (int)"system", 0, 0);
  v40 = &v31;
  std::string::string(&v31, v47);
  if ( (unsigned __int8)sub_1017E0A0(v31, v32, v33, v34, v35, v36, v37) )
  {
    v2 = *((_DWORD *)this + 16);
    v3 = (int *)((char *)this + 56);
    if ( v3[1] > v2 )
      invalid_parameter_noinfo();
    v4 = v3[1];
    if ( v4 > v3[2] )
      invalid_parameter_noinfo();
    sub_1006FBF0(v3, &v41, (int)v3, v4, (int)v3, v2);
    std::wstring::wstring(v42);
    v40 = &v31;
    LOBYTE(v48) = 2;
    std::string::string(&v31, &unk_101C607E);
    v41 = (char *)&v24;
    LOBYTE(v48) = 3;
    std::string::string(&v24, "TextFontName");
    LOBYTE(v48) = 2;
    v5 = sub_1017C4E0(v45, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    LOBYTE(v48) = 4;
    v6 = (const CHAR *)std::string::c_str(v5);
    v7 = atow(v6);
    std::wstring::operator=(v42, v7);
    LOBYTE(v48) = 2;
    std::string::~string(v45);
    v41 = &v31;
    std::string::string(&v31, &unk_101C607F);
    v40 = (char *)&v24;
    LOBYTE(v48) = 5;
    std::string::string(&v24, "TextFontSize");
    LOBYTE(v48) = 2;
    v8 = sub_1017C260(v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    v41 = &v31;
    v43 = v8;
    std::string::string(&v31, &unk_101C608F);
    v40 = (char *)&v24;
    LOBYTE(v48) = 6;
    std::string::string(&v24, "TextFontBold");
    LOBYTE(v48) = 2;
    v44 = sub_1017C0D0(v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    sub_100D9C80((int)v3, v42);
    v41 = &v31;
    std::string::string(&v31, &unk_101C609A);
    v40 = (char *)&v24;
    LOBYTE(v48) = 7;
    std::string::string(&v24, "TitleSmallFontName");
    LOBYTE(v48) = 2;
    v9 = sub_1017C4E0(v45, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    LOBYTE(v48) = 8;
    v10 = (const CHAR *)std::string::c_str(v9);
    v11 = atow(v10);
    std::wstring::operator=(v42, v11);
    LOBYTE(v48) = 2;
    std::string::~string(v45);
    v41 = &v31;
    std::string::string(&v31, &unk_101C609B);
    v40 = (char *)&v24;
    LOBYTE(v48) = 9;
    std::string::string(&v24, "TitleSmallFontSize");
    LOBYTE(v48) = 2;
    v12 = sub_1017C260(v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    v41 = &v31;
    v43 = v12;
    std::string::string(&v31, &unk_101C60A3);
    v40 = (char *)&v24;
    LOBYTE(v48) = 10;
    std::string::string(&v24, "TitleSmallFontBold");
    LOBYTE(v48) = 2;
    v44 = sub_1017C0D0(v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    sub_100D9C80((int)v3, v42);
    v41 = &v31;
    std::string::string(&v31, &unk_101C60B1);
    v40 = (char *)&v24;
    LOBYTE(v48) = 11;
    std::string::string(&v24, "TitleLargeFontName");
    LOBYTE(v48) = 2;
    v13 = sub_1017C4E0(v45, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    LOBYTE(v48) = 12;
    v14 = (const CHAR *)std::string::c_str(v13);
    v15 = atow(v14);
    std::wstring::operator=(v42, v15);
    LOBYTE(v48) = 2;
    std::string::~string(v45);
    v41 = &v31;
    std::string::string(&v31, &unk_101C60B2);
    v40 = (char *)&v24;
    LOBYTE(v48) = 13;
    std::string::string(&v24, "TitleLargeFontSize");
    LOBYTE(v48) = 2;
    v16 = sub_1017C260(v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    v41 = &v31;
    v43 = v16;
    std::string::string(&v31, &unk_101C60B3);
    v40 = (char *)&v24;
    LOBYTE(v48) = 14;
    std::string::string(&v24, "TitleLargeFontBold");
    LOBYTE(v48) = 2;
    v44 = sub_1017C0D0(v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    sub_100D9C80((int)v3, v42);
    v41 = &v31;
    std::string::string(&v31, &unk_101C60C1);
    v40 = (char *)&v24;
    LOBYTE(v48) = 15;
    std::string::string(&v24, "HUDFontName");
    LOBYTE(v48) = 2;
    v17 = sub_1017C4E0(v45, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    LOBYTE(v48) = 16;
    v18 = (const CHAR *)std::string::c_str(v17);
    v19 = atow(v18);
    std::wstring::operator=(v42, v19);
    LOBYTE(v48) = 2;
    std::string::~string(v45);
    v41 = &v31;
    std::string::string(&v31, &unk_101C60C2);
    v40 = (char *)&v24;
    LOBYTE(v48) = 17;
    std::string::string(&v24, "HUDFontSize");
    LOBYTE(v48) = 2;
    v20 = sub_1017C260(v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    v41 = &v31;
    v43 = v20;
    std::string::string(&v31, &unk_101C60C3);
    v40 = (char *)&v24;
    LOBYTE(v48) = 18;
    std::string::string(&v24, "HUDFontBold");
    LOBYTE(v48) = 2;
    v44 = sub_1017C0D0(v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    sub_100D9C80((int)v3, v42);
    v41 = &v31;
    std::string::string(&v31, &unk_101C60D1);
    v40 = (char *)&v24;
    LOBYTE(v48) = 19;
    std::string::string(&v24, "DigitalFontName");
    LOBYTE(v48) = 2;
    v21 = sub_1017C4E0(v45, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    LOBYTE(v48) = 20;
    v22 = (const CHAR *)std::string::c_str(v21);
    v23 = atow(v22);
    std::wstring::operator=(v42, v23);
    LOBYTE(v48) = 2;
    std::string::~string(v45);
    v41 = &v31;
    std::string::string(&v31, &unk_101C60D2);
    v40 = (char *)&v24;
    LOBYTE(v48) = 21;
    std::string::string(&v24, "DigitalFontSize");
    LOBYTE(v48) = 2;
    v43 = sub_1017C260(v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    v41 = &v31;
    std::string::string(&v31, &unk_101C60D3);
    v40 = (char *)&v24;
    LOBYTE(v48) = 22;
    std::string::string(&v24, "DigitalFontBold");
    LOBYTE(v48) = 2;
    v44 = sub_1017C0D0(v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
    sub_100D9C80((int)v3, v42);
    LOBYTE(v48) = 1;
    std::wstring::~wstring(v42);
  }
  LOBYTE(v48) = 0;
  std::string::~string(v47);
  v48 = -1;
  sub_10029CA0(v46);
}
