/*
 * func-name: sub_1010D450
 * func-address: 0x1010d450
 * callers: 0x1001247c
 * callees: 0x10003bed, 0x1000d49a
 */

_DWORD *__userpurge sub_1010D450@<eax>(
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
  int v12; // edi
  int v13; // ebx
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
    v11 = sub_1000D49A(a8, *(_DWORD *)(a1 + 8), a6);
    v12 = *(_DWORD *)(a1 + 8);
    v13 = v11;
    for ( i = v11; i != v12; i += 84 )
      sub_10003BED(v16, v17);
    v10 = a6;
    v8 = a5;
    *(_DWORD *)(a1 + 8) = v13;
  }
  result = a4;
  *a4 = v8;
  a4[1] = v10;
  return result;
}
