/*
 * func-name: ?setStandFade@WaterDecal@@QAEXMM@Z_0
 * func-address: 0x100bd270
 * callers: 0x10012f0d
 * callees: none
 */

void __thiscall WaterDecal::setStandFade(WaterDecal *this, float a2, float a3)
{
  *((float *)this + 53) = a2;
  *((float *)this + 54) = a3;
}
