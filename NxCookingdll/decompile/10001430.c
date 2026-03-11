/*
 * func-name: sub_10001430
 * func-address: 0x10001430
 * callers: 0x100245a0
 * callees: 0x10001390
 */

int __cdecl sub_10001430(int a1, int a2, int (__stdcall ***a3)(int, int, int, int, int), _DWORD *a4)
{
  _DWORD *v5; // eax
  int (__stdcall ***v6)(int, int, int, int, int); // ecx
  _DWORD *v7; // eax

  *a4 = 0;
  if ( a1 == 34078720 )
  {
    v5 = (_DWORD *)dword_100580A4;
    if ( !dword_100580A4 )
    {
      v6 = a3;
      if ( !a3 )
        v6 = off_1005600C;
      dword_100580A0 = (int)v6;
      v7 = (_DWORD *)((int (__thiscall *)(int (__stdcall ***)(int, int, int, int, int), int, int))(*v6)[2])(v6, 56, 37);
      if ( v7 )
        v5 = sub_10001390(v7);
      else
        v5 = 0;
      dword_100580A4 = (int)v5;
    }
    (*(void (__thiscall **)(_DWORD *, int))(v5[6] + 4))(v5 + 6, a2);
    *(_BYTE *)(dword_100580A4 + 48) = 1;
    ++*(_DWORD *)(dword_100580A4 + 44);
    return dword_100580A4 + 24;
  }
  else
  {
    *a4 = 2;
    return 0;
  }
}
