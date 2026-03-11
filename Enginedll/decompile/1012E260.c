/*
 * func-name: ?SetMinutesPerGameSecond@SkyController@@QAEXM@Z
 * func-address: 0x1012e260
 * callers: 0x10137180
 * callees: 0x1012de10
 */

void __thiscall SkyController::SetMinutesPerGameSecond(SkyController *this, float a2)
{
  double v2; // st7
  float v3; // [esp+4h] [ebp-4h]

  v3 = *((float *)this + 947);
  v2 = a2;
  if ( a2 == 0.0 )
    v2 = 0.0000000099999999;
  *((float *)this + 947) = v2;
  if ( *((float *)this + 947) != v3 )
    SkyController::SetDayTime(this, *((float *)this + 948));
}
