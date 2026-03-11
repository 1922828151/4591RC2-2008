/*
 * func-name: ?OnUpdateStockPile@CVehicleRoofUI@@QAEXXZ_0
 * func-address: 0x102a3e20
 * callers: 0x10019d21
 * callees: 0x1000103c, 0x100026e4, 0x100042a0, 0x1000638e, 0x10006947, 0x1000a506, 0x1000ab82, 0x1000aff6, 0x1001241d, 0x10012c29, 0x10013aac, 0x10013ca5, 0x10014619, 0x10017f2b, 0x100192e0, 0x1001a0f5, 0x102c8d6c, 0x102c9d50, 0x102c9d62, 0x102c9f53
 */

void __thiscall CVehicleRoofUI::OnUpdateStockPile(CVehicleRoofUI *this)
{
  GameClient::FuncManager *v1; // eax
  void *v2; // esi
  int v3; // edi
  unsigned int i; // esi
  unsigned int *v5; // edi
  int Stock; // eax
  void *v7; // ecx
  unsigned int j; // edi
  void *v9; // ecx
  unsigned int *v10; // esi
  struct GameClient::FProductInfo *ProductInfo; // esi
  char *v12; // ecx
  char *v13; // edi
  void *v14; // eax
  GameClient::FlyweightManager *v15; // eax
  struct GameClient::Flyweight *Flyweight; // edi
  const char *v17; // eax
  const wchar_t *v18; // eax
  const char *v19; // eax
  const wchar_t *v20; // eax
  _DWORD *v21; // eax
  int v22; // eax
  const char *v23; // eax
  const wchar_t *v24; // eax
  const char *v25; // eax
  const wchar_t *v26; // eax
  char *v27; // esi
  char *v28; // edi
  int v29; // [esp-14h] [ebp-C8h]
  int v30; // [esp-8h] [ebp-BCh]
  unsigned int v31; // [esp-4h] [ebp-B8h]
  unsigned int v32; // [esp-4h] [ebp-B8h]
  int v33; // [esp-4h] [ebp-B8h]
  unsigned int v34; // [esp+14h] [ebp-A0h]
  int v35; // [esp+18h] [ebp-9Ch] BYREF
  void *v36; // [esp+1Ch] [ebp-98h]
  int v37; // [esp+20h] [ebp-94h]
  int v38; // [esp+24h] [ebp-90h]
  char v39[4]; // [esp+28h] [ebp-8Ch] BYREF
  void *Source; // [esp+2Ch] [ebp-88h]
  int v41; // [esp+30h] [ebp-84h]
  int v42; // [esp+34h] [ebp-80h]
  GameClient::Func_Receive *Function; // [esp+38h] [ebp-7Ch]
  char v44[4]; // [esp+3Ch] [ebp-78h] BYREF
  void *v45; // [esp+40h] [ebp-74h]
  int v46; // [esp+44h] [ebp-70h]
  int v47; // [esp+48h] [ebp-6Ch]
  char v48[4]; // [esp+4Ch] [ebp-68h] BYREF
  void *v49; // [esp+50h] [ebp-64h]
  char *v50; // [esp+54h] [ebp-60h]
  int v51; // [esp+58h] [ebp-5Ch]
  _BYTE v52[28]; // [esp+5Ch] [ebp-58h] BYREF
  struct tagRECT rc; // [esp+78h] [ebp-3Ch] BYREF
  _BYTE v54[28]; // [esp+88h] [ebp-2Ch] BYREF
  int v55; // [esp+B0h] [ebp-4h]

  v31 = *((_DWORD *)this + 976);
  v1 = GameClient::FuncManager::Instance();
  Function = GameClient::FuncManager::GetFunction(v1, v31);
  if ( Function )
  {
    Source = 0;
    v41 = 0;
    v42 = 0;
    v55 = 0;
    GameClient::Func_Receive::GetProductList((int)v39);
    v2 = Source;
    v3 = v41;
    if ( (unsigned int)Source > v41 )
    {
      _invalid_parameter_noinfo();
      v2 = Source;
      if ( (unsigned int)Source > v41 )
        _invalid_parameter_noinfo();
    }
    sub_10013AAC(v2, v3, (v3 - (int)v2) >> 2);
    v36 = 0;
    v37 = 0;
    v38 = 0;
    LOBYTE(v55) = 1;
    for ( i = 0; Source && i < (v41 - (int)Source) >> 2; ++i )
    {
      v5 = (unsigned int *)((char *)Source + 4 * i);
      Stock = GameClient::Func_Receive::GetStock(Function, *v5);
      if ( !(unsigned __int8)sub_10013CA5(*v5, Stock) )
      {
        v7 = Source;
        if ( !Source || i >= (v41 - (int)Source) >> 2 )
        {
          _invalid_parameter_noinfo();
          v7 = Source;
        }
        sub_1001A0F5(&v35, (int)v7 + 4 * i);
      }
    }
    SetRect(&rc, 0, 0, 128, 128);
    v49 = 0;
    v50 = 0;
    v51 = 0;
    LOBYTE(v55) = 2;
    for ( j = 0; ; ++j )
    {
      v9 = v36;
      v34 = j;
      if ( !v36 )
        break;
      if ( j >= (v37 - (int)v36) >> 2 )
      {
        if ( (v37 - (int)v36) >> 2 )
        {
          sub_10017F2B();
          v9 = v36;
        }
        break;
      }
      v10 = (unsigned int *)((char *)v36 + 4 * j);
      if ( (`GameClient::ProductManager::Instance'::`2'::`local static guard' & 1) == 0 )
      {
        `GameClient::ProductManager::Instance'::`2'::`local static guard' |= 1u;
        LOBYTE(v55) = 3;
        GameClient::ProductManager::ProductManager((GameClient::ProductManager *)&`GameClient::ProductManager::Instance'::`2'::pm);
        atexit(sub_10012611);
        LOBYTE(v55) = 2;
      }
      ProductInfo = GameClient::ProductManager::GetProductInfo(
                      (GameClient::ProductManager *)&`GameClient::ProductManager::Instance'::`2'::pm,
                      *v10);
      if ( ProductInfo )
      {
        v45 = 0;
        v46 = 0;
        v47 = 0;
        v12 = (char *)v36;
        LOBYTE(v55) = 4;
        if ( !v36 || j >= (v37 - (int)v36) >> 2 )
        {
          _invalid_parameter_noinfo();
          v12 = (char *)v36;
        }
        v13 = &v12[4 * j];
        if ( (`GameClient::ProductManager::Instance'::`2'::`local static guard' & 1) == 0 )
        {
          `GameClient::ProductManager::Instance'::`2'::`local static guard' |= 1u;
          LOBYTE(v55) = 5;
          GameClient::ProductManager::ProductManager((GameClient::ProductManager *)&`GameClient::ProductManager::Instance'::`2'::pm);
          atexit(sub_10012611);
          LOBYTE(v55) = 4;
        }
        GameClient::ProductManager::GetFlyweightID(*(_DWORD *)v13, (int)v44);
        v14 = v45;
        if ( v45 && (v46 - (int)v45) >> 2 )
        {
          v32 = *(_DWORD *)v45;
          v15 = GameClient::FlyweightManager::Instance();
          Flyweight = GameClient::FlyweightManager::GetFlyweight(v15, v32);
          if ( Flyweight )
          {
            std::wstring::wstring(v52, L"abc");
            v33 = *((_DWORD *)ProductInfo + 29);
            LOBYTE(v55) = 6;
            sub_100042A0((int)v52, v33);
            LOBYTE(v55) = 4;
            std::wstring::~wstring(v52);
            std::wstring::wstring(v54);
            LOBYTE(v55) = 7;
            v17 = (const char *)std::string::c_str((char *)ProductInfo + 120);
            v18 = atow(v17);
            std::wstring::operator=(v54, v18);
            v19 = (const char *)std::string::c_str((char *)ProductInfo + 176);
            v20 = atow(v19);
            std::wstring::wstring(v52, v20);
            v21 = v36;
            LOBYTE(v55) = 8;
            if ( !v36 || v34 >= (v37 - (int)v36) >> 2 )
            {
              _invalid_parameter_noinfo();
              v21 = v36;
            }
            v22 = GameClient::Func_Receive::GetStock(Function, v21[v34]);
            sub_100192E0(
              *((_DWORD *)ProductInfo + 29),
              (int)v54,
              (int)v48,
              *((_DWORD *)ProductInfo + 27),
              v22,
              (int)v52,
              (int)&rc);
            LOBYTE(v55) = 7;
            std::wstring::~wstring(v52);
            v23 = (const char *)std::string::c_str((char *)Flyweight + 112);
            v24 = atow(v23);
            std::wstring::operator=(v54, v24);
            v25 = (const char *)std::string::c_str((char *)Flyweight + 140);
            v26 = atow(v25);
            std::wstring::wstring(v52, v26);
            v30 = *((_DWORD *)Flyweight + 12);
            v29 = *((_DWORD *)ProductInfo + 27);
            LOBYTE(v55) = 9;
            sub_1000638E(v29, (int)v54, (int)v52, v30, 0);
            LOBYTE(v55) = 7;
            std::wstring::~wstring(v52);
            LOBYTE(v55) = 4;
            std::wstring::~wstring(v54);
          }
          v14 = v45;
        }
        LOBYTE(v55) = 2;
        if ( v14 )
          operator delete(v14);
        j = v34;
        v45 = 0;
        v46 = 0;
        v47 = 0;
      }
    }
    v27 = (char *)v49;
    LOBYTE(v55) = 1;
    if ( v49 )
    {
      v28 = v50;
      if ( v49 != v50 )
      {
        do
        {
          std::wstring::~wstring(v27);
          v27 += 28;
        }
        while ( v27 != v28 );
        v27 = (char *)v49;
      }
      operator delete(v27);
      v9 = v36;
    }
    v49 = 0;
    v50 = 0;
    v51 = 0;
    if ( v9 )
      operator delete(v9);
    v36 = 0;
    v37 = 0;
    v38 = 0;
    if ( Source )
      operator delete(Source);
  }
}
