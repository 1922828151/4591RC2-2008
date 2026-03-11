/*
 * func-name: ?Tick@SkyController@@UAEXXZ
 * func-address: 0x1012e1d0
 * callers: none
 * callees: 0x1012d370
 */

void __thiscall SkyController::Tick(SkyController *this)
{
  float v1; // [esp+4h] [ebp-4h]

  if ( *((float *)SkyController::mySkySettings + 26) < 0.0
    || *((float *)SkyController::mySkySettings + 26) * 60.0 > *((float *)this + 948) )
  {
    v1 = *((float *)this + 947) * GDeltaTime + *((float *)this + 948);
    *((float *)this + 948) = v1;
    if ( v1 > 1440.0 )
      *((float *)this + 948) = v1 - 1440.0;
    SkyController::UpdateFades(this, GDeltaTime);
    Script::Tick(SkyController::m_ControllerScript);
  }
}
