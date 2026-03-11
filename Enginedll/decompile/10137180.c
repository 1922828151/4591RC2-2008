/*
 * func-name: ?RefreshSkySettings@World@@UAEXXZ
 * func-address: 0x10137180
 * callers: none
 * callees: 0x1012de10, 0x1012e260, 0x10131750
 */

void __thiscall World::RefreshSkySettings(World *this)
{
  char v2; // al
  bool v3; // zf
  struct SkySettings *v4; // ecx
  double v5; // st7
  float v6; // [esp+Ch] [ebp-4h]

  v2 = *((_BYTE *)this + 3288);
  v3 = v2 == *((_BYTE *)this + 3289);
  v4 = (World *)((char *)this + 3288);
  if ( !v3 )
  {
    *((_BYTE *)this + 3289) = v2;
    if ( v2 )
    {
      SkyController::IntitializeNewSky(this, v4);
      *((float *)this + 843) = -1.0;
      *((float *)this + 845) = -1.0;
    }
    else if ( SkyController::Instance )
    {
      (*(void (__thiscall **)(SkyController *, int))(*(_DWORD *)SkyController::Instance + 80))(
        SkyController::Instance,
        1);
    }
  }
  v5 = 0.0;
  if ( *((float *)this + 843) != *((float *)this + 842) )
  {
    if ( *((float *)this + 842) < 0.0 )
      *((float *)this + 842) = 0.0;
    if ( *((float *)this + 842) > 24.0 )
      *((float *)this + 842) = 24.0;
    *((float *)this + 843) = *((float *)this + 842);
    if ( SkyController::Instance )
    {
      v6 = *((float *)this + 842) * 60.0;
      SkyController::SetDayTime(SkyController::Instance, v6);
      v5 = 0.0;
    }
  }
  if ( *((float *)this + 845) != *((float *)this + 844) )
  {
    if ( v5 > *((float *)this + 844) )
      *((float *)this + 844) = v5;
    *((float *)this + 845) = *((float *)this + 844);
    if ( SkyController::Instance )
      SkyController::SetMinutesPerGameSecond(SkyController::Instance, *((float *)this + 844));
  }
}
