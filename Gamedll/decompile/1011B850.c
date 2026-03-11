/*
 * func-name: sub_1011B850
 * func-address: 0x1011b850
 * callers: 0x1000dc4c
 * callees: 0x10011cd4, 0x100129d6
 */

_DWORD *__userpurge sub_1011B850@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  int v13; // edi
  int i; // esi
  _DWORD *result; // eax
  int v16; // [esp-8h] [ebp-10h]
  int v17; // [esp-4h] [ebp-Ch]

  v8 = a5;
  if ( !a5 || a5 != a7 )
    _invalid_parameter_noinfo();
  v10 = a6;
  if ( a6 != a8 )
  {
    v17 = a2;
    v16 = a3;
    v11 = sub_10011CD4(a8, *(_DWORD *)(a1 + 8), a6);
    v12 = *(_DWORD *)(a1 + 8);
    v13 = v11;
    for ( i = v11; i != v12; i += 936 )
      sub_100129D6(v16, v17);
    v10 = a6;
    v8 = a5;
    *(_DWORD *)(a1 + 8) = v13;
  }
  result = a4;
  *a4 = v8;
  a4[1] = v10;
  return result;
}
