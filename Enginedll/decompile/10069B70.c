/*
 * func-name: ?SetControlSoundVolume@CREControl@@UAEXM@Z
 * func-address: 0x10069b70
 * callers: none
 * callees: none
 */

void __thiscall CREControl::SetControlSoundVolume(CREControl *this, float a2)
{
  if ( a2 >= 0.0 )
  {
    if ( a2 <= 1.0 )
      *((float *)this + 40) = a2;
    else
      *((float *)this + 40) = 1.0;
  }
  else
  {
    *((float *)this + 40) = 0.0;
  }
}
