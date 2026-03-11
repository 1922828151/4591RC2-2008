/*
 * func-name: ?Tick@CameraHandler@@QAEX_N@Z_0
 * func-address: 0x100ddc50
 * callers: 0x100109a1
 * callees: 0x100021c6, 0x1000438b, 0x10018bf6
 */

void __thiscall CameraHandler::Tick(CameraHandler *this, float a2)
{
  double v3; // st7
  double v4; // st6
  float v5; // [esp+8h] [ebp+4h]
  float v6; // [esp+8h] [ebp+4h]

  if ( !LOBYTE(a2) )
  {
    if ( *((_BYTE *)this + 421) )
    {
      v3 = GDeltaTime;
      v5 = *((float *)this + 107) + GDeltaTime;
      *((float *)this + 107) = v5;
      if ( *((float *)this + 108) < (double)v5 )
      {
        v4 = v5 - *((float *)this + 108);
        *((_BYTE *)this + 421) = 0;
        v6 = v3 - v4;
        v3 = v6;
      }
      *((float *)this + 188) = v3 / *((float *)this + 108) * *((float *)this + 106) + *((float *)this + 188);
    }
    if ( *((_BYTE *)this + 420) )
      CameraHandler::UpdateViewInterpolation(this);
  }
  CameraHandler::UpdateShake(this);
  CameraHandler::ApplyCameraValues(this);
}
