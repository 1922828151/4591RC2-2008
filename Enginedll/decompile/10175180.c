/*
 * func-name: ?SubmitLoadAnimation@AsyncLoader@@QAEHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_NPAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@PAVAsyncLoaderReport@@@Z
 * func-address: 0x10175180
 * callers: none
 * callees: 0x1001e050, 0x10031ec0, 0x10032240, 0x10032870, 0x1010fd40, 0x101760a0, 0x10176a10, 0x10177070, 0x101770d0, 0x10177850, 0x101779b0, 0x1017a310, 0x1017a610
 */

int __thiscall AsyncLoader::SubmitLoadAnimation(int this, int a2, int a3, char a4, int a5, int a6)
{
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // ebp
  char *v11; // ebx
  int v12; // esi
  _DWORD v14[3]; // [esp+10h] [ebp-210h] BYREF
  _BYTE v15[28]; // [esp+1Ch] [ebp-204h] BYREF
  int v16; // [esp+38h] [ebp-1E8h]
  _BYTE v17[28]; // [esp+3Ch] [ebp-1E4h] BYREF
  int v18; // [esp+58h] [ebp-1C8h]
  int v19; // [esp+5Ch] [ebp-1C4h]
  _DWORD v20[2]; // [esp+60h] [ebp-1C0h] BYREF
  _BYTE v21[28]; // [esp+68h] [ebp-1B8h] BYREF
  int v22; // [esp+84h] [ebp-19Ch]
  int v23; // [esp+88h] [ebp-198h]
  int v24; // [esp+8Ch] [ebp-194h] BYREF
  int v25[7]; // [esp+90h] [ebp-190h] BYREF
  char v26[28]; // [esp+ACh] [ebp-174h] BYREF
  int v27[7]; // [esp+108h] [ebp-118h] BYREF
  char v28[28]; // [esp+124h] [ebp-FCh] BYREF
  char v29[16]; // [esp+140h] [ebp-E0h] BYREF
  char v30[16]; // [esp+150h] [ebp-D0h] BYREF
  char v31[16]; // [esp+160h] [ebp-C0h] BYREF
  char v32[16]; // [esp+170h] [ebp-B0h] BYREF
  int v33[37]; // [esp+180h] [ebp-A0h] BYREF
  int v34; // [esp+21Ch] [ebp-4h]

  sub_1017A310(v15, a2);
  v34 = 0;
  sub_1017A610(v15);
  sub_10176A10(v27);
  LOBYTE(v34) = 1;
  sub_1010FD40((_DWORD *)(this + 64), v14, (int)v15);
  v7 = *(_DWORD *)(this + 72);
  if ( !v14[0] || v14[0] != this + 68 )
    invalid_parameter_noinfo();
  if ( v14[1] == v7 )
  {
    sub_10177850(v15, a3, a4, a5);
    v8 = sub_10177070(v15, v27);
    LOBYTE(v34) = 2;
    sub_101779B0(v14, v8);
    LOBYTE(v34) = 1;
    sub_10032240(v33);
  }
  std::string::string(v17);
  LOBYTE(v34) = 3;
  v18 = a6;
  std::string::operator=(v17, v15);
  v9 = ++*(_DWORD *)(this + 4);
  v19 = 0;
  v16 = v9;
  v20[0] = v9;
  v20[1] = v9;
  std::string::string(v21, v17);
  v22 = v18;
  v23 = v19;
  LOBYTE(v34) = 4;
  sub_101760A0(v14, v20);
  LOBYTE(v34) = 3;
  std::string::~string(v21);
  v24 = -1;
  sub_10176A10(v25);
  v24 = v16;
  LOBYTE(v34) = 5;
  std::string::operator=(v25, v27);
  std::string::operator=(v26, v28);
  sub_101770D0(v29);
  sub_101770D0(v30);
  sub_101770D0(v31);
  sub_101770D0(v32);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 128));
  v10 = *(_DWORD *)(this + 108);
  v11 = sub_10032870(v10, *(_DWORD *)(v10 + 4), &v24);
  sub_1001E050((_DWORD *)(this + 104), 1u);
  *(_DWORD *)(v10 + 4) = v11;
  **((_DWORD **)v11 + 1) = v11;
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 128));
  v12 = *(_DWORD *)(this + 4);
  LOBYTE(v34) = 3;
  sub_10031EC0(v25);
  LOBYTE(v34) = 1;
  std::string::~string(v17);
  LOBYTE(v34) = 0;
  sub_10031EC0(v27);
  v34 = -1;
  std::string::~string(v15);
  return v12;
}
