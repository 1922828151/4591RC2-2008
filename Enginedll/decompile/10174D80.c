/*
 * func-name: ?SubmitLoadModel@AsyncLoader@@QAEHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAsyncLoaderReport@@@Z
 * func-address: 0x10174d80
 * callers: 0x10116af0
 * callees: 0x1001db90, 0x10020910, 0x1002d0a0, 0x10031ec0, 0x100ee890, 0x1010fd40, 0x10171950, 0x10172460, 0x10174aa0, 0x10175780, 0x101757c0, 0x101757f0, 0x10175f50, 0x101760a0, 0x10176a10, 0x10176ac0, 0x1017a310, 0x1017a610, 0x101a2500
 */

int __thiscall AsyncLoader::SubmitLoadModel(AsyncLoader *this, int a2, int a3)
{
  int v4; // eax
  const char *v5; // eax
  int v6; // esi
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  AsyncLoader *v14; // [esp+10h] [ebp-120h] BYREF
  int v15; // [esp+14h] [ebp-11Ch]
  int v16; // [esp+18h] [ebp-118h] BYREF
  void *v17; // [esp+1Ch] [ebp-114h]
  int v18; // [esp+20h] [ebp-110h]
  char v19[4]; // [esp+24h] [ebp-10Ch] BYREF
  char *v20[6]; // [esp+28h] [ebp-108h] BYREF
  int v21; // [esp+40h] [ebp-F0h] BYREF
  _BYTE v22[28]; // [esp+44h] [ebp-ECh] BYREF
  int v23; // [esp+60h] [ebp-D0h]
  int v24; // [esp+64h] [ebp-CCh]
  _DWORD v25[2]; // [esp+68h] [ebp-C8h] BYREF
  _DWORD v26[3]; // [esp+70h] [ebp-C0h] BYREF
  _DWORD v27[2]; // [esp+7Ch] [ebp-B4h] BYREF
  _BYTE v28[28]; // [esp+84h] [ebp-ACh] BYREF
  int v29; // [esp+A0h] [ebp-90h]
  int v30; // [esp+A4h] [ebp-8Ch]
  int v31; // [esp+A8h] [ebp-88h] BYREF
  int v32[30]; // [esp+ACh] [ebp-84h] BYREF
  int v33; // [esp+12Ch] [ebp-4h]

  std::string::string(v22);
  v33 = 0;
  v23 = a3;
  std::string::string(v19, a2);
  LOBYTE(v33) = 1;
  v4 = sub_1017A310(v27, v19);
  LOBYTE(v33) = 2;
  std::string::operator=(v19, v4);
  LOBYTE(v33) = 1;
  std::string::~string(v27);
  sub_1017A610(v19);
  v5 = v20[0];
  if ( v20[5] < (char *)0x10 )
    v5 = (const char *)v20;
  if ( StaticModel::FindModelFromCache(v5) )
  {
    std::string::operator=(v22, v19);
    v21 = ++*((_DWORD *)this + 1);
    v24 = 2;
    v27[0] = v21;
    v27[1] = v21;
    std::string::string(v28, v22);
    v29 = v23;
    v30 = v24;
    LOBYTE(v33) = 3;
    sub_101760A0(v26, v27);
    LOBYTE(v33) = 1;
    std::string::~string(v28);
    v6 = v21;
LABEL_17:
    LOBYTE(v33) = 0;
    std::string::~string(v19);
    v33 = -1;
    goto LABEL_18;
  }
  if ( !AsyncLoader::CachePacket(this, a2) )
    goto LABEL_6;
  sub_1010FD40((_DWORD *)this + 16, v25, (int)v19);
  v8 = *((_DWORD *)this + 18);
  if ( !v25[0] || (AsyncLoader *)v25[0] != (AsyncLoader *)((char *)this + 68) )
    invalid_parameter_noinfo();
  if ( v25[1] == v8 )
  {
LABEL_6:
    LOBYTE(v33) = 0;
    std::string::~string(v19);
    v33 = -1;
    std::string::~string(v22);
    return -1;
  }
  std::string::operator=(v22, v19);
  v9 = ++*((_DWORD *)this + 1);
  v24 = 0;
  v21 = v9;
  v10 = sub_10175780(&v21, &v21);
  LOBYTE(v33) = 4;
  sub_101760A0(&v16, v10);
  LOBYTE(v33) = 1;
  std::string::~string(v28);
  sub_1010FD40((_DWORD *)this + 104, &v14, (int)v19);
  v11 = *((_DWORD *)this + 106);
  if ( !v14 || v14 != (AsyncLoader *)((char *)this + 420) )
    invalid_parameter_noinfo();
  if ( v15 != v11 )
  {
    sub_101757C0(&v14);
    sub_101757F0(&v21);
    v6 = *((_DWORD *)this + 1);
    goto LABEL_17;
  }
  v17 = sub_1001DB90();
  v18 = 0;
  LOBYTE(v33) = 5;
  v12 = sub_10175F50(v19, &v16);
  LOBYTE(v33) = 6;
  sub_10176AC0(v26, v12);
  LOBYTE(v33) = 5;
  sub_1002D0A0(v27);
  sub_1010FD40((_DWORD *)this + 104, v26, (int)v19);
  v14 = (AsyncLoader *)v26[0];
  v15 = v26[1];
  sub_101757C0(&v14);
  sub_101757F0(&v21);
  LOBYTE(v33) = 1;
  sub_10020910(&v16);
  operator delete(v17);
  v17 = 0;
  v31 = -1;
  sub_10176A10(v32);
  LOBYTE(v33) = 7;
  v31 = v21;
  v13 = sub_101757C0(v25);
  AsyncLoader::_filterPacket(this, (struct AsyncPacket *)v32, (const struct AsyncPacket *)(v13 + 28));
  AsyncLoader::AddPacketForProduce(this, (const struct ASYNC_SUBMIT_THREAD *)&v31);
  v6 = *((_DWORD *)this + 1);
  LOBYTE(v33) = 1;
  sub_10031EC0(v32);
  LOBYTE(v33) = 0;
  std::string::~string(v19);
  v33 = -1;
LABEL_18:
  std::string::~string(v22);
  return v6;
}
