/*
 * func-name: ?CachePacket@AsyncLoader@@QAEPAUAsyncPacket@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10174aa0
 * callers: 0x10116db0, 0x10174d80
 * callees: 0x100109c0, 0x10031ec0, 0x10032240, 0x100956d0, 0x10095ca0, 0x10095cf0, 0x1010fd40, 0x1011b490, 0x10176a10, 0x10177070, 0x101779b0, 0x1017a310, 0x1017a610
 */

int __thiscall AsyncLoader::CachePacket(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // ebp
  int v7; // ebx
  char *v8; // eax
  char *v9; // esi
  int v10; // esi
  const char *v11; // eax
  int v13; // eax
  char *v14; // esi
  int v15; // edi
  char v16; // [esp-20h] [ebp-1E0h] BYREF
  int v17; // [esp-1Ch] [ebp-1DCh]
  int v18; // [esp-18h] [ebp-1D8h]
  int v19; // [esp-14h] [ebp-1D4h]
  int v20; // [esp-10h] [ebp-1D0h]
  int v21; // [esp-Ch] [ebp-1CCh]
  int v22; // [esp-8h] [ebp-1C8h]
  const char *v23; // [esp-4h] [ebp-1C4h]
  char *v24; // [esp+10h] [ebp-1B0h] BYREF
  int v25; // [esp+14h] [ebp-1ACh]
  _BYTE v26[4]; // [esp+1Ch] [ebp-1A4h] BYREF
  _DWORD v27[6]; // [esp+20h] [ebp-1A0h] BYREF
  _BYTE v28[28]; // [esp+38h] [ebp-188h] BYREF
  _BYTE v29[28]; // [esp+54h] [ebp-16Ch] BYREF
  _BYTE v30[28]; // [esp+70h] [ebp-150h] BYREF
  _BYTE v31[28]; // [esp+8Ch] [ebp-134h] BYREF
  int v32[7]; // [esp+A8h] [ebp-118h] BYREF
  _BYTE v33[92]; // [esp+C4h] [ebp-FCh] BYREF
  int v34[37]; // [esp+120h] [ebp-A0h] BYREF
  int v35; // [esp+1BCh] [ebp-4h]

  v3 = std::operator+<char>(v31, "CachePacket(", a2);
  v35 = 0;
  v4 = std::operator+<char>(v29, v3, "): ");
  LOBYTE(v35) = 1;
  FuncTimer::FuncTimer(v28, v4);
  LOBYTE(v35) = 3;
  std::string::~string(v29);
  LOBYTE(v35) = 4;
  std::string::~string(v31);
  std::string::string(v26, a2);
  LOBYTE(v35) = 5;
  v5 = sub_1017A310(v30, v26);
  LOBYTE(v35) = 6;
  std::string::operator=(v26, v5);
  LOBYTE(v35) = 5;
  std::string::~string(v30);
  sub_1017A610(v26);
  v6 = this + 16;
  sub_1010FD40(this + 16, &v24, (int)v26);
  v7 = this[18];
  v8 = (char *)(this + 17);
  v9 = v24;
  if ( !v24 || v24 != v8 )
    invalid_parameter_noinfo();
  if ( v25 != v7 )
  {
    if ( !v9 )
      invalid_parameter_noinfo();
    if ( v25 == *((_DWORD *)v9 + 1) )
      invalid_parameter_noinfo();
    v10 = v25 + 36;
LABEL_19:
    LOBYTE(v35) = 4;
    std::string::~string(v26);
    v35 = -1;
    FuncTimer::~FuncTimer((FuncTimer *)v28);
    return v10;
  }
  sub_10176A10(v32);
  LOBYTE(v35) = 7;
  std::string::operator=(v32, v26);
  std::string::operator=(v33, a2);
  v23 = (const char *)v32;
  v24 = &v16;
  std::string::string(&v16, a2);
  LOBYTE(v35) = 8;
  Serializer::Instance();
  LOBYTE(v35) = 7;
  if ( Serializer::Parse(v16, v17, v18, v19, v20, v21, v22, v23) )
  {
    v13 = sub_10177070(v26, v32);
    LOBYTE(v35) = 9;
    sub_101779B0(&v24, v13);
    LOBYTE(v35) = 7;
    sub_10032240(v34);
    sub_1010FD40(v6, &v24, (int)v26);
    v14 = v24;
    if ( !v24 )
      invalid_parameter_noinfo();
    v15 = v25;
    if ( v25 == *((_DWORD *)v14 + 1) )
      invalid_parameter_noinfo();
    v10 = v15 + 36;
    LOBYTE(v35) = 5;
    sub_10031EC0(v32);
    goto LABEL_19;
  }
  v11 = (const char *)v27[0];
  if ( v27[5] < 0x10u )
    v11 = (const char *)v27;
  Error("Can't parse file %s", v11);
  LOBYTE(v35) = 5;
  sub_10031EC0(v32);
  LOBYTE(v35) = 4;
  std::string::~string(v26);
  v35 = -1;
  FuncTimer::~FuncTimer((FuncTimer *)v28);
  return 0;
}
