/*
 * func-name: ?AnimateHoverPic@CHotZonePic@@QAEXHW4ANIM_TYPE@1@MMM@Z
 * func-address: 0x100af370
 * callers: none
 * callees: none
 */

unsigned int __thiscall CHotZonePic::AnimateHoverPic(
        _DWORD *this,
        unsigned int a2,
        int a3,
        float a4,
        float a5,
        float a6)
{
  int v7; // ecx
  unsigned int result; // eax

  v7 = this[141];
  if ( v7 )
  {
    result = (this[142] - v7) >> 2;
    if ( a2 < result )
    {
      result = *(_DWORD *)(this[141] + 4 * a2);
      *(float *)(result + 56) = a4;
      *(_BYTE *)(result + 52) = 1;
      *(float *)(result + 64) = a6;
      *(float *)(result + 60) = a5;
      *(float *)(result + 68) = GSeconds;
    }
  }
  return result;
}
