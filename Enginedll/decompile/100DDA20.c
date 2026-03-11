/*
 * func-name: ?IsExcluded@Light@@QAE_NPAVActor@@@Z
 * func-address: 0x100dda20
 * callers: 0x100debd0, 0x100df070, 0x100e0bb0, 0x100efe90, 0x100f04f0
 * callees: none
 */

bool __thiscall Light::IsExcluded(Light *this, struct Actor *a2)
{
  unsigned int i; // edi
  int v4; // ecx

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 360);
    if ( !v4 || i >= (*((_DWORD *)this + 361) - v4) >> 2 )
    {
      if ( *((_BYTE *)this + 332) )
        return 0;
      return !*((_DWORD *)a2 + 179) || *((_BYTE *)a2 + 353) || *((Light **)a2 + 89) == this;
    }
    if ( *(struct Actor **)(*((_DWORD *)this + 360) + 4 * i) == a2 )
      break;
  }
  if ( !*((_BYTE *)this + 332) )
    return 0;
  return !*((_DWORD *)a2 + 179) || *((_BYTE *)a2 + 353) || *((Light **)a2 + 89) == this;
}
