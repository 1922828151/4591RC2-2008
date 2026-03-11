/*
 * func-name: ?moveToFOV@CameraHandler@@QAEXMM@Z_0
 * func-address: 0x100dcb10
 * callers: 0x1000bcc1
 * callees: none
 */

void __thiscall CameraHandler::moveToFOV(CameraHandler *this, float a2, float a3)
{
  if ( a2 == 0.0 )
  {
    *((_BYTE *)this + 421) = 0;
    *((float *)this + 188) = a3;
  }
  else
  {
    *((_BYTE *)this + 421) = 1;
    *((float *)this + 106) = a3 - *((float *)this + 188);
    *((float *)this + 109) = a3;
    *((float *)this + 107) = 0.0;
    *((float *)this + 108) = a2;
  }
}
