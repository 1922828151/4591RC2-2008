/*
 * func-name: sub_10037230
 * func-address: 0x10037230
 * callers: 0x1015c790
 * callees: 0x1010fd40
 */

int __thiscall sub_10037230(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // ebx
  int v13; // esi
  _DWORD *v15; // [esp+10h] [ebp-14h] BYREF
  int v16; // [esp+14h] [ebp-10h]
  int v17; // [esp+20h] [ebp-4h]

  v17 = 0;
  sub_1010FD40(&v15, &a2);
  v9 = this[48];
  v10 = this + 47;
  v11 = v15;
  if ( !v15 || v15 != v10 )
    invalid_parameter_noinfo();
  v12 = v16;
  if ( v16 == v9 )
  {
    v13 = 0;
  }
  else
  {
    if ( !v11 )
      invalid_parameter_noinfo();
    if ( v12 == v11[1] )
      invalid_parameter_noinfo();
    v13 = *(_DWORD *)(v12 + 36);
  }
  v17 = -1;
  std::string::~string(&a2);
  return v13;
}
