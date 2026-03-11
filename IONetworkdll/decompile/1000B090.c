/*
 * func-name: sub_1000B090
 * func-address: 0x1000b090
 * callers: 0x10009e40, 0x10009fa0, 0x1000a070, 0x1000be70, 0x1002f880, 0x10033f30, 0x10047f00
 * callees: 0x1000b5e0, 0x1000bd30, 0x1004e98e
 */

int __userpurge sub_1000B090@<eax>(int a1@<eax>, int a2)
{
  int v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // esi
  int result; // eax

  v3 = *(_DWORD *)(a1 + 16);
  if ( (((_BYTE)v3 + *(_BYTE *)(a1 + 12)) & 3) == 0 && *(_DWORD *)(a1 + 8) <= (unsigned int)(v3 + 4) >> 2 )
    sub_1000B5E0();
  v4 = *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 12);
  v5 = *(_DWORD *)(a1 + 8);
  v6 = v4 >> 2;
  if ( v5 <= v4 >> 2 )
    v6 -= v5;
  if ( !*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v6) )
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v6) = operator new(16);
  result = sub_1000BD30(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v6) + 4 * (v4 & 3));
  ++*(_DWORD *)(a1 + 16);
  return result;
}
