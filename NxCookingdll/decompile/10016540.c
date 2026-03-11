/*
 * func-name: sub_10016540
 * func-address: 0x10016540
 * callers: 0x1000ce00, 0x10014680
 * callees: 0x100161a0, 0x10034ca4, 0x10035700
 */

char __cdecl sub_10016540(unsigned __int16 a1, unsigned int a2, _WORD *a3, int a4, char a5)
{
  void *v5; // esp
  unsigned int i; // eax
  void *v7; // esp
  unsigned int v8; // edx
  _BYTE v10[8]; // [esp+0h] [ebp-Ch] BYREF

  if ( a1 > 0xFFu )
  {
    v7 = alloca(2 * a2);
    LOBYTE(i) = sub_100161A0((int)v10, a2, a5, a4);
    if ( a2 )
    {
      i = (unsigned int)a3;
      v8 = a2;
      do
      {
        *(_WORD *)i = *(_WORD *)(v10 - (_BYTE *)a3 + i);
        i += 2;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v5 = alloca(a2);
    (*(void (__thiscall **)(int, _BYTE *, unsigned int))(*(_DWORD *)a4 + 24))(a4, v10, a2);
    for ( i = 0; i < a2; ++i )
      a3[i] = (unsigned __int8)v10[i];
  }
  return i;
}
