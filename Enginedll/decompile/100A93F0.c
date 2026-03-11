/*
 * func-name: ?CalcDragedRect@CHotZonePic@@IAEXUtagPOINT@@0@Z
 * func-address: 0x100a93f0
 * callers: 0x100c46c0
 * callees: 0x100a8f60, 0x101a26c0
 */

void __thiscall CHotZonePic::CalcDragedRect(CHotZonePic *this, struct tagPOINT a2, struct tagPOINT a3)
{
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  LONG right; // ecx
  int v8; // eax
  LONG bottom; // eax
  int v10; // edx
  int v11; // ecx
  struct tagRECT rc; // [esp+8h] [ebp-10h] BYREF

  v4 = (int)((double)(*((_DWORD *)this + 150) - *((_DWORD *)this + 148))
           * (double)(a2.x - a3.x)
           / (double)(*((_DWORD *)this + 43) - *((_DWORD *)this + 41)));
  v5 = (int)((double)(*((_DWORD *)this + 151) - *((_DWORD *)this + 149))
           * (double)(a2.y - a3.y)
           / (double)(*((_DWORD *)this + 44) - *((_DWORD *)this + 42)));
  SetRect(
    &rc,
    v4 + *((_DWORD *)this + 148),
    v5 + *((_DWORD *)this + 149),
    v4 + *((_DWORD *)this + 150),
    v5 + *((_DWORD *)this + 151));
  if ( rc.left >= *((_DWORD *)this + 152) )
  {
    right = rc.right;
  }
  else
  {
    v6 = *((_DWORD *)this + 150) - *((_DWORD *)this + 148);
    rc.left = *((_DWORD *)this + 152);
    right = rc.left + v6;
    rc.right = right;
  }
  if ( rc.top >= *((_DWORD *)this + 153) )
  {
    bottom = rc.bottom;
  }
  else
  {
    v8 = *((_DWORD *)this + 151) - *((_DWORD *)this + 149);
    rc.top = *((_DWORD *)this + 153);
    bottom = rc.top + v8;
    rc.bottom = bottom;
  }
  if ( right > *((_DWORD *)this + 154) )
  {
    v10 = *((_DWORD *)this + 148) - *((_DWORD *)this + 150);
    rc.right = *((_DWORD *)this + 154);
    rc.left = rc.right + v10;
  }
  if ( bottom > *((_DWORD *)this + 155) )
  {
    v11 = *((_DWORD *)this + 149) - *((_DWORD *)this + 151);
    rc.bottom = *((_DWORD *)this + 155);
    rc.top = rc.bottom + v11;
  }
  CHotZonePic::SetDrawRect(this, &rc);
}
