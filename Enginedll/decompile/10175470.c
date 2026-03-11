/*
 * func-name: ?SubmitLoadTexture@AsyncLoader@@QAEHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAsyncLoaderReport@@@Z
 * func-address: 0x10175470
 * callers: 0x100e34c0
 * callees: 0x10015b30, 0x1001e050, 0x10031ec0, 0x10032240, 0x10032870, 0x1010fd40, 0x101760a0, 0x10176a10, 0x10177070, 0x101770d0, 0x101777f0, 0x101779b0, 0x1017a310, 0x1017a610
 */

int __thiscall AsyncLoader::SubmitLoadTexture(int this, int a2, int a3)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // ebp
  char *v9; // ebx
  int v10; // esi
  int v12; // [esp+10h] [ebp-210h] BYREF
  int v13; // [esp+14h] [ebp-20Ch]
  _BYTE v14[28]; // [esp+1Ch] [ebp-204h] BYREF
  int v15; // [esp+38h] [ebp-1E8h]
  _BYTE v16[28]; // [esp+3Ch] [ebp-1E4h] BYREF
  int v17; // [esp+58h] [ebp-1C8h]
  int v18; // [esp+5Ch] [ebp-1C4h]
  _DWORD v19[2]; // [esp+60h] [ebp-1C0h] BYREF
  _BYTE v20[28]; // [esp+68h] [ebp-1B8h] BYREF
  int v21; // [esp+84h] [ebp-19Ch]
  int v22; // [esp+88h] [ebp-198h]
  int v23[7]; // [esp+8Ch] [ebp-194h] BYREF
  char v24[28]; // [esp+A8h] [ebp-178h] BYREF
  char v25[16]; // [esp+C4h] [ebp-15Ch] BYREF
  char v26[16]; // [esp+D4h] [ebp-14Ch] BYREF
  char v27[16]; // [esp+E4h] [ebp-13Ch] BYREF
  char v28[16]; // [esp+F4h] [ebp-12Ch] BYREF
  int v29; // [esp+104h] [ebp-11Ch] BYREF
  int v30[7]; // [esp+108h] [ebp-118h] BYREF
  char v31[28]; // [esp+124h] [ebp-FCh] BYREF
  int v32[37]; // [esp+180h] [ebp-A0h] BYREF
  int v33; // [esp+21Ch] [ebp-4h]

  sub_1017A310(v14, a2);
  v33 = 0;
  sub_1017A610(v14);
  sub_10176A10(v23);
  LOBYTE(v33) = 1;
  sub_1010FD40((_DWORD *)(this + 64), &v12, (int)v14);
  v4 = v12;
  v5 = *(_DWORD *)(this + 72);
  if ( !v12 || v12 != this + 68 )
    invalid_parameter_noinfo();
  if ( v13 == v5 )
  {
    sub_10015B30(v23, (int)v14);
    v6 = sub_10177070(v14, v23);
    LOBYTE(v33) = 2;
    sub_101779B0(&v12, v6);
    LOBYTE(v33) = 1;
    sub_10032240(v32);
  }
  else
  {
    if ( !v4 )
      invalid_parameter_noinfo();
    if ( v13 == *(_DWORD *)(v4 + 4) )
      invalid_parameter_noinfo();
    sub_101777F0(v13 + 36);
  }
  std::string::string(v16);
  LOBYTE(v33) = 3;
  v17 = a3;
  std::string::operator=(v16, v14);
  v7 = ++*(_DWORD *)(this + 4);
  v18 = 0;
  v15 = v7;
  v19[0] = v7;
  v19[1] = v7;
  std::string::string(v20, v16);
  v21 = v17;
  v22 = v18;
  LOBYTE(v33) = 4;
  sub_101760A0(&v12, v19);
  LOBYTE(v33) = 3;
  std::string::~string(v20);
  v29 = -1;
  sub_10176A10(v30);
  LOBYTE(v33) = 5;
  v29 = v15;
  std::string::operator=(v30, v23);
  std::string::operator=(v31, v24);
  sub_101770D0(v25);
  sub_101770D0(v26);
  sub_101770D0(v27);
  sub_101770D0(v28);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 128));
  v8 = *(_DWORD *)(this + 108);
  v9 = sub_10032870(v8, *(_DWORD *)(v8 + 4), &v29);
  sub_1001E050((_DWORD *)(this + 104), 1u);
  *(_DWORD *)(v8 + 4) = v9;
  **((_DWORD **)v9 + 1) = v9;
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 128));
  v10 = *(_DWORD *)(this + 4);
  LOBYTE(v33) = 3;
  sub_10031EC0(v30);
  LOBYTE(v33) = 1;
  std::string::~string(v16);
  LOBYTE(v33) = 0;
  sub_10031EC0(v23);
  v33 = -1;
  std::string::~string(v14);
  return v10;
}
