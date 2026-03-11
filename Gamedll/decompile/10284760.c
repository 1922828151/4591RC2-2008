/*
 * func-name: ?UpdateStockPile@CRobotRoofUI@@QAEXXZ_0
 * func-address: 0x10284760
 * callers: 0x100132f5
 * callees: 0x1000103c, 0x100026e4, 0x100042a0, 0x1000638e, 0x10006947, 0x10008ecc, 0x1000a006, 0x1000a506, 0x1000ab82, 0x1000aff6, 0x1000d51c, 0x1000d77e, 0x10010389, 0x100103c0, 0x10011bb2, 0x1001241d, 0x10012c29, 0x10013aac, 0x10013ca5, 0x10014619, 0x10017f2b, 0x100192e0, 0x1001a0f5, 0x102c8d6c, 0x102c9d50, 0x102c9d62, 0x102c9ea8, 0x102c9f53
 */

void __thiscall CRobotRoofUI::UpdateStockPile(CRobotRoofUI *this)
{
  GameClient::FuncManager *v1; // eax
  GameClient::Func_Receive *Function; // ebp
  void *v3; // esi
  int v4; // edi
  unsigned int i; // esi
  unsigned int *v6; // edi
  int Stock; // eax
  void *v8; // ecx
  int v9; // eax
  GameClient::FlyweightManager *v10; // eax
  unsigned int v11; // edi
  void *v12; // ecx
  unsigned int *v13; // esi
  struct GameClient::FProductInfo *ProductInfo; // eax
  int *v15; // esi
  _DWORD *v16; // ecx
  void *v17; // eax
  bool v18; // zf
  GameClient::FlyweightManager *v19; // eax
  struct GameClient::Flyweight *v20; // eax
  unsigned int *v21; // edx
  int v22; // ecx
  struct GameClient::FSystemPart *v23; // eax
  unsigned int *v24; // eax
  void *v25; // ecx
  void *v26; // eax
  int v27; // ebx
  int v28; // ebp
  const char *v29; // eax
  const wchar_t *v30; // eax
  int v31; // eax
  const char *v32; // eax
  const wchar_t *v33; // eax
  const char *v34; // eax
  const wchar_t *v35; // eax
  _DWORD *v36; // eax
  int v37; // eax
  unsigned int *v38; // eax
  GameClient::FlyweightManager *v39; // eax
  struct GameClient::Flyweight *v40; // eax
  struct GameClient::Flyweight *v41; // edi
  const char *v42; // eax
  const wchar_t *v43; // eax
  const char *v44; // eax
  const wchar_t *v45; // eax
  char *v46; // esi
  char *v47; // edi
  int v48; // [esp-14h] [ebp-114h]
  int v49; // [esp-8h] [ebp-108h]
  int v50; // [esp-8h] [ebp-108h]
  int v51; // [esp-8h] [ebp-108h]
  unsigned int v52; // [esp-4h] [ebp-104h]
  unsigned int v53; // [esp-4h] [ebp-104h]
  unsigned int v54; // [esp-4h] [ebp-104h]
  int v55; // [esp-4h] [ebp-104h]
  int v56; // [esp-4h] [ebp-104h]
  unsigned int v57; // [esp-4h] [ebp-104h]
  char v59[4]; // [esp+18h] [ebp-E8h] BYREF
  void *v60; // [esp+1Ch] [ebp-E4h]
  int v61; // [esp+20h] [ebp-E0h]
  int v62; // [esp+24h] [ebp-DCh]
  unsigned int v63; // [esp+28h] [ebp-D8h]
  char v64[4]; // [esp+2Ch] [ebp-D4h] BYREF
  void *v65; // [esp+30h] [ebp-D0h]
  char *v66; // [esp+34h] [ebp-CCh]
  int v67; // [esp+38h] [ebp-C8h]
  int v68; // [esp+3Ch] [ebp-C4h] BYREF
  void *v69; // [esp+40h] [ebp-C0h]
  int v70; // [esp+44h] [ebp-BCh]
  int v71; // [esp+48h] [ebp-B8h]
  char v72[4]; // [esp+4Ch] [ebp-B4h] BYREF
  void *Source; // [esp+50h] [ebp-B0h]
  int v74; // [esp+54h] [ebp-ACh]
  int v75; // [esp+58h] [ebp-A8h]
  struct GameClient::FSystemPart *Flyweight; // [esp+5Ch] [ebp-A4h]
  GameClient::Func_Receive *v77; // [esp+64h] [ebp-9Ch]
  _BYTE v78[28]; // [esp+68h] [ebp-98h] BYREF
  struct tagRECT rc; // [esp+84h] [ebp-7Ch] BYREF
  char v80[8]; // [esp+94h] [ebp-6Ch] BYREF
  _BYTE v81[28]; // [esp+9Ch] [ebp-64h] BYREF
  _BYTE v82[28]; // [esp+B8h] [ebp-48h] BYREF
  _BYTE v83[28]; // [esp+D4h] [ebp-2Ch] BYREF
  int v84; // [esp+FCh] [ebp-4h]

  v52 = *((_DWORD *)this + 1006);
  v1 = GameClient::FuncManager::Instance();
  Function = GameClient::FuncManager::GetFunction(v1, v52);
  v77 = Function;
  if ( !Function )
    return;
  Source = 0;
  v74 = 0;
  v75 = 0;
  v84 = 0;
  GameClient::Func_Receive::GetProductList((int)v72);
  v3 = Source;
  v4 = v74;
  if ( (unsigned int)Source > v74 )
  {
    _invalid_parameter_noinfo();
    v3 = Source;
    if ( (unsigned int)Source > v74 )
      _invalid_parameter_noinfo();
  }
  sub_10013AAC(v3, v4, (v4 - (int)v3) >> 2);
  v69 = 0;
  v70 = 0;
  v71 = 0;
  LOBYTE(v84) = 1;
  for ( i = 0; Source && i < (v74 - (int)Source) >> 2; ++i )
  {
    v6 = (unsigned int *)((char *)Source + 4 * i);
    Stock = GameClient::Func_Receive::GetStock(Function, *v6);
    if ( !(unsigned __int8)sub_10013CA5(*v6, Stock) )
    {
      v8 = Source;
      if ( !Source || i >= (v74 - (int)Source) >> 2 )
      {
        _invalid_parameter_noinfo();
        v8 = Source;
      }
      sub_1001A0F5(&v68, (int)v8 + 4 * i);
    }
  }
  v9 = *((_DWORD *)this + 1008);
  if ( v9 == 8 )
  {
    SetRect(&rc, 0, 0, 106, 31);
  }
  else if ( v9 == 16 )
  {
    SetRect(&rc, 0, 0, 40, 31);
  }
  else
  {
    SetRect(&rc, 0, 0, 128, 128);
  }
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v53 = *((_DWORD *)this + 979);
  LOBYTE(v84) = 2;
  v10 = GameClient::FlyweightManager::Instance();
  Flyweight = GameClient::FlyweightManager::GetFlyweight(v10, v53);
  v11 = 0;
  while ( 1 )
  {
    v12 = v69;
    v63 = v11;
    if ( !v69 )
      break;
    if ( v11 >= (v70 - (int)v69) >> 2 )
    {
      if ( (v70 - (int)v69) >> 2 )
      {
        sub_10017F2B();
        v12 = v69;
      }
      break;
    }
    v13 = (unsigned int *)((char *)v69 + 4 * v11);
    if ( (`GameClient::ProductManager::Instance'::`2'::`local static guard' & 1) == 0 )
    {
      `GameClient::ProductManager::Instance'::`2'::`local static guard' |= 1u;
      LOBYTE(v84) = 3;
      GameClient::ProductManager::ProductManager((GameClient::ProductManager *)&`GameClient::ProductManager::Instance'::`2'::pm);
      atexit(sub_10012611);
      LOBYTE(v84) = 2;
    }
    ProductInfo = GameClient::ProductManager::GetProductInfo(
                    (GameClient::ProductManager *)&`GameClient::ProductManager::Instance'::`2'::pm,
                    *v13);
    v15 = (int *)ProductInfo;
    if ( ProductInfo && *((_DWORD *)ProductInfo + 28) == *((_DWORD *)this + 1008) )
    {
      v60 = 0;
      v61 = 0;
      v62 = 0;
      v16 = v69;
      LOBYTE(v84) = 4;
      if ( !v69 || v11 >= (v70 - (int)v69) >> 2 )
      {
        _invalid_parameter_noinfo();
        v16 = v69;
      }
      v49 = v16[v11];
      GameClient::ProductManager::Instance();
      GameClient::ProductManager::GetFlyweightID(v49, (int)v59);
      v17 = v60;
      v18 = v60 == 0;
      if ( !v60 )
        goto LABEL_58;
      if ( !((v61 - (int)v60) >> 2) )
        goto LABEL_57;
      v54 = *(_DWORD *)v60;
      v19 = GameClient::FlyweightManager::Instance();
      v20 = GameClient::FlyweightManager::GetFlyweight(v19, v54);
      if ( !v20 )
        goto LABEL_56;
      v21 = (unsigned int *)this;
      v22 = *((_DWORD *)this + 1008);
      if ( v22 == 8 || v22 == 16 )
      {
        v23 = (struct GameClient::FSystemPart *)_RTDynamicCast(
                                                  v20,
                                                  0,
                                                  &GameClient::Flyweight `RTTI Type Descriptor',
                                                  &GameClient::FSystemPart `RTTI Type Descriptor');
        if ( !GameClient::Robot::IsMatchEquip(Flyweight, v23) )
          goto LABEL_56;
        v21 = (unsigned int *)this;
      }
      if ( v21[1008] != 2 || !Flyweight )
        goto LABEL_43;
      v24 = (unsigned int *)v60;
      if ( !v60 || !((v61 - (int)v60) >> 2) )
      {
        _invalid_parameter_noinfo();
        v24 = (unsigned int *)v60;
        v21 = (unsigned int *)this;
      }
      if ( CRobotRoofUI::MatchingBodyArmor((CRobotRoofUI *)v21, v21[979], *v24) )
      {
LABEL_43:
        v25 = v66;
        v26 = v65;
        v27 = (int)v66;
        if ( v65 > v66 )
        {
          _invalid_parameter_noinfo();
          v25 = v66;
          v26 = v65;
        }
        v28 = (int)v26;
        if ( v26 > v25 )
          _invalid_parameter_noinfo();
        sub_1000D77E((int)v80, (int)v64, v28, (int)v64, v27);
        v29 = (const char *)std::string::c_str(v15 + 37);
        v30 = atow(v29);
        std::wstring::wstring(v78, v30);
        LOBYTE(v84) = 5;
        sub_1000A006((int)v78);
        LOBYTE(v84) = 4;
        std::wstring::~wstring(v78);
        v55 = v15[29];
        v50 = v15[28];
        GameClient::ProductManager::Instance();
        GameClient::ProductManager::GetTypeName((int)v83, v50, v55);
        LOBYTE(v84) = 6;
        v31 = std::wstring::c_str(v83);
        std::wstring::wstring(v78, v31);
        v56 = v15[29];
        LOBYTE(v84) = 7;
        sub_100042A0((int)v78, v56);
        LOBYTE(v84) = 6;
        std::wstring::~wstring(v78);
        v32 = (const char *)std::string::c_str(v15 + 30);
        v33 = atow(v32);
        std::wstring::wstring(v82, v33);
        LOBYTE(v84) = 8;
        v34 = (const char *)std::string::c_str(v15 + 44);
        v35 = atow(v34);
        std::wstring::wstring(v78, v35);
        v36 = v69;
        LOBYTE(v84) = 9;
        if ( !v69 || v63 >= (v70 - (int)v69) >> 2 )
        {
          _invalid_parameter_noinfo();
          v36 = v69;
        }
        v37 = GameClient::Func_Receive::GetStock(v77, v36[v63]);
        sub_100192E0(v15[29], (int)v82, (int)v64, v15[27], v37, (int)v78, (int)&rc);
        LOBYTE(v84) = 8;
        std::wstring::~wstring(v78);
        v38 = (unsigned int *)v60;
        if ( !v60 || !((v61 - (int)v60) >> 2) )
        {
          _invalid_parameter_noinfo();
          v38 = (unsigned int *)v60;
        }
        v57 = *v38;
        v39 = GameClient::FlyweightManager::Instance();
        v40 = GameClient::FlyweightManager::GetFlyweight(v39, v57);
        v41 = v40;
        if ( v40 )
        {
          v42 = (const char *)std::string::c_str((char *)v40 + 112);
          v43 = atow(v42);
          std::wstring::wstring(v81, v43);
          LOBYTE(v84) = 10;
          v44 = (const char *)std::string::c_str((char *)v41 + 140);
          v45 = atow(v44);
          std::wstring::wstring(v78, v45);
          v51 = *((_DWORD *)v41 + 12);
          v48 = v15[27];
          LOBYTE(v84) = 11;
          sub_1000638E(v48, (int)v81, (int)v78, v51, 0);
          LOBYTE(v84) = 10;
          std::wstring::~wstring(v78);
          LOBYTE(v84) = 8;
          std::wstring::~wstring(v81);
        }
        LOBYTE(v84) = 6;
        std::wstring::~wstring(v82);
        LOBYTE(v84) = 4;
        std::wstring::~wstring(v83);
        v11 = v63;
LABEL_56:
        v17 = v60;
LABEL_57:
        v18 = v17 == 0;
LABEL_58:
        LOBYTE(v84) = 2;
        if ( !v18 )
          operator delete(v17);
        v62 = 0;
        v61 = 0;
        v60 = 0;
        goto LABEL_61;
      }
      LOBYTE(v84) = 2;
      sub_1000D51C();
      ++v11;
    }
    else
    {
LABEL_61:
      ++v11;
    }
  }
  v46 = (char *)v65;
  LOBYTE(v84) = 1;
  if ( v65 )
  {
    v47 = v66;
    if ( v65 != v66 )
    {
      do
      {
        std::wstring::~wstring(v46);
        v46 += 28;
      }
      while ( v46 != v47 );
      v46 = (char *)v65;
    }
    operator delete(v46);
    v12 = v69;
  }
  v65 = 0;
  v66 = 0;
  v67 = 0;
  if ( v12 )
    operator delete(v12);
  v69 = 0;
  v70 = 0;
  v71 = 0;
  if ( Source )
    operator delete(Source);
}
