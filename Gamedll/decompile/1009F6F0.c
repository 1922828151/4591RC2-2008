/*
 * func-name: sub_1009F6F0
 * func-address: 0x1009f6f0
 * callers: 0x100163b0
 * callees: none
 */

char __thiscall sub_1009F6F0(int this)
{
  int v3; // esi
  int v4; // eax

  if ( !*(_BYTE *)(this + 156) || !*(_DWORD *)(this + 4) )
    return 0;
  v3 = 0;
  if ( ((int (*)(void))std::vector<Actor *>::size)() )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)std::vector<Actor *>::operator[](*(_DWORD *)(this + 4), v3);
      if ( v4 )
      {
        if ( *(_BYTE *)(v4 + 1064) )
          return 1;
      }
      if ( ++v3 >= (unsigned int)std::vector<Actor *>::size(*(_DWORD *)(this + 4)) )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    *(_BYTE *)(this + 156) = 0;
    return 0;
  }
}
