/*
 * func-name: sub_10002E80
 * func-address: 0x10002e80
 * callers: 0x100013d0
 * callees: 0x10002d90, 0x100294f2
 */

int __userpurge sub_10002E80@<eax>(int a1@<esi>, int a2, int a3, int a4, char a5, int a6)
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
  return sub_10002D90(a1, v11, a1, **(_DWORD **)(a1 + 4), a3, a4, a5, a6);
}
