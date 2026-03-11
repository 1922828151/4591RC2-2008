/*
 * func-name: ?RefreshList@CVehicleRoofUI@@IAEXXZ_0
 * func-address: 0x102a39e0
 * callers: 0x10009764
 * callees: 0x1000194c, 0x100026e4, 0x100042a0, 0x1000638e, 0x10006947, 0x10008ecc, 0x1000a506, 0x1000ab82, 0x1000aff6, 0x1000f056, 0x10010389, 0x1001241d, 0x10012b7a, 0x10012c29, 0x10013aac, 0x10014619, 0x10017f2b, 0x100192e0, 0x102c8d6c, 0x102c9d50, 0x102c9d62
 */

void __thiscall CVehicleRoofUI::RefreshList(CVehicleRoofUI *this)
{
  GameClient::FuncManager *v2; // eax
  void *v3; // edi
  int v4; // esi
  unsigned int i; // edi
  GameClient::ProductManager *v6; // eax
  int *ProductInfo; // esi
  _DWORD *v8; // ecx
  void *v9; // eax
  GameClient::FlyweightManager *v10; // eax
  struct GameClient::Flyweight *Flyweight; // edi
  int v12; // eax
  const char *v13; // eax
  const wchar_t *v14; // eax
  const char *v15; // eax
  const wchar_t *v16; // eax
  _DWORD *v17; // eax
  int Stock; // eax
  const char *v19; // eax
  const wchar_t *v20; // eax
  const char *v21; // eax
  const wchar_t *v22; // eax
  int v23; // eax
  int v24; // [esp-14h] [ebp-D4h]
  int v25; // [esp-8h] [ebp-C8h]
  int v26; // [esp-8h] [ebp-C8h]
  int v27; // [esp-8h] [ebp-C8h]
  unsigned int v28; // [esp-4h] [ebp-C4h]
  unsigned int v29; // [esp-4h] [ebp-C4h]
  unsigned int v30; // [esp-4h] [ebp-C4h]
  int v31; // [esp-4h] [ebp-C4h]
  int v32; // [esp-4h] [ebp-C4h]
  unsigned int v33; // [esp+14h] [ebp-ACh]
  int v34; // [esp+18h] [ebp-A8h] BYREF
  void *Source; // [esp+1Ch] [ebp-A4h]
  int v36; // [esp+20h] [ebp-A0h]
  int v37; // [esp+24h] [ebp-9Ch]
  int v38; // [esp+28h] [ebp-98h] BYREF
  void *v39; // [esp+2Ch] [ebp-94h]
  int v40; // [esp+30h] [ebp-90h]
  int v41; // [esp+34h] [ebp-8Ch]
  GameClient::Func_Receive *Function; // [esp+38h] [ebp-88h]
  _BYTE v43[28]; // [esp+3Ch] [ebp-84h] BYREF
  _DWORD v44[4]; // [esp+58h] [ebp-68h] BYREF
  struct tagRECT rc; // [esp+68h] [ebp-58h] BYREF
  _BYTE v46[28]; // [esp+78h] [ebp-48h] BYREF
  _BYTE v47[28]; // [esp+94h] [ebp-2Ch] BYREF
  int v48; // [esp+BCh] [ebp-4h]

  if ( *((_DWORD *)this + 976) != -1 )
  {
    v28 = *((_DWORD *)this + 976);
    v2 = GameClient::FuncManager::Instance();
    Function = GameClient::FuncManager::GetFunction(v2, v28);
    if ( Function )
    {
      CREStatic::SetText(*((CREStatic **)this + 971), word_103245FC);
      sub_1000F056();
      Source = 0;
      v36 = 0;
      v37 = 0;
      v48 = 0;
      GameClient::Func_Receive::GetProductList((int)&v34);
      v3 = Source;
      v4 = v36;
      if ( (unsigned int)Source > v36 )
      {
        _invalid_parameter_noinfo();
        v3 = Source;
        if ( (unsigned int)Source > v36 )
          _invalid_parameter_noinfo();
      }
      sub_10013AAC(v3, v4, (v4 - (int)v3) >> 2);
      SetRect(&rc, 0, 0, 128, 128);
      memset(&v44[1], 0, 12);
      LOBYTE(v48) = 1;
      for ( i = 0; ; ++i )
      {
        v33 = i;
        if ( !Source || i >= (v36 - (int)Source) >> 2 )
          break;
        v29 = *((_DWORD *)Source + i);
        v6 = GameClient::ProductManager::Instance();
        ProductInfo = (int *)GameClient::ProductManager::GetProductInfo(v6, v29);
        if ( ProductInfo )
        {
          v39 = 0;
          v40 = 0;
          v41 = 0;
          v8 = Source;
          LOBYTE(v48) = 2;
          if ( !Source || i >= (v36 - (int)Source) >> 2 )
          {
            _invalid_parameter_noinfo();
            v8 = Source;
          }
          v25 = v8[i];
          GameClient::ProductManager::Instance();
          GameClient::ProductManager::GetFlyweightID(v25, (int)&v38);
          v9 = v39;
          if ( v39 && (v40 - (int)v39) >> 2 )
          {
            v30 = *(_DWORD *)v39;
            v10 = GameClient::FlyweightManager::Instance();
            Flyweight = GameClient::FlyweightManager::GetFlyweight(v10, v30);
            if ( Flyweight )
            {
              v31 = ProductInfo[29];
              v26 = ProductInfo[28];
              GameClient::ProductManager::Instance();
              GameClient::ProductManager::GetTypeName((int)v47, v26, v31);
              LOBYTE(v48) = 3;
              v12 = std::wstring::c_str(v47);
              std::wstring::wstring(v43, v12);
              v32 = ProductInfo[29];
              LOBYTE(v48) = 4;
              sub_100042A0((int)v43, v32);
              LOBYTE(v48) = 3;
              std::wstring::~wstring(v43);
              std::wstring::wstring(v46);
              LOBYTE(v48) = 5;
              v13 = (const char *)std::string::c_str(ProductInfo + 30);
              v14 = atow(v13);
              std::wstring::operator=(v46, v14);
              v15 = (const char *)std::string::c_str(ProductInfo + 44);
              v16 = atow(v15);
              std::wstring::wstring(v43, v16);
              v17 = Source;
              LOBYTE(v48) = 6;
              if ( !Source || v33 >= (v36 - (int)Source) >> 2 )
              {
                _invalid_parameter_noinfo();
                v17 = Source;
              }
              Stock = GameClient::Func_Receive::GetStock(Function, v17[v33]);
              sub_100192E0(ProductInfo[29], (int)v46, (int)v44, ProductInfo[27], Stock, (int)v43, (int)&rc);
              LOBYTE(v48) = 5;
              std::wstring::~wstring(v43);
              v19 = (const char *)std::string::c_str((char *)Flyweight + 112);
              v20 = atow(v19);
              std::wstring::operator=(v46, v20);
              v21 = (const char *)std::string::c_str((char *)Flyweight + 140);
              v22 = atow(v21);
              std::wstring::wstring(v43, v22);
              v27 = *((_DWORD *)Flyweight + 12);
              v24 = ProductInfo[27];
              LOBYTE(v48) = 7;
              sub_1000638E(v24, (int)v46, (int)v43, v27, 0);
              LOBYTE(v48) = 5;
              std::wstring::~wstring(v43);
              LOBYTE(v48) = 3;
              std::wstring::~wstring(v46);
              LOBYTE(v48) = 2;
              std::wstring::~wstring(v47);
            }
            i = v33;
            v9 = v39;
          }
          LOBYTE(v48) = 1;
          if ( v9 )
            operator delete(v9);
          v39 = 0;
          v40 = 0;
          v41 = 0;
        }
      }
      sub_10017F2B();
      v23 = sub_1000194C(0);
      (*(void (__thiscall **)(GameClient::Func_Receive *, int, int, int))(*(_DWORD *)Function + 64))(
        Function,
        v23,
        -1,
        -1);
      LOBYTE(v48) = 0;
      sub_10012B7A();
      if ( Source )
        operator delete(Source);
    }
  }
}
