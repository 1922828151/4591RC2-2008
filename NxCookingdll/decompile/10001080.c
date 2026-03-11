/*
 * func-name: sub_10001080
 * func-address: 0x10001080
 * callers: none
 * callees: 0x10001570
 */

void __thiscall sub_10001080(int this)
{
  if ( (*(_DWORD *)(this + 20))-- == 1 )
  {
    *(_BYTE *)(this + 24) = 0;
    if ( !std::vector<void *>::size(this - 24) )
    {
      if ( dword_100580A4 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_100580A4 + 24) + 32))(dword_100580A4 + 24, 1);
      dword_100580A4 = 0;
    }
  }
}
