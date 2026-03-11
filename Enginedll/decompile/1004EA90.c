/*
 * func-name: ?HasOnOcclusionList@Actor@@QAE_NPAV1@@Z
 * func-address: 0x1004ea90
 * callers: 0x100085f0, 0x100481a0, 0x1004edb0, 0x10050870
 * callees: none
 */

char __thiscall Actor::HasOnOcclusionList(Actor *this, struct Actor *a2)
{
  unsigned int i; // edi
  int v4; // ecx

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 97);
    if ( !v4 || i >= (*((_DWORD *)this + 98) - v4) >> 2 )
      break;
    if ( *(struct Actor **)(*((_DWORD *)this + 97) + 4 * i) == a2 )
      return 1;
  }
  return 0;
}
