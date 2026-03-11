/*
 * func-name: sub_1024FA70
 * func-address: 0x1024fa70
 * callers: 0x100086d4
 * callees: 0x1001971d, 0x102c9d50
 */

void __usercall sub_1024FA70(int a1@<esi>, _DWORD **a2, _DWORD **a3)
{
  _DWORD **v3; // edi
  _DWORD *v4; // esi
  int v6; // [esp-4h] [ebp-Ch]
  int v7; // [esp+0h] [ebp-8h]

  v3 = a2;
  if ( a2 != a3 )
  {
    v6 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        if ( v4[9]-- == 1 )
        {
          sub_1001971D(v6, v7);
          operator delete(v4);
        }
      }
      ++v3;
    }
    while ( v3 != a3 );
  }
}
