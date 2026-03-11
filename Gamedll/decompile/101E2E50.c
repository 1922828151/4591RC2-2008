/*
 * func-name: sub_101E2E50
 * func-address: 0x101e2e50
 * callers: 0x100184da
 * callees: 0x10009200, 0x1000a006, 0x1000ab4b, 0x10016414, 0x100195e7, 0x102c9d62, 0x102c9d98
 */

char __thiscall sub_101E2E50(_DWORD *this, int *a2)
{
  int v3; // ecx
  _DWORD *v4; // eax
  EventAttemper *v5; // eax
  _DWORD *v6; // eax
  EventAttemper *v7; // eax
  _DWORD *v8; // eax
  EventAttemper *v9; // eax
  _DWORD *v10; // eax
  EventAttemper *v11; // eax
  _DWORD *v12; // eax
  EventAttemper *v13; // eax
  _DWORD *v14; // eax
  EventAttemper *v15; // eax
  _DWORD *v16; // eax
  EventAttemper *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  Texture *v22; // eax
  Texture *v23; // eax
  Texture *v24; // eax
  Texture *v25; // eax
  _DWORD *v26; // esi
  unsigned int i; // ebp
  int v28; // ecx
  int v29; // eax
  Texture *v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v35; // [esp+A4h] [ebp-D0h] BYREF
  int v36; // [esp+A8h] [ebp-CCh]
  int v37; // [esp+ACh] [ebp-C8h]
  int v38; // [esp+B0h] [ebp-C4h]
  int v39; // [esp+B4h] [ebp-C0h]
  int v40; // [esp+B8h] [ebp-BCh]
  int v41; // [esp+BCh] [ebp-B8h]
  int v42; // [esp+C0h] [ebp-B4h]
  float v43; // [esp+C4h] [ebp-B0h]
  float v44; // [esp+C8h] [ebp-ACh]
  float v45; // [esp+CCh] [ebp-A8h]
  float v46; // [esp+D0h] [ebp-A4h]
  float v47; // [esp+D4h] [ebp-A0h]
  unsigned int v48; // [esp+D8h] [ebp-9Ch]
  int v49; // [esp+F0h] [ebp-84h] BYREF
  _BYTE v50[28]; // [esp+F4h] [ebp-80h] BYREF
  _BYTE v51[28]; // [esp+110h] [ebp-64h] BYREF
  _BYTE v52[28]; // [esp+12Ch] [ebp-48h] BYREF
  _BYTE v53[28]; // [esp+148h] [ebp-2Ch] BYREF
  int v54; // [esp+170h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this);
  v3 = *a2;
  v48 = 4;
  this[1] = v3;
  v4 = operator new(v48);
  if ( v4 )
    *v4 = &GS_Character_SetControl_Character_Observer::`vftable';
  v5 = (EventAttemper *)EventAttemper::Instance(19, 3100);
  v48 = 4;
  this[64] = EventAttemper::AddObserver(v5);
  v6 = operator new(v48);
  if ( v6 )
    *v6 = &GS_Character_New_CharacterObserver::`vftable';
  v7 = (EventAttemper *)EventAttemper::Instance(19, 3001);
  EventAttemper::AddObserver(v7);
  v8 = operator new(4u);
  if ( v8 )
    *v8 = &GS_Character_Delete_CharacterObserver::`vftable';
  v9 = (EventAttemper *)EventAttemper::Instance(19, 3002);
  EventAttemper::AddObserver(v9);
  v10 = operator new(4u);
  if ( v10 )
    *v10 = &GS_Character_Set_BaseInfo_Observer::`vftable';
  v11 = (EventAttemper *)EventAttemper::Instance(19, 3040);
  EventAttemper::AddObserver(v11);
  v12 = operator new(4u);
  if ( v12 )
    *v12 = &GS_Character_Set_ExtInfo_Observer::`vftable';
  v13 = (EventAttemper *)EventAttemper::Instance(19, 3041);
  EventAttemper::AddObserver(v13);
  v14 = operator new(4u);
  if ( v14 )
    *v14 = &CG_Character_Get_Exploit_Observer::`vftable';
  v15 = (EventAttemper *)EventAttemper::Instance(14, 14010);
  EventAttemper::AddObserver(v15);
  v16 = operator new(4u);
  if ( v16 )
    *v16 = &CG_Character_Error_MessageObserver::`vftable';
  v17 = (EventAttemper *)EventAttemper::Instance(19, 15000);
  EventAttemper::AddObserver(v17);
  v49 = 1;
  v18 = sub_10016414((int)&v49);
  std::string::operator=(v18, "NationLogo_F_s.dds");
  v49 = 2;
  v19 = sub_10016414((int)&v49);
  std::string::operator=(v19, "NationLogo_G_s.dds");
  v49 = 4;
  v20 = sub_10016414((int)&v49);
  std::string::operator=(v20, "NationLogo_M_s.dds");
  v49 = 8;
  v21 = sub_10016414((int)&v49);
  std::string::operator=(v21, "NationLogo_W_s.dds");
  std::string::string(v50, "MilitaryRank0.dds");
  v54 = 0;
  sub_1000AB4B(this + 52, v50);
  v54 = -1;
  std::string::~string(v50);
  std::string::string(v50, "MilitaryRank1.dds");
  v54 = 1;
  sub_1000AB4B(this + 52, v50);
  v54 = -1;
  std::string::~string(v50);
  std::string::string(v50, "MilitaryRank2.dds");
  v54 = 2;
  sub_1000AB4B(this + 52, v50);
  v54 = -1;
  std::string::~string(v50);
  std::string::string(v50, "MilitaryRank3.dds");
  v54 = 3;
  sub_1000AB4B(this + 52, v50);
  v54 = -1;
  std::string::~string(v50);
  std::string::string(v50, "MilitaryRank4.dds");
  v54 = 4;
  sub_1000AB4B(this + 52, v50);
  v54 = -1;
  std::string::~string(v50);
  std::string::string(v50, "MilitaryRank5.dds");
  v54 = 5;
  sub_1000AB4B(this + 52, v50);
  v54 = -1;
  std::string::~string(v50);
  std::string::string(v50, "MilitaryRank6.dds");
  v54 = 6;
  sub_1000AB4B(this + 52, v50);
  v54 = -1;
  std::string::~string(v50);
  std::string::string(v50, "MilitaryRank7.dds");
  v54 = 7;
  sub_1000AB4B(this + 52, v50);
  v54 = -1;
  std::string::~string(v50);
  std::string::string(v50, "MilitaryRank8.dds");
  v54 = 8;
  sub_1000AB4B(this + 52, v50);
  v54 = -1;
  std::string::~string(v50);
  std::string::string(v50, "MilitaryRank9.dds");
  v54 = 9;
  sub_1000AB4B(this + 52, v50);
  v54 = -1;
  std::string::~string(v50);
  std::wstring::wstring(v50, L"CHARACTER_EXPLOIT0");
  v54 = 10;
  sub_1000A006((int)v50);
  v54 = -1;
  std::wstring::~wstring(v50);
  std::wstring::wstring(v50, L"CHARACTER_EXPLOIT1");
  v54 = 11;
  sub_1000A006((int)v50);
  v54 = -1;
  std::wstring::~wstring(v50);
  std::wstring::wstring(v50, L"CHARACTER_EXPLOIT2");
  v54 = 12;
  sub_1000A006((int)v50);
  v54 = -1;
  std::wstring::~wstring(v50);
  std::wstring::wstring(v50, L"CHARACTER_EXPLOIT3");
  v54 = 13;
  sub_1000A006((int)v50);
  v54 = -1;
  std::wstring::~wstring(v50);
  std::wstring::wstring(v50, L"CHARACTER_EXPLOIT4");
  v54 = 14;
  sub_1000A006((int)v50);
  v54 = -1;
  std::wstring::~wstring(v50);
  std::wstring::wstring(v50, L"CHARACTER_EXPLOIT5");
  v54 = 15;
  sub_1000A006((int)v50);
  v54 = -1;
  std::wstring::~wstring(v50);
  std::wstring::wstring(v50, L"CHARACTER_EXPLOIT6");
  v54 = 16;
  sub_1000A006((int)v50);
  v54 = -1;
  std::wstring::~wstring(v50);
  std::wstring::wstring(v50, L"CHARACTER_EXPLOIT7");
  v54 = 17;
  sub_1000A006((int)v50);
  v54 = -1;
  std::wstring::~wstring(v50);
  std::wstring::wstring(v50, L"CHARACTER_EXPLOIT8");
  v54 = 18;
  sub_1000A006((int)v50);
  v54 = -1;
  std::wstring::~wstring(v50);
  std::wstring::wstring(v50, L"CHARACTER_EXPLOIT9");
  v54 = 19;
  sub_1000A006((int)v50);
  v54 = -1;
  std::wstring::~wstring(v50);
  v22 = (Texture *)operator new(0x9Cu);
  v49 = (int)v22;
  v54 = 20;
  if ( v22 )
    v23 = Texture::Texture(v22);
  else
    v23 = 0;
  v48 = 0;
  v47 = 0.0;
  v54 = -1;
  v46 = 1.0;
  this[66] = v23;
  v45 = 1.0;
  v44 = 0.0;
  v43 = 0.0;
  v42 = 0;
  v49 = (int)&v35;
  std::string::string(&v35, "Icon_Commander.dds");
  Texture::Load(
    this[66],
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    LODWORD(v43),
    LODWORD(v44),
    LODWORD(v45),
    LODWORD(v46),
    LODWORD(v47),
    v48);
  v24 = (Texture *)operator new(0x9Cu);
  v49 = (int)v24;
  v54 = 21;
  if ( v24 )
    v25 = Texture::Texture(v24);
  else
    v25 = 0;
  v48 = 0;
  v47 = 0.0;
  v54 = -1;
  v46 = 1.0;
  this[65] = v25;
  v45 = 1.0;
  v44 = 0.0;
  v43 = 0.0;
  v42 = 0;
  v49 = (int)&v35;
  std::string::string(&v35, "Icon_Captain.dds");
  Texture::Load(
    this[65],
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    LODWORD(v43),
    LODWORD(v44),
    LODWORD(v45),
    LODWORD(v46),
    LODWORD(v47),
    v48);
  v26 = this + 67;
  sub_10009200(this + 67, 10, 0);
  for ( i = 0; ; ++i )
  {
    v28 = v26[1];
    if ( !v28 || i >= (v26[2] - v28) >> 2 )
      break;
    sub_100195E7((int)v53, i);
    v54 = 22;
    v29 = std::operator+<char>(v51, "MilitaryRank", v53);
    LOBYTE(v54) = 23;
    std::operator+<char>(v52, v29, ".dds");
    LOBYTE(v54) = 25;
    std::string::~string(v51);
    v30 = (Texture *)operator new(0x9Cu);
    v49 = (int)v30;
    LOBYTE(v54) = 26;
    if ( v30 )
      v49 = (int)Texture::Texture(v30);
    else
      v49 = 0;
    v31 = v26[1];
    LOBYTE(v54) = 25;
    if ( !v31 || i >= (v26[2] - v31) >> 2 )
      _invalid_parameter_noinfo();
    v32 = v26[1];
    v48 = 0;
    v47 = 0.0;
    *(_DWORD *)(4 * i + v32) = v49;
    v46 = 1.0;
    v45 = 1.0;
    v44 = 0.0;
    v43 = 0.0;
    v42 = 0;
    v49 = (int)&v35;
    std::string::string(&v35, v52);
    v33 = v26[1];
    if ( !v33 || i >= (v26[2] - v33) >> 2 )
      _invalid_parameter_noinfo();
    Texture::Load(
      *(_DWORD *)(v26[1] + 4 * i),
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      LODWORD(v43),
      LODWORD(v44),
      LODWORD(v45),
      LODWORD(v46),
      LODWORD(v47),
      v48);
    LOBYTE(v54) = 22;
    std::string::~string(v52);
    v54 = -1;
    std::string::~string(v53);
  }
  return 1;
}
