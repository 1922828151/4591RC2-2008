/*
 * func-name: ?GetHotZoneData@CHotZonePic@@QAE_NHAAK@Z
 * func-address: 0x100af4a0
 * callers: none
 * callees: none
 */

char __thiscall CHotZonePic::GetHotZoneData(CHotZonePic *this, int a2, unsigned int *a3)
{
  int v4; // ecx

  if ( a2 < 0 )
    return 0;
  v4 = *((_DWORD *)this + 137);
  if ( !v4 || a2 >= (unsigned int)((*((_DWORD *)this + 138) - v4) >> 2) )
    return 0;
  *a3 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 137) + 4 * a2) + 40);
  return 1;
}
