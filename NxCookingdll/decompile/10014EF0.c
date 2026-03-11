/*
 * func-name: sub_10014EF0
 * func-address: 0x10014ef0
 * callers: 0x10014c40, 0x10014ef0, 0x10015030, 0x100150a0, 0x10015160, 0x100151a0, 0x100151e0, 0x10015220
 * callees: 0x10014b90, 0x10014ef0
 */

_BYTE *__thiscall sub_10014EF0(_BYTE *this)
{
  char v2; // bl
  int **v3; // eax
  _DWORD *v4; // eax

  while ( this[24] )
  {
    this[25] *= 2;
    ++this[24];
    v2 = this[25];
    if ( this[24] == 8 )
    {
      this[24] = 0;
      v3 = (int **)sub_10014EF0(this);
      if ( (*v3)[1] + 1 > (unsigned int)(*v3)[2] )
        sub_10014B90(v3, (int)*v3, 0);
      v4 = *(_DWORD **)this;
      *((_DWORD *)this + 4) = **(_DWORD **)this + *(_DWORD *)(*(_DWORD *)this + 4);
      ++v4[1];
      **((_BYTE **)this + 4) = v2;
    }
  }
  return this;
}
