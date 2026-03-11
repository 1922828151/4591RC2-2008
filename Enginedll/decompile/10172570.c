/*
 * func-name: ?SubmitLoadWorldNode@AsyncLoader@@QAEHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAsyncLoaderReport@@@Z
 * func-address: 0x10172570
 * callers: 0x1004e610
 * callees: 0x10031ec0, 0x1010fd40, 0x10172460, 0x101760a0, 0x10176a10, 0x101777f0
 */

int __thiscall AsyncLoader::SubmitLoadWorldNode(AsyncLoader *this, int a2, int a3)
{
  AsyncLoader *v4; // edi
  int v6; // eax
  int v7; // ebp
  int v8; // esi
  AsyncLoader *v9; // [esp+10h] [ebp-F0h] BYREF
  int v10; // [esp+14h] [ebp-ECh]
  int v11; // [esp+18h] [ebp-E8h]
  _BYTE v12[28]; // [esp+1Ch] [ebp-E4h] BYREF
  int v13; // [esp+38h] [ebp-C8h]
  int v14; // [esp+3Ch] [ebp-C4h]
  char v15[4]; // [esp+40h] [ebp-C0h] BYREF
  int v16; // [esp+44h] [ebp-BCh]
  _DWORD v17[2]; // [esp+4Ch] [ebp-B4h] BYREF
  _BYTE v18[28]; // [esp+54h] [ebp-ACh] BYREF
  int v19; // [esp+70h] [ebp-90h]
  int v20; // [esp+74h] [ebp-8Ch]
  int v21; // [esp+78h] [ebp-88h] BYREF
  int v22[30]; // [esp+7Ch] [ebp-84h] BYREF
  int v23; // [esp+FCh] [ebp-4h]

  sub_1010FD40((_DWORD *)this + 16, &v9, a2);
  v4 = v9;
  v16 = *((_DWORD *)this + 18);
  if ( !v9 || v9 != (AsyncLoader *)((char *)this + 68) )
    invalid_parameter_noinfo();
  if ( v10 == v16 )
    return -1;
  std::string::string(v12);
  v23 = 0;
  v13 = a3;
  std::string::operator=(v12, a2);
  v6 = ++*((_DWORD *)this + 1);
  v14 = 0;
  v11 = v6;
  v17[0] = v6;
  v17[1] = v6;
  std::string::string(v18, v12);
  v19 = v13;
  v20 = v14;
  LOBYTE(v23) = 1;
  sub_101760A0(v15, v17);
  LOBYTE(v23) = 0;
  std::string::~string(v18);
  v21 = -1;
  sub_10176A10(v22);
  LOBYTE(v23) = 2;
  v21 = v11;
  if ( !v4 )
    invalid_parameter_noinfo();
  v7 = v10;
  if ( v10 == *((_DWORD *)v4 + 1) )
    invalid_parameter_noinfo();
  sub_101777F0(v7 + 36);
  AsyncLoader::AddPacketForProduce(this, (const struct ASYNC_SUBMIT_THREAD *)&v21);
  v8 = *((_DWORD *)this + 1);
  LOBYTE(v23) = 0;
  sub_10031EC0(v22);
  v23 = -1;
  std::string::~string(v12);
  return v8;
}
