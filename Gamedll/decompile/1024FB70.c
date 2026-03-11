/*
 * func-name: sub_1024FB70
 * func-address: 0x1024fb70
 * callers: 0x10016180
 * callees: 0x1001971d, 0x102c9d50
 */

void __usercall sub_1024FB70(int a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  _DWORD **v4; // eax
  _DWORD *v5; // esi
  bool v6; // zf
  _DWORD *v7; // edi
  _DWORD *v8; // ebp
  int v9; // [esp-8h] [ebp-10h]
  int v10; // [esp-4h] [ebp-Ch]

  v4 = *(_DWORD ***)(a1 + 4);
  v5 = *v4;
  *v4 = v4;
  *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) = *(_DWORD *)(a1 + 4);
  v6 = v5 == *(_DWORD **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v6 )
  {
    v10 = a2;
    v9 = a3;
    do
    {
      v7 = (_DWORD *)v5[3];
      v8 = (_DWORD *)*v5;
      if ( v7 )
      {
        v6 = v7[9]-- == 1;
        if ( v6 )
        {
          sub_1001971D(v9, v10);
          operator delete(v7);
        }
      }
      operator delete(v5);
      v5 = v8;
    }
    while ( v8 != *(_DWORD **)(a1 + 4) );
  }
}
