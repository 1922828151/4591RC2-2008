/*
 * func-name: ?SetFade@DynamicLasers@@QAEXMM@Z_0
 * func-address: 0x1007af80
 * callers: 0x100020a9
 * callees: none
 */

void __thiscall DynamicLasers::SetFade(DynamicLasers *this, float a2, float a3)
{
  *((float *)this + 60) = a2;
  *((float *)this + 61) = a3;
}
