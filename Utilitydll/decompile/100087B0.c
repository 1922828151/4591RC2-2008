/*
 * func-name: sub_100087B0
 * func-address: 0x100087b0
 * callers: 0x10002190
 * callees: 0x100086c0, 0x10018cf2
 */

int __userpurge sub_100087B0@<eax>(int a1@<esi>, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD **v6; // ecx
  _DWORD *v7; // eax
  bool v8; // zf
  _DWORD *v9; // edi
  int v11; // [esp+4h] [ebp-4h]

  v6 = *(_DWORD ***)(a1 + 4);
  v7 = *v6;
  *v6 = v6;
  *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) = *(_DWORD *)(a1 + 4);
  v8 = v7 == *(_DWORD **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v8 )
  {
    do
    {
      v9 = (_DWORD *)*v7;
      operator delete(v7);
      v7 = v9;
    }
    while ( v9 != *(_DWORD **)(a1 + 4) );
  }
  return sub_100086C0(a1, v11, a1, **(_DWORD **)(a1 + 4), a3, a4, a5, a6);
}
