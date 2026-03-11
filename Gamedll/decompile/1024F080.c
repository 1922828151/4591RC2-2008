/*
 * func-name: sub_1024F080
 * func-address: 0x1024f080
 * callers: 0x10019303
 * callees: 0x1001971d, 0x102c9d50
 */

int *__usercall sub_1024F080@<eax>(int a1@<edi>, int a2@<esi>, int *a3, int *a4, int *a5)
{
  int *v5; // ebx
  int *v6; // edi
  _DWORD *v7; // esi
  bool v8; // zf
  int v9; // eax
  int v11; // [esp-8h] [ebp-10h]
  int v12; // [esp-4h] [ebp-Ch]

  v5 = a4;
  if ( a3 == a4 )
    return a5;
  v12 = a2;
  v11 = a1;
  v6 = a5;
  do
  {
    v7 = (_DWORD *)*--v6;
    --v5;
    if ( v7 )
    {
      v8 = v7[9]-- == 1;
      if ( v8 )
      {
        sub_1001971D(v11, v12);
        operator delete(v7);
      }
    }
    v9 = *v5;
    v8 = *v5 == 0;
    *v6 = *v5;
    if ( !v8 )
      ++*(_DWORD *)(v9 + 36);
  }
  while ( v5 != a3 );
  return v6;
}
