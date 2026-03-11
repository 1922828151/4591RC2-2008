/*
 * func-name: ?RefreshList@CDropBagUI@@IAEX_N@Z_0
 * func-address: 0x10269de0
 * callers: 0x100172dd
 * callees: 0x100042a0, 0x1000638e, 0x1000a006, 0x1000ab82, 0x1000aff6, 0x1000d77e, 0x1000f056, 0x10010389, 0x10011bc1, 0x1001241d, 0x10012c29, 0x10017f2b, 0x100192e0, 0x102c8d6c, 0x102c9d50, 0x102c9d62, 0x102c9ea8
 */

void __thiscall CDropBagUI::RefreshList(CDropBagUI *this, bool a2)
{
  int v3; // eax
  _DWORD *v4; // ebp
  char *v5; // esi
  GameClient::FlyweightManager *v6; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  int v8; // eax
  GameClient::ProductManager *v9; // eax
  struct GameClient::FProductInfo *ProductInfo; // esi
  void *v11; // eax
  void *v12; // ebp
  const char *v13; // eax
  const wchar_t *v14; // eax
  const char *v15; // eax
  const wchar_t *v16; // eax
  int v17; // eax
  int v18; // eax
  const char *v19; // eax
  const wchar_t *v20; // eax
  _DWORD *v21; // edi
  bool v22; // zf
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  const char *v26; // eax
  const wchar_t *v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  unsigned int *v32; // eax
  GameClient::FlyweightManager *v33; // eax
  struct GameClient::Flyweight *v34; // eax
  struct GameClient::Flyweight *v35; // edi
  const char *v36; // eax
  const wchar_t *v37; // eax
  const char *v38; // eax
  const wchar_t *v39; // eax
  char *v40; // esi
  char *v41; // ebx
  int v42; // [esp-14h] [ebp-154h]
  int v43; // [esp-8h] [ebp-148h]
  int v44; // [esp-8h] [ebp-148h]
  unsigned int v45; // [esp-4h] [ebp-144h]
  unsigned int v46; // [esp-4h] [ebp-144h]
  unsigned int v47; // [esp-4h] [ebp-144h]
  char v48[4]; // [esp+14h] [ebp-12Ch] BYREF
  void *v49; // [esp+18h] [ebp-128h]
  char *v50; // [esp+1Ch] [ebp-124h]
  int v51; // [esp+20h] [ebp-120h]
  char *v52; // [esp+24h] [ebp-11Ch]
  _DWORD *v53; // [esp+28h] [ebp-118h]
  int v54; // [esp+2Ch] [ebp-114h]
  int v55; // [esp+30h] [ebp-110h]
  char v56[4]; // [esp+34h] [ebp-10Ch] BYREF
  void *v57; // [esp+38h] [ebp-108h]
  int v58; // [esp+3Ch] [ebp-104h]
  int v59; // [esp+40h] [ebp-100h]
  _BYTE v60[28]; // [esp+44h] [ebp-FCh] BYREF
  struct tagRECT v61; // [esp+60h] [ebp-E0h] BYREF
  struct tagRECT rc; // [esp+70h] [ebp-D0h] BYREF
  char v63[8]; // [esp+80h] [ebp-C0h] BYREF
  _BYTE v64[28]; // [esp+88h] [ebp-B8h] BYREF
  _BYTE v65[28]; // [esp+A4h] [ebp-9Ch] BYREF
  _BYTE v66[28]; // [esp+C0h] [ebp-80h] BYREF
  _BYTE v67[28]; // [esp+DCh] [ebp-64h] BYREF
  _BYTE v68[28]; // [esp+F8h] [ebp-48h] BYREF
  _BYTE v69[28]; // [esp+114h] [ebp-2Ch] BYREF
  int v70; // [esp+13Ch] [ebp-4h]

  sub_1000F056();
  std::wstring::wstring(v66, L"EQUIPTYPE_MAINEQUIP");
  v70 = 0;
  Precacher::GetText(v69, v66);
  LOBYTE(v70) = 2;
  std::wstring::~wstring(v66);
  std::wstring::wstring(v64, L"EQUIPTYPE_SECONDARYEQUIP");
  LOBYTE(v70) = 3;
  Precacher::GetText(v68, v64);
  LOBYTE(v70) = 5;
  std::wstring::~wstring(v64);
  SetRect(&rc, 0, 0, 106, 31);
  SetRect(&v61, 0, 0, 40, 31);
  v3 = *((_DWORD *)this + 996);
  *(_DWORD *)(v3 + 660) = 31;
  if ( a2 )
    *(_DWORD *)(v3 + 656) = 106;
  else
    *(_DWORD *)(v3 + 656) = 40;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v4 = (_DWORD *)**((_DWORD **)this + 1007);
  v5 = (char *)this + 4024;
  LOBYTE(v70) = 6;
  v53 = v4;
  v52 = (char *)this + 4024;
  while ( v4 != *((_DWORD **)v5 + 1) )
  {
    v45 = v4[2];
    v6 = GameClient::FlyweightManager::Instance();
    Flyweight = GameClient::FlyweightManager::GetFlyweight(v6, v45);
    if ( !Flyweight )
      goto LABEL_36;
    v8 = _RTDynamicCast(
           Flyweight,
           0,
           &GameClient::Flyweight `RTTI Type Descriptor',
           &GameClient::FSystemPart `RTTI Type Descriptor');
    v55 = v8;
    if ( !v8 )
      goto LABEL_36;
    v46 = *(_DWORD *)(v8 + 108);
    v9 = GameClient::ProductManager::Instance();
    ProductInfo = GameClient::ProductManager::GetProductInfo(v9, v46);
    if ( !ProductInfo )
      goto LABEL_36;
    v11 = v50;
    v12 = v49;
    v54 = (int)v50;
    if ( v49 > v50 )
    {
      _invalid_parameter_noinfo();
      v11 = v50;
      v12 = v49;
    }
    if ( v12 > v11 )
      _invalid_parameter_noinfo();
    sub_1000D77E((int)v63, (int)v48, (int)v12, (int)v48, v54);
    v13 = (const char *)std::string::c_str((char *)ProductInfo + 148);
    v14 = atow(v13);
    std::wstring::wstring(v60, v14);
    LOBYTE(v70) = 7;
    sub_1000A006((int)v60);
    LOBYTE(v70) = 6;
    std::wstring::~wstring(v60);
    std::wstring::wstring(v67);
    LOBYTE(v70) = 8;
    v15 = (const char *)std::string::c_str((char *)ProductInfo + 120);
    v16 = atow(v15);
    std::wstring::operator=(v67, v16);
    v17 = *(_DWORD *)(v55 + 196);
    if ( v17 == 3 )
    {
      if ( a2 )
      {
        v18 = std::wstring::c_str(v69);
        std::wstring::wstring(v60, v18);
        LOBYTE(v70) = 9;
        sub_100042A0((int)v60, 0);
        LOBYTE(v70) = 8;
        std::wstring::~wstring(v60);
        v19 = (const char *)std::string::c_str((char *)ProductInfo + 176);
        v20 = atow(v19);
        std::wstring::wstring(v60, v20);
        v21 = v53;
        v22 = v53 == *((_DWORD **)this + 1007);
        LOBYTE(v70) = 10;
        if ( v22 )
          _invalid_parameter_noinfo();
        v23 = v21[4];
        if ( v23 )
          v24 = (v21[5] - v23) >> 2;
        else
          v24 = 0;
        sub_100192E0(0, (int)v67, (int)v48, *((_DWORD *)ProductInfo + 27), v24, (int)v60, (int)&rc);
        LOBYTE(v70) = 8;
        std::wstring::~wstring(v60);
        goto LABEL_27;
      }
    }
    else if ( v17 == 4 && !a2 )
    {
      v25 = std::wstring::c_str(v68);
      std::wstring::wstring(v60, v25);
      LOBYTE(v70) = 11;
      sub_100042A0((int)v60, 1);
      LOBYTE(v70) = 8;
      std::wstring::~wstring(v60);
      v26 = (const char *)std::string::c_str((char *)ProductInfo + 176);
      v27 = atow(v26);
      std::wstring::wstring(v60, v27);
      LOBYTE(v70) = 12;
      v28 = sub_10011BC1();
      v29 = *(_DWORD *)(v28 + 8);
      v30 = v28 + 4;
      if ( v29 )
        v31 = (*(_DWORD *)(v30 + 8) - v29) >> 2;
      else
        v31 = 0;
      sub_100192E0(1, (int)v67, (int)v48, *((_DWORD *)ProductInfo + 27), v31, (int)v60, (int)&v61);
      LOBYTE(v70) = 8;
      std::wstring::~wstring(v60);
LABEL_27:
      v57 = 0;
      v58 = 0;
      v59 = 0;
      v43 = *(_DWORD *)(v55 + 108);
      LOBYTE(v70) = 13;
      GameClient::ProductManager::Instance();
      GameClient::ProductManager::GetFlyweightID(v43, (int)v56);
      v32 = (unsigned int *)v57;
      if ( !v57 || !((v58 - (int)v57) >> 2) )
      {
        _invalid_parameter_noinfo();
        v32 = (unsigned int *)v57;
      }
      v47 = *v32;
      v33 = GameClient::FlyweightManager::Instance();
      v34 = GameClient::FlyweightManager::GetFlyweight(v33, v47);
      v35 = v34;
      if ( v34 )
      {
        v36 = (const char *)std::string::c_str((char *)v34 + 112);
        v37 = atow(v36);
        std::wstring::operator=(v67, v37);
        v38 = (const char *)std::string::c_str((char *)v35 + 140);
        v39 = atow(v38);
        std::wstring::wstring(v65, v39);
        v44 = *((_DWORD *)v35 + 12);
        v42 = *((_DWORD *)ProductInfo + 27);
        LOBYTE(v70) = 14;
        sub_1000638E(v42, (int)v67, (int)v65, v44, 0);
        LOBYTE(v70) = 13;
        std::wstring::~wstring(v65);
      }
      if ( v57 )
        operator delete(v57);
      v57 = 0;
      v58 = 0;
      v59 = 0;
    }
    LOBYTE(v70) = 6;
    std::wstring::~wstring(v67);
    v4 = v53;
LABEL_36:
    v5 = (char *)this + 4024;
    if ( v4 == *((_DWORD **)this + 1007) )
      _invalid_parameter_noinfo();
    v53 = (_DWORD *)*v4;
    v4 = v53;
  }
  sub_10017F2B();
  v40 = (char *)v49;
  LOBYTE(v70) = 5;
  if ( v49 )
  {
    v41 = v50;
    if ( v49 != v50 )
    {
      do
      {
        std::wstring::~wstring(v40);
        v40 += 28;
      }
      while ( v40 != v41 );
      v40 = (char *)v49;
    }
    operator delete(v40);
  }
  v49 = 0;
  v50 = 0;
  v51 = 0;
  LOBYTE(v70) = 2;
  std::wstring::~wstring(v68);
  v70 = -1;
  std::wstring::~wstring(v69);
}
