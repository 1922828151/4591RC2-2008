/*
 * func-name: ?IsHighLight@CHotZonePic@@QAE_NH@Z
 * func-address: 0x1006c890
 * callers: none
 * callees: none
 */

bool __thiscall CHotZonePic::IsHighLight(CHotZonePic *this, int a2)
{
  int v3; // ecx
  int v4; // edi

  if ( a2 >= 0
    && (v3 = *((_DWORD *)this + 137)) != 0
    && a2 < (unsigned int)((*((_DWORD *)this + 138) - v3) >> 2)
    && (v4 = *(_DWORD *)(*((_DWORD *)this + 137) + 4 * a2)) != 0 )
  {
    return *(_BYTE *)(v4 + 36);
  }
  else
  {
    return 0;
  }
}
