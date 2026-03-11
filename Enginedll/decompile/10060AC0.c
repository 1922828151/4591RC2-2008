/*
 * func-name: sub_10060AC0
 * func-address: 0x10060ac0
 * callers: 0x10060b40
 * callees: 0x10061620, 0x10062a00
 */

char __fastcall sub_10060AC0(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  bool v5; // zf
  int v7; // [esp+8h] [ebp-4h] BYREF

  v3 = (_DWORD *)(dword_10284C68 + 44 * (unsigned __int16)a2);
  v5 = (v3[2] & *(_DWORD *)(a1 + 8)) == 0;
  v7 = a2;
  if ( v5 )
    return 1;
  if ( *(_DWORD *)(a1 + 16) )
  {
    if ( sub_10061620(&v7) != -1 )
      return 1;
    sub_10062A00(&v7);
  }
  else
  {
    if ( *v3 == a3 )
      return 1;
    *v3 = a3;
  }
  if ( *(_BYTE *)(a1 + 12) || (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)a1 + 4))(a1, v3) )
    return (***(int (__thiscall ****)(_DWORD, _DWORD))(a1 + 4))(*(_DWORD *)(a1 + 4), v3[1]);
  return 1;
}
