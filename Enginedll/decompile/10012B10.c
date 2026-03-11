/*
 * func-name: sub_10012B10
 * func-address: 0x10012b10
 * callers: 0x10013480
 * callees: 0x1000fc90, 0x10011bf0
 */

_DWORD *__cdecl sub_10012B10(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        int a10)
{
  int v10; // ebp
  _DWORD *v11; // edi
  _DWORD *v12; // ebx
  _DWORD *v13; // edi
  int v14; // edi
  _DWORD *v16; // [esp-2Ch] [ebp-44h]
  int v17; // [esp-28h] [ebp-40h]
  _DWORD *v18; // [esp-24h] [ebp-3Ch]
  _DWORD *v19; // [esp-20h] [ebp-38h]
  _DWORD *v20; // [esp-14h] [ebp-2Ch]
  int v21; // [esp-10h] [ebp-28h]

  v10 = a7;
  v11 = a6;
  sub_10011BF0((int *)&a8, a1, a7 + 32 * (a6 - a3) - a4);
  v12 = a8;
  v20 = a9;
  v21 = a10;
  if ( !a8 )
    invalid_parameter_noinfo();
  v19 = v11;
  v13 = a5;
  if ( !a5 )
    invalid_parameter_noinfo();
  v18 = v13;
  v14 = a2;
  v16 = a3;
  v17 = a4;
  if ( !a2 )
    invalid_parameter_noinfo();
  sub_1000FC90(&a2, v14, v16, v17, v18, v19, v10, v12, v20, v21);
  return a1;
}
