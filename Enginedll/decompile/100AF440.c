/*
 * func-name: ?UnHighLightAllHotZone@CHotZonePic@@QAEXXZ
 * func-address: 0x100af440
 * callers: none
 * callees: none
 */

void __thiscall CHotZonePic::UnHighLightAllHotZone(CHotZonePic *this)
{
  unsigned int i; // edi
  int v3; // ecx

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 137);
    if ( !v3 || i >= (*((_DWORD *)this + 138) - v3) >> 2 )
      break;
    *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 137) + 4 * i) + 36) = 0;
  }
}
