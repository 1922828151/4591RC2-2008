/*
 * func-name: ?SetJoystickSensitivity@Input@@QAEXM@Z
 * func-address: 0x100db0d0
 * callers: none
 * callees: none
 */

void __thiscall Input::SetJoystickSensitivity(Input *this, float a2)
{
  *((float *)this + 4) = a2;
}
