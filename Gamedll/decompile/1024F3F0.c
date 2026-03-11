/*
 * func-name: sub_1024F3F0
 * func-address: 0x1024f3f0
 * callers: 0x1001413c
 * callees: 0x1001971d, 0x102c9d50
 */

void __usercall sub_1024F3F0(int a1@<ebx>, int a2@<esi>, _DWORD **a3, _DWORD **a4, _DWORD *a5)
{
  _DWORD **v5; // edi
  _DWORD *v6; // esi
  bool v7; // zf
  _DWORD *v8; // eax
  int v9; // [esp-8h] [ebp-10h]
  int v10; // [esp-4h] [ebp-Ch]

  v5 = a3;
  if ( a3 != a4 )
  {
    v10 = a1;
    v9 = a2;
    do
    {
      v6 = *v5;
      if ( *v5 )
      {
        v7 = v6[9]-- == 1;
        if ( v7 )
        {
          sub_1001971D(v9, v10);
          operator delete(v6);
        }
      }
      v8 = (_DWORD *)*a5;
      v7 = *a5 == 0;
      *v5 = (_DWORD *)*a5;
      if ( !v7 )
        ++v8[9];
      ++v5;
    }
    while ( v5 != a4 );
  }
}
