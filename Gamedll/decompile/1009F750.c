/*
 * func-name: sub_1009F750
 * func-address: 0x1009f750
 * callers: 0x1000dd73
 * callees: none
 */

char __thiscall sub_1009F750(_DWORD *this)
{
  int v2; // ecx
  int v4; // esi
  int v5; // eax

  v2 = this[1];
  if ( !v2 )
    return 0;
  v4 = 0;
  if ( !std::vector<Actor *>::size(v2) )
    return 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)std::vector<Actor *>::operator[](this[1], v4);
    if ( v5 )
    {
      if ( *(float *)(v5 + 1128) < 0.0 )
        break;
    }
    if ( ++v4 >= (unsigned int)std::vector<Actor *>::size(this[1]) )
      return 0;
  }
  return 1;
}
