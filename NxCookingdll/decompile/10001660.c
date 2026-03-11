/*
 * func-name: sub_10001660
 * func-address: 0x10001660
 * callers: 0x100016f0
 * callees: none
 */

int __thiscall sub_10001660(int this, int a2)
{
  int result; // eax
  bool v4; // zf
  int v5; // eax
  int v6; // eax

  result = a2;
  if ( a2 >= *(_DWORD *)(this + 8) && !*(_BYTE *)(this + 4) )
  {
    v4 = *(_DWORD *)(this + 16) == 0;
    *(_DWORD *)(this + 8) = (((unsigned int)a2 >> 15) + 1) << 15;
    if ( v4 )
    {
      if ( !dword_100580A4 )
        __debugbreak();
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)(dword_100580A4 + 24) + 20))(dword_100580A4 + 24);
      result = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v5 + 8))(v5, *(_DWORD *)(this + 8), 132);
      *(_DWORD *)(this + 16) = result;
    }
    else
    {
      if ( !dword_100580A4 )
        __debugbreak();
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(dword_100580A4 + 24) + 20))(dword_100580A4 + 24);
      result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v6 + 16))(
                 v6,
                 *(_DWORD *)(this + 16),
                 *(_DWORD *)(this + 8));
      *(_DWORD *)(this + 16) = result;
    }
  }
  return result;
}
