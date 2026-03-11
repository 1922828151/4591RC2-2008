/*
 * func-name: ?ShowHoverPic@CHotZonePic@@QAE_NH_N@Z
 * func-address: 0x100af500
 * callers: none
 * callees: none
 */

char __thiscall CHotZonePic::ShowHoverPic(CHotZonePic *this, unsigned int a2, bool a3)
{
  int v4; // ecx

  v4 = *((_DWORD *)this + 141);
  if ( !v4 || a2 >= (*((_DWORD *)this + 142) - v4) >> 2 )
    return 0;
  *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 141) + 4 * a2) + 44) = a3;
  return 1;
}
