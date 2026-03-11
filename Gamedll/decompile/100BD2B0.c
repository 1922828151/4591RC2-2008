/*
 * func-name: ?setMoveFade@WaterDecal@@QAEXMM@Z_0
 * func-address: 0x100bd2b0
 * callers: 0x10013467
 * callees: none
 */

void __thiscall WaterDecal::setMoveFade(WaterDecal *this, float a2, float a3)
{
  *((float *)this + 59) = a2;
  *((float *)this + 60) = a3;
}
