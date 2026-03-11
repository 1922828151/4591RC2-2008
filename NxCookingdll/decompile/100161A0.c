/*
 * func-name: sub_100161A0
 * func-address: 0x100161a0
 * callers: 0x1000cc30, 0x10016540, 0x100167a0
 * callees: none
 */

char __cdecl sub_100161A0(int a1, unsigned int a2, char a3, int a4)
{
  unsigned int i; // eax
  char v5; // cl

  (*(void (__thiscall **)(int, int, unsigned int))(*(_DWORD *)a4 + 24))(a4, a1, 2 * a2);
  if ( a3 )
  {
    for ( i = 0; i < a2; ++i )
    {
      v5 = *(_BYTE *)(a1 + 2 * i);
      *(_BYTE *)(a1 + 2 * i) = *(_BYTE *)(a1 + 2 * i + 1);
      *(_BYTE *)(a1 + 2 * i + 1) = v5;
    }
  }
  return 1;
}
