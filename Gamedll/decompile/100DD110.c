/*
 * func-name: ?UpdateViewInterpolation@CameraHandler@@IAEXXZ_0
 * func-address: 0x100dd110
 * callers: 0x1000438b
 * callees: 0x10010465, 0x10015596
 */

void __thiscall CameraHandler::UpdateViewInterpolation(CameraHandler *this)
{
  int v2; // eax
  float v3; // [esp+10h] [ebp-84h]
  float v4; // [esp+10h] [ebp-84h]
  int v5[16]; // [esp+14h] [ebp-80h] BYREF
  _BYTE v6[64]; // [esp+54h] [ebp-40h] BYREF

  v3 = GDeltaTime + *((float *)this + 170);
  *((float *)this + 170) = v3;
  if ( *((float *)this + 171) <= (double)v3 )
  {
    qmemcpy((char *)this + 688, (char *)this + 488, 0x40u);
    *((_BYTE *)this + 420) = 0;
  }
  else
  {
    v4 = v3 / *((float *)this + 171);
    v2 = sub_10015596((int)v5, v4);
    qmemcpy((char *)this + 688, (const void *)sub_10010465((int)v6, v2), 0x40u);
  }
}
