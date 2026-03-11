/*
 * func-name: ?ShowBag@CDropBagUI@@IAEXXZ_0
 * func-address: 0x10269520
 * callers: 0x1000dc0b
 * callees: 0x10003148, 0x100042a0, 0x1000638e, 0x1000a006, 0x1000ab82, 0x1000aff6, 0x1000d77e, 0x1000f056, 0x10010389, 0x1001241d, 0x10012c29, 0x10017f2b, 0x100192e0, 0x102c8d6c, 0x102c9d50, 0x102c9d62, 0x102c9ea8
 */

void __thiscall CDropBagUI::ShowBag(CDropBagUI *this)
{
  int v2; // eax
  _DWORD *v3; // ebx
  char *v4; // esi
  GameClient::FlyweightManager *v5; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  int v7; // eax
  GameClient::ProductManager *v8; // eax
  struct GameClient::FProductInfo *ProductInfo; // esi
  void *v10; // eax
  void *v11; // ebx
  const char *v12; // eax
  const wchar_t *v13; // eax
  const char *v14; // eax
  const wchar_t *v15; // eax
  int v16; // eax
  int v17; // eax
  const char *v18; // eax
  const wchar_t *v19; // eax
  _DWORD *v20; // ebp
  bool v21; // zf
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  const char *v25; // eax
  const wchar_t *v26; // eax
  _DWORD *v27; // ebx
  int v28; // ecx
  int v29; // eax
  unsigned int *v30; // eax
  GameClient::FlyweightManager *v31; // eax
  struct GameClient::Flyweight *v32; // eax
  struct GameClient::Flyweight *v33; // ebp
  const char *v34; // eax
  const wchar_t *v35; // eax
  const char *v36; // eax
  const wchar_t *v37; // eax
  char *v38; // esi
  char *v39; // edi
  int v40; // [esp-14h] [ebp-154h]
  int v41; // [esp-8h] [ebp-148h]
  int v42; // [esp-8h] [ebp-148h]
  unsigned int v43; // [esp-4h] [ebp-144h]
  unsigned int v44; // [esp-4h] [ebp-144h]
  unsigned int v45; // [esp-4h] [ebp-144h]
  char v46[4]; // [esp+14h] [ebp-12Ch] BYREF
  void *v47; // [esp+18h] [ebp-128h]
  char *v48; // [esp+1Ch] [ebp-124h]
  int v49; // [esp+20h] [ebp-120h]
  _DWORD *v50; // [esp+28h] [ebp-118h]
  int v51; // [esp+2Ch] [ebp-114h]
  int v52; // [esp+30h] [ebp-110h]
  char v53[4]; // [esp+34h] [ebp-10Ch] BYREF
  void *v54; // [esp+38h] [ebp-108h]
  int v55; // [esp+3Ch] [ebp-104h]
  int v56; // [esp+40h] [ebp-100h]
  _BYTE v57[28]; // [esp+44h] [ebp-FCh] BYREF
  struct tagRECT v58; // [esp+60h] [ebp-E0h] BYREF
  struct tagRECT rc; // [esp+70h] [ebp-D0h] BYREF
  char v60[8]; // [esp+80h] [ebp-C0h] BYREF
  _BYTE v61[28]; // [esp+88h] [ebp-B8h] BYREF
  _BYTE v62[28]; // [esp+A4h] [ebp-9Ch] BYREF
  _BYTE v63[28]; // [esp+C0h] [ebp-80h] BYREF
  _BYTE v64[28]; // [esp+DCh] [ebp-64h] BYREF
  _BYTE v65[28]; // [esp+F8h] [ebp-48h] BYREF
  _BYTE v66[28]; // [esp+114h] [ebp-2Ch] BYREF
  int v67; // [esp+13Ch] [ebp-4h]

  sub_1000F056();
  std::wstring::wstring(v63, L"EQUIPTYPE_MAINEQUIP");
  v67 = 0;
  Precacher::GetText(v66, v63);
  LOBYTE(v67) = 2;
  std::wstring::~wstring(v63);
  std::wstring::wstring(v61, L"EQUIPTYPE_SECONDARYEQUIP");
  LOBYTE(v67) = 3;
  Precacher::GetText(v65, v61);
  LOBYTE(v67) = 5;
  std::wstring::~wstring(v61);
  SetRect(&rc, 0, 0, 106, 31);
  SetRect(&v58, 0, 0, 40, 31);
  v2 = *((_DWORD *)this + 996);
  *(_DWORD *)(v2 + 656) = 106;
  *(_DWORD *)(v2 + 660) = 31;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v3 = (_DWORD *)**((_DWORD **)this + 1007);
  v4 = (char *)this + 4024;
  LOBYTE(v67) = 6;
  v50 = v3;
  while ( v3 != *((_DWORD **)v4 + 1) )
  {
    v43 = v3[2];
    v5 = GameClient::FlyweightManager::Instance();
    Flyweight = GameClient::FlyweightManager::GetFlyweight(v5, v43);
    if ( Flyweight )
    {
      v7 = _RTDynamicCast(
             Flyweight,
             0,
             &GameClient::Flyweight `RTTI Type Descriptor',
             &GameClient::FSystemPart `RTTI Type Descriptor');
      v52 = v7;
      if ( v7 )
      {
        v44 = *(_DWORD *)(v7 + 108);
        v8 = GameClient::ProductManager::Instance();
        ProductInfo = GameClient::ProductManager::GetProductInfo(v8, v44);
        if ( ProductInfo )
        {
          v10 = v48;
          v11 = v47;
          v51 = (int)v48;
          if ( v47 > v48 )
          {
            _invalid_parameter_noinfo();
            v10 = v48;
            v11 = v47;
          }
          if ( v11 > v10 )
            _invalid_parameter_noinfo();
          sub_1000D77E((int)v60, (int)v46, (int)v11, (int)v46, v51);
          v12 = (const char *)std::string::c_str((char *)ProductInfo + 148);
          v13 = atow(v12);
          std::wstring::wstring(v57, v13);
          LOBYTE(v67) = 7;
          sub_1000A006((int)v57);
          LOBYTE(v67) = 6;
          std::wstring::~wstring(v57);
          std::wstring::wstring(v64);
          LOBYTE(v67) = 8;
          v14 = (const char *)std::string::c_str((char *)ProductInfo + 120);
          v15 = atow(v14);
          std::wstring::operator=(v64, v15);
          v16 = *(_DWORD *)(v52 + 196);
          if ( v16 == 3 )
          {
            v17 = std::wstring::c_str(v66);
            std::wstring::wstring(v57, v17);
            LOBYTE(v67) = 9;
            sub_100042A0((int)v57, 0);
            LOBYTE(v67) = 8;
            std::wstring::~wstring(v57);
            v18 = (const char *)std::string::c_str((char *)ProductInfo + 176);
            v19 = atow(v18);
            std::wstring::wstring(v57, v19);
            v20 = v50;
            v21 = v50 == *((_DWORD **)this + 1007);
            LOBYTE(v67) = 10;
            if ( v21 )
              _invalid_parameter_noinfo();
            v22 = v20[4];
            if ( v22 )
              v23 = (v20[5] - v22) >> 2;
            else
              v23 = 0;
            sub_100192E0(0, (int)v64, (int)v46, *((_DWORD *)ProductInfo + 27), v23, (int)v57, (int)&rc);
            LOBYTE(v67) = 8;
            std::wstring::~wstring(v57);
          }
          else if ( v16 == 4 )
          {
            v24 = std::wstring::c_str(v65);
            std::wstring::wstring(v57, v24);
            LOBYTE(v67) = 11;
            sub_100042A0((int)v57, 1);
            LOBYTE(v67) = 8;
            std::wstring::~wstring(v57);
            v25 = (const char *)std::string::c_str((char *)ProductInfo + 176);
            v26 = atow(v25);
            std::wstring::wstring(v57, v26);
            v27 = v50;
            v21 = v50 == *((_DWORD **)this + 1007);
            LOBYTE(v67) = 12;
            if ( v21 )
              _invalid_parameter_noinfo();
            v28 = v27[4];
            if ( v28 )
              v29 = (v27[5] - v28) >> 2;
            else
              v29 = 0;
            sub_100192E0(1, (int)v64, (int)v46, *((_DWORD *)ProductInfo + 27), v29, (int)v57, (int)&v58);
            LOBYTE(v67) = 8;
            std::wstring::~wstring(v57);
            sub_10003148(1, *((_DWORD *)ProductInfo + 27), 40, 31);
          }
          v54 = 0;
          v55 = 0;
          v56 = 0;
          v41 = *(_DWORD *)(v52 + 108);
          LOBYTE(v67) = 13;
          GameClient::ProductManager::Instance();
          GameClient::ProductManager::GetFlyweightID(v41, (int)v53);
          v30 = (unsigned int *)v54;
          if ( !v54 || !((v55 - (int)v54) >> 2) )
          {
            _invalid_parameter_noinfo();
            v30 = (unsigned int *)v54;
          }
          v45 = *v30;
          v31 = GameClient::FlyweightManager::Instance();
          v32 = GameClient::FlyweightManager::GetFlyweight(v31, v45);
          v33 = v32;
          if ( v32 )
          {
            v34 = (const char *)std::string::c_str((char *)v32 + 112);
            v35 = atow(v34);
            std::wstring::operator=(v64, v35);
            v36 = (const char *)std::string::c_str((char *)v33 + 140);
            v37 = atow(v36);
            std::wstring::wstring(v62, v37);
            v42 = *((_DWORD *)v33 + 12);
            v40 = *((_DWORD *)ProductInfo + 27);
            LOBYTE(v67) = 14;
            sub_1000638E(v40, (int)v64, (int)v62, v42, 0);
            LOBYTE(v67) = 13;
            std::wstring::~wstring(v62);
          }
          if ( v54 )
            operator delete(v54);
          v54 = 0;
          v55 = 0;
          v56 = 0;
          LOBYTE(v67) = 6;
          std::wstring::~wstring(v64);
          v3 = v50;
        }
      }
    }
    v4 = (char *)this + 4024;
    if ( v3 == *((_DWORD **)this + 1007) )
      _invalid_parameter_noinfo();
    v50 = (_DWORD *)*v3;
    v3 = v50;
  }
  sub_10017F2B();
  v38 = (char *)v47;
  LOBYTE(v67) = 5;
  if ( v47 )
  {
    v39 = v48;
    if ( v47 != v48 )
    {
      do
      {
        std::wstring::~wstring(v38);
        v38 += 28;
      }
      while ( v38 != v39 );
      v38 = (char *)v47;
    }
    operator delete(v38);
  }
  v47 = 0;
  v48 = 0;
  v49 = 0;
  LOBYTE(v67) = 2;
  std::wstring::~wstring(v65);
  v67 = -1;
  std::wstring::~wstring(v66);
}
