/*
 * func-name: ?RefreshList@CRobotRoofUI@@AAEXK@Z_0
 * func-address: 0x102830a0
 * callers: 0x100109ab
 * callees: 0x1000194c, 0x100026e4, 0x100042a0, 0x10004930, 0x1000638e, 0x10006947, 0x100089a9, 0x10008ecc, 0x10009efd, 0x1000a006, 0x1000a506, 0x1000ab82, 0x1000aff6, 0x1000c2b1, 0x1000d51c, 0x1000db1b, 0x1000e881, 0x1000f056, 0x10010389, 0x10011bb2, 0x1001241d, 0x10012b7a, 0x10012c29, 0x10014619, 0x10016d1f, 0x10017f2b, 0x100192e0, 0x102c8d6c, 0x102c9d50, 0x102c9d62, 0x102c9ea8
 */

void __thiscall CRobotRoofUI::RefreshList(CRobotRoofUI *this, unsigned int a2)
{
  GameClient::FuncManager *v3; // eax
  int *v4; // esi
  int v5; // eax
  int v6; // eax
  GameClient::FlyweightManager *v7; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  unsigned int v9; // ebx
  GameClient::ProductManager *v10; // eax
  struct GameClient::FProductInfo *ProductInfo; // eax
  int *v12; // esi
  GameClient::FlyweightManager *v13; // eax
  struct GameClient::Flyweight *v14; // ebp
  unsigned int *v15; // eax
  const char *v16; // eax
  const wchar_t *v17; // eax
  int v18; // eax
  const char *v19; // eax
  const wchar_t *v20; // eax
  const char *v21; // eax
  const wchar_t *v22; // eax
  unsigned int *v23; // eax
  int Stock; // eax
  const char *v25; // eax
  const wchar_t *v26; // eax
  const char *v27; // eax
  const wchar_t *v28; // eax
  int v29; // eax
  unsigned int v30; // [esp-14h] [ebp-D8h]
  int v31; // [esp-14h] [ebp-D8h]
  int v32; // [esp-8h] [ebp-CCh]
  int v33; // [esp-8h] [ebp-CCh]
  int v34; // [esp-8h] [ebp-CCh]
  unsigned int v35; // [esp-4h] [ebp-C8h]
  unsigned int v36; // [esp-4h] [ebp-C8h]
  unsigned int v37; // [esp-4h] [ebp-C8h]
  int v38; // [esp-4h] [ebp-C8h]
  int v39; // [esp-4h] [ebp-C8h]
  int v40; // [esp+14h] [ebp-B0h] BYREF
  void *v41; // [esp+18h] [ebp-ACh]
  int v42; // [esp+1Ch] [ebp-A8h]
  int v43; // [esp+20h] [ebp-A4h]
  GameClient::Func_Receive *Function; // [esp+24h] [ebp-A0h]
  _DWORD v45[4]; // [esp+28h] [ebp-9Ch] BYREF
  _DWORD v46[4]; // [esp+38h] [ebp-8Ch] BYREF
  _BYTE v47[28]; // [esp+48h] [ebp-7Ch] BYREF
  int v48; // [esp+64h] [ebp-60h] BYREF
  struct tagRECT rc; // [esp+6Ch] [ebp-58h] BYREF
  _BYTE v50[28]; // [esp+7Ch] [ebp-48h] BYREF
  _BYTE v51[28]; // [esp+98h] [ebp-2Ch] BYREF
  int v52; // [esp+C0h] [ebp-4h]

  if ( *((_DWORD *)this + 1006) == -1 )
    return;
  v35 = *((_DWORD *)this + 1006);
  v3 = GameClient::FuncManager::Instance();
  Function = GameClient::FuncManager::GetFunction(v3, v35);
  if ( !Function || *((_DWORD *)this + 1008) == a2 )
    return;
  CREStatic::SetText(*((CREStatic **)this + 972), word_10322F28);
  *((_DWORD *)this + 1008) = a2;
  if ( a2 == 8 || a2 == 16 )
  {
    CRobotRoofUI::RefreshEquip(this, a2);
    return;
  }
  sub_1000F056();
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v52 = 0;
  GameClient::Func_Receive::GetProductList((int)&v40);
  v4 = (int *)sub_10016D1F((int)&v48);
  v5 = sub_10004930((int)v45);
  sub_1000C2B1(*(_DWORD *)v5, *(void **)(v5 + 4), *v4, v4[1]);
  memset(&v46[1], 0, 12);
  LOBYTE(v52) = 1;
  SetRect(&rc, 0, 0, 64, 64);
  v6 = *((_DWORD *)this + 971);
  *(_DWORD *)(v6 + 656) = 31;
  *(_DWORD *)(v6 + 660) = 31;
  v30 = *((_DWORD *)this + 979);
  v7 = GameClient::FlyweightManager::Instance();
  Flyweight = GameClient::FlyweightManager::GetFlyweight(v7, v30);
  v48 = _RTDynamicCast(
          Flyweight,
          0,
          &GameClient::Flyweight `RTTI Type Descriptor',
          &GameClient::FRobotBody `RTTI Type Descriptor');
  v9 = 0;
  while ( v41 && v9 < (v42 - (int)v41) >> 2 )
  {
    v36 = *((_DWORD *)v41 + v9);
    v10 = GameClient::ProductManager::Instance();
    ProductInfo = GameClient::ProductManager::GetProductInfo(v10, v36);
    v12 = (int *)ProductInfo;
    if ( ProductInfo && *((_DWORD *)ProductInfo + 28) == *((_DWORD *)this + 1008) )
    {
      memset(&v45[1], 0, 12);
      LOBYTE(v52) = 2;
      v32 = *(_DWORD *)sub_1000E881(v9);
      GameClient::ProductManager::Instance();
      GameClient::ProductManager::GetFlyweightID(v32, (int)v45);
      if ( (unsigned __int8)sub_10009EFD() )
        goto LABEL_18;
      v37 = *(_DWORD *)sub_1000E881(0);
      v13 = GameClient::FlyweightManager::Instance();
      v14 = GameClient::FlyweightManager::GetFlyweight(v13, v37);
      if ( !v14 )
        goto LABEL_18;
      if ( *((_DWORD *)this + 1008) != 2
        || !v48
        || (v15 = (unsigned int *)sub_1000E881(0), CRobotRoofUI::MatchingBodyArmor(this, *((_DWORD *)this + 979), *v15)) )
      {
        sub_100089A9();
        v16 = (const char *)std::string::c_str(v12 + 37);
        v17 = atow(v16);
        std::wstring::wstring(v47, v17);
        LOBYTE(v52) = 3;
        sub_1000A006((int)v47);
        LOBYTE(v52) = 2;
        std::wstring::~wstring(v47);
        v38 = v12[29];
        v33 = v12[28];
        GameClient::ProductManager::Instance();
        GameClient::ProductManager::GetTypeName((int)v51, v33, v38);
        LOBYTE(v52) = 4;
        v18 = std::wstring::c_str(v51);
        std::wstring::wstring(v47, v18);
        v39 = v12[29];
        LOBYTE(v52) = 5;
        sub_100042A0((int)v47, v39);
        LOBYTE(v52) = 4;
        std::wstring::~wstring(v47);
        std::wstring::wstring(v50);
        LOBYTE(v52) = 6;
        v19 = (const char *)std::string::c_str(v12 + 30);
        v20 = atow(v19);
        std::wstring::operator=(v50, v20);
        v21 = (const char *)std::string::c_str(v12 + 44);
        v22 = atow(v21);
        std::wstring::wstring(v47, v22);
        LOBYTE(v52) = 7;
        v23 = (unsigned int *)sub_1000E881(v9);
        Stock = GameClient::Func_Receive::GetStock(Function, *v23);
        sub_100192E0(v12[29], (int)v50, (int)v46, v12[27], Stock, (int)v47, (int)&rc);
        LOBYTE(v52) = 6;
        std::wstring::~wstring(v47);
        v25 = (const char *)std::string::c_str((char *)v14 + 112);
        v26 = atow(v25);
        std::wstring::operator=(v50, v26);
        v27 = (const char *)std::string::c_str((char *)v14 + 140);
        v28 = atow(v27);
        std::wstring::wstring(v47, v28);
        v34 = *((_DWORD *)v14 + 12);
        v31 = v12[27];
        LOBYTE(v52) = 8;
        sub_1000638E(v31, (int)v50, (int)v47, v34, 0);
        LOBYTE(v52) = 6;
        std::wstring::~wstring(v47);
        LOBYTE(v52) = 4;
        std::wstring::~wstring(v50);
        LOBYTE(v52) = 2;
        std::wstring::~wstring(v51);
LABEL_18:
        LOBYTE(v52) = 1;
        sub_1000D51C();
        goto LABEL_19;
      }
      LOBYTE(v52) = 1;
      sub_1000D51C();
      ++v9;
    }
    else
    {
LABEL_19:
      ++v9;
    }
  }
  sub_10017F2B();
  v29 = sub_1000194C(0);
  (*(void (__thiscall **)(GameClient::Func_Receive *, int, unsigned int, int))(*(_DWORD *)Function + 64))(
    Function,
    v29,
    a2,
    -1);
  LOBYTE(v52) = 0;
  sub_10012B7A();
  if ( v41 )
    operator delete(v41);
}
