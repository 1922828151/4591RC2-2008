/*
 * func-name: ?HighLight@CHotZonePic@@QAE_NH_N@Z
 * func-address: 0x100af3e0
 * callers: none
 * callees: none
 */

char __thiscall CHotZonePic::HighLight(CHotZonePic *this, int a2, bool a3)
{
  int v4; // ecx

  if ( a2 < 0 )
    return 0;
  v4 = *((_DWORD *)this + 137);
  if ( !v4 || a2 >= (unsigned int)((*((_DWORD *)this + 138) - v4) >> 2) )
    return 0;
  *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 137) + 4 * a2) + 36) = a3;
  return 1;
}
