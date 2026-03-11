/*
 * func-name: ?RefreshEquip@CRobotRoofUI@@AAEXK@Z_0
 * func-address: 0x10282310
 * callers: 0x1000db1b
 * callees: 0x1000194c, 0x100026e4, 0x100042a0, 0x1000638e, 0x10006947, 0x100089a9, 0x10008ecc, 0x1000a006, 0x1000a506, 0x1000ab82, 0x1000aff6, 0x1000e881, 0x1000f056, 0x10010389, 0x100103c0, 0x1001241d, 0x10012b7a, 0x10012c29, 0x10014619, 0x10017f2b, 0x100192e0, 0x102c8d6c, 0x102c9d50, 0x102c9d62, 0x102c9ea8
 */

void __thiscall CRobotRoofUI::RefreshEquip(CRobotRoofUI *this, unsigned int a2)
{
  GameClient::FuncManager *v3; // eax
  struct GameClient::Function *Function; // esi
  GameClient::FlyweightManager *v5; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  bool v7; // zf
  int v8; // eax
  unsigned int i; // ebx
  GameClient::ProductManager *v10; // eax
  struct GameClient::FProductInfo *ProductInfo; // eax
  int *v12; // esi
  _DWORD *v13; // ecx
  void *v14; // eax
  GameClient::FlyweightManager *v15; // eax
  struct GameClient::Flyweight *v16; // eax
  struct GameClient::FSystemPart *v17; // eax
  const char *v18; // eax
  const wchar_t *v19; // eax
  int v20; // eax
  const char *v21; // eax
  const wchar_t *v22; // eax
  const char *v23; // eax
  const wchar_t *v24; // eax
  unsigned int *v25; // eax
  int Stock; // eax
  GameClient::FlyweightManager *v27; // eax
  struct GameClient::Flyweight *v28; // eax
  struct GameClient::Flyweight *v29; // edi
  const char *v30; // eax
  const wchar_t *v31; // eax
  const char *v32; // eax
  const wchar_t *v33; // eax
  int v34; // eax
  unsigned int v35; // [esp-14h] [ebp-D8h]
  int v36; // [esp-14h] [ebp-D8h]
  int v37; // [esp-8h] [ebp-CCh]
  int v38; // [esp-8h] [ebp-CCh]
  int v39; // [esp-8h] [ebp-CCh]
  unsigned int v40; // [esp-4h] [ebp-C8h]
  unsigned int v41; // [esp-4h] [ebp-C8h]
  unsigned int v42; // [esp-4h] [ebp-C8h]
  int v43; // [esp-4h] [ebp-C8h]
  int v44; // [esp-4h] [ebp-C8h]
  unsigned int v45; // [esp-4h] [ebp-C8h]
  _BYTE v46[4]; // [esp+14h] [ebp-B0h] BYREF
  void *v47; // [esp+18h] [ebp-ACh]
  int v48; // [esp+1Ch] [ebp-A8h]
  int v49; // [esp+20h] [ebp-A4h]
  _BYTE v50[4]; // [esp+24h] [ebp-A0h] BYREF
  void *v51; // [esp+28h] [ebp-9Ch]
  int v52; // [esp+2Ch] [ebp-98h]
  int v53; // [esp+30h] [ebp-94h]
  GameClient::Func_Receive *v54; // [esp+34h] [ebp-90h]
  struct GameClient::FSystemPart *v55; // [esp+38h] [ebp-8Ch]
  _BYTE v56[4]; // [esp+3Ch] [ebp-88h] BYREF
  int v57; // [esp+40h] [ebp-84h]
  int v58; // [esp+44h] [ebp-80h]
  int v59; // [esp+48h] [ebp-7Ch]
  _BYTE v60[32]; // [esp+4Ch] [ebp-78h] BYREF
  struct tagRECT rc; // [esp+6Ch] [ebp-58h] BYREF
  _BYTE v62[28]; // [esp+7Ch] [ebp-48h] BYREF
  _BYTE v63[28]; // [esp+98h] [ebp-2Ch] BYREF
  int v64; // [esp+C0h] [ebp-4h]

  if ( *((_DWORD *)this + 979) != -1 )
  {
    v40 = *((_DWORD *)this + 1006);
    v3 = GameClient::FuncManager::Instance();
    Function = GameClient::FuncManager::GetFunction(v3, v40);
    v54 = Function;
    if ( Function )
    {
      v35 = *((_DWORD *)this + 979);
      v5 = GameClient::FlyweightManager::Instance();
      Flyweight = GameClient::FlyweightManager::GetFlyweight(v5, v35);
      v55 = (struct GameClient::FSystemPart *)_RTDynamicCast(
                                                Flyweight,
                                                0,
                                                &GameClient::Flyweight `RTTI Type Descriptor',
                                                &GameClient::FRobotBody `RTTI Type Descriptor');
      if ( v55 )
      {
        sub_1000F056();
        v51 = 0;
        v52 = 0;
        v53 = 0;
        v64 = 0;
        GameClient::Func_Receive::GetProductList((int)v50);
        v57 = 0;
        v58 = 0;
        v59 = 0;
        v7 = *((_DWORD *)this + 1008) == 8;
        LOBYTE(v64) = 1;
        if ( v7 )
        {
          SetRect(&rc, 0, 0, 106, 31);
          v8 = *((_DWORD *)this + 971);
          *(_DWORD *)(v8 + 656) = 106;
        }
        else
        {
          SetRect(&rc, 0, 0, 40, 31);
          v8 = *((_DWORD *)this + 971);
          *(_DWORD *)(v8 + 656) = 40;
        }
        *(_DWORD *)(v8 + 660) = 31;
        for ( i = 0; v51 && i < (v52 - (int)v51) >> 2; ++i )
        {
          v41 = *((_DWORD *)v51 + i);
          v10 = GameClient::ProductManager::Instance();
          ProductInfo = GameClient::ProductManager::GetProductInfo(v10, v41);
          v12 = (int *)ProductInfo;
          if ( ProductInfo && *((_DWORD *)ProductInfo + 28) == *((_DWORD *)this + 1008) )
          {
            v47 = 0;
            v48 = 0;
            v49 = 0;
            v13 = v51;
            LOBYTE(v64) = 2;
            if ( !v51 || i >= (v52 - (int)v51) >> 2 )
            {
              _invalid_parameter_noinfo();
              v13 = v51;
            }
            v37 = v13[i];
            GameClient::ProductManager::Instance();
            GameClient::ProductManager::GetFlyweightID(v37, (int)v46);
            v14 = v47;
            if ( v47 && (v48 - (int)v47) >> 2 )
            {
              v42 = *(_DWORD *)sub_1000E881(0);
              v15 = GameClient::FlyweightManager::Instance();
              v16 = GameClient::FlyweightManager::GetFlyweight(v15, v42);
              v17 = (struct GameClient::FSystemPart *)_RTDynamicCast(
                                                        v16,
                                                        0,
                                                        &GameClient::Flyweight `RTTI Type Descriptor',
                                                        &GameClient::FSystemPart `RTTI Type Descriptor');
              if ( v17 && GameClient::Robot::IsMatchEquip(v55, v17) )
              {
                sub_100089A9();
                v18 = (const char *)std::string::c_str(v12 + 37);
                v19 = atow(v18);
                std::wstring::wstring(v60, v19);
                LOBYTE(v64) = 3;
                sub_1000A006((int)v60);
                LOBYTE(v64) = 2;
                std::wstring::~wstring(v60);
                v43 = v12[29];
                v38 = v12[28];
                GameClient::ProductManager::Instance();
                GameClient::ProductManager::GetTypeName((int)v63, v38, v43);
                LOBYTE(v64) = 4;
                v20 = std::wstring::c_str(v63);
                std::wstring::wstring(v60, v20);
                v44 = v12[29];
                LOBYTE(v64) = 5;
                sub_100042A0((int)v60, v44);
                LOBYTE(v64) = 4;
                std::wstring::~wstring(v60);
                std::wstring::wstring(v62);
                LOBYTE(v64) = 6;
                v21 = (const char *)std::string::c_str(v12 + 30);
                v22 = atow(v21);
                std::wstring::operator=(v62, v22);
                v23 = (const char *)std::string::c_str(v12 + 44);
                v24 = atow(v23);
                std::wstring::wstring(v60, v24);
                LOBYTE(v64) = 7;
                v25 = (unsigned int *)sub_1000E881(i);
                Stock = GameClient::Func_Receive::GetStock(v54, *v25);
                sub_100192E0(v12[29], (int)v62, (int)v56, v12[27], Stock, (int)v60, (int)&rc);
                LOBYTE(v64) = 6;
                std::wstring::~wstring(v60);
                v45 = *(_DWORD *)sub_1000E881(0);
                v27 = GameClient::FlyweightManager::Instance();
                v28 = GameClient::FlyweightManager::GetFlyweight(v27, v45);
                v29 = v28;
                if ( v28 )
                {
                  v30 = (const char *)std::string::c_str((char *)v28 + 112);
                  v31 = atow(v30);
                  std::wstring::operator=(v62, v31);
                  v32 = (const char *)std::string::c_str((char *)v29 + 140);
                  v33 = atow(v32);
                  std::wstring::wstring(v60, v33);
                  v39 = *((_DWORD *)v29 + 12);
                  v36 = v12[27];
                  LOBYTE(v64) = 8;
                  sub_1000638E(v36, (int)v62, (int)v60, v39, 0);
                  LOBYTE(v64) = 6;
                  std::wstring::~wstring(v60);
                }
                LOBYTE(v64) = 4;
                std::wstring::~wstring(v62);
                LOBYTE(v64) = 2;
                std::wstring::~wstring(v63);
              }
              v14 = v47;
            }
            LOBYTE(v64) = 1;
            if ( v14 )
              operator delete(v14);
            v47 = 0;
            v48 = 0;
            v49 = 0;
          }
          Function = v54;
        }
        sub_10017F2B();
        v34 = sub_1000194C(0);
        (*(void (__thiscall **)(struct GameClient::Function *, int, unsigned int, int))(*(_DWORD *)Function + 64))(
          Function,
          v34,
          a2,
          -1);
        LOBYTE(v64) = 0;
        sub_10012B7A();
        if ( v51 )
          operator delete(v51);
      }
    }
  }
}
