/*
 * func-name: sub_10167720
 * func-address: 0x10167720
 * callers: 0x10167bb0
 * callees: 0x10076ef0, 0x101673d0
 */

char __thiscall sub_10167720(_DWORD *this, RECT *lprcSrc2, int a3, int a4, float a5, float a6, int a7)
{
  unsigned int i; // edi
  int v9; // ecx
  int v10; // ecx
  struct tagRECT rcDst; // [esp+1Ch] [ebp-10h] BYREF

  for ( i = 0; i < std::vector<Model *>::size(this); ++i )
  {
    v9 = this[1];
    if ( !v9 || i >= (this[2] - v9) >> 2 )
      invalid_parameter_noinfo();
    if ( IntersectRect(&rcDst, (const RECT *)(*(_DWORD *)(this[1] + 4 * i) + 12), lprcSrc2) )
    {
      v10 = this[1];
      if ( !v10 || i >= (this[2] - v10) >> 2 )
        invalid_parameter_noinfo();
      sub_101673D0(*(struct SurfaceNodeMessage **)(this[1] + 4 * i), lprcSrc2, a3, a4, a5, a6, a7);
    }
  }
  return 1;
}
