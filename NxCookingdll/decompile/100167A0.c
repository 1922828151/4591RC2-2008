/*
 * func-name: sub_100167A0
 * func-address: 0x100167a0
 * callers: 0x1000ce00, 0x10017ac0
 * callees: 0x100161a0, 0x100161f0, 0x10034ca4, 0x10035700
 */

char __cdecl sub_100167A0(unsigned int a1, unsigned int a2, int a3, int a4, char a5)
{
  void *v5; // esp
  unsigned int i; // eax
  void *v7; // esp
  _BYTE v9[8]; // [esp+0h] [ebp-Ch] BYREF

  if ( a1 > 0xFF )
  {
    if ( a1 > 0xFFFF )
    {
      LOBYTE(i) = sub_100161F0(a3, a2, a5, a4);
    }
    else
    {
      v7 = alloca(2 * a2);
      sub_100161A0((int)v9, a2, a5, a4);
      for ( i = 0; i < a2; ++i )
        *(_DWORD *)(a3 + 4 * i) = *(unsigned __int16 *)&v9[2 * i];
    }
  }
  else
  {
    v5 = alloca(a2);
    (*(void (__thiscall **)(int, _BYTE *, unsigned int))(*(_DWORD *)a4 + 24))(a4, v9, a2);
    for ( i = 0; i < a2; ++i )
      *(_DWORD *)(a3 + 4 * i) = (unsigned __int8)v9[i];
  }
  return i;
}
