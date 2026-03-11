/*
 * func-name: sub_1000C450
 * func-address: 0x1000c450
 * callers: 0x1000be70
 * callees: 0x1000b5e0, 0x1000bd30, 0x1004e98e
 */

void __userpurge sub_1000C450(int a1@<eax>, int a2)
{
  int v3; // edi
  unsigned int v4; // edi
  unsigned int v5; // esi
  int v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+4h] [ebp-8h]

  if ( (*(_BYTE *)(a1 + 12) & 3) == 0 && *(_DWORD *)(a1 + 8) <= (unsigned int)(*(_DWORD *)(a1 + 16) + 4) >> 2 )
    sub_1000B5E0(a1, v6, v7);
  v3 = *(_DWORD *)(a1 + 12);
  if ( !v3 )
    v3 = 4 * *(_DWORD *)(a1 + 8);
  v4 = v3 - 1;
  v5 = v4 >> 2;
  if ( !*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * (v4 >> 2)) )
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) = operator new(16);
  sub_1000BD30((Outpop::Utility::Ref_Object **)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) + 4 * (v4 & 3)));
  ++*(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 12) = v4;
}
