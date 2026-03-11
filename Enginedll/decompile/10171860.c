/*
 * func-name: ?GetMemCache@AsyncLoader@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAPAEAAI@Z
 * func-address: 0x10171860
 * callers: 0x10005d50, 0x10044cf0, 0x1009e630, 0x100f4ca0
 * callees: 0x1010fd40, 0x1017a310, 0x1017a610
 */

char __thiscall AsyncLoader::GetMemCache(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v10; // [esp+10h] [ebp-30h] BYREF
  int v11; // [esp+14h] [ebp-2Ch]
  _BYTE v12[28]; // [esp+18h] [ebp-28h] BYREF
  int v13; // [esp+3Ch] [ebp-4h]

  sub_1017A310(v12, a2);
  v13 = 0;
  sub_1017A610(v12);
  sub_1010FD40(this + 6, &v10, (int)v12);
  v5 = this[8];
  v6 = this + 7;
  v7 = v10;
  if ( !v10 || v10 != v6 )
    invalid_parameter_noinfo();
  v8 = v11;
  if ( v11 == v5 )
  {
    v13 = -1;
    std::string::~string(v12);
    return 0;
  }
  else
  {
    if ( !v7 )
      invalid_parameter_noinfo();
    if ( v8 == v7[1] )
      invalid_parameter_noinfo();
    *a3 = *(_DWORD *)(v8 + 92);
    if ( v8 == v7[1] )
      invalid_parameter_noinfo();
    *a4 = *(_DWORD *)(v8 + 96);
    v13 = -1;
    std::string::~string(v12);
    return 1;
  }
}
