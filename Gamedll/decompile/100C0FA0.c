/*
 * func-name: ?setStandNodeSpawnInterval@WaterDecal@@QAEXM_N@Z_0
 * func-address: 0x100c0fa0
 * callers: 0x1000fba0
 * callees: 0x100188f9, 0x102c9fe0
 */

void __thiscall WaterDecal::setStandNodeSpawnInterval(WaterDecal *this, float a2, float a3)
{
  bool v3; // zf
  double v4; // st7
  float *v5; // eax

  v3 = LOBYTE(a3) == 0;
  v4 = a2;
  *((float *)this + 50) = a2;
  if ( !v3 )
  {
    a3 = *((float *)this + 55) / *((float *)this + 56);
    a2 = *((float *)this + 49) / v4;
    v5 = &a3;
    if ( a3 <= (double)a2 )
      v5 = &a2;
    WaterDecal::setNumNodes(this, (int)(*v5 + 1.0));
  }
}
