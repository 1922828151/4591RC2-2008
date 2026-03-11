/*
 * func-name: ?GetJoystickSensitivity@Input@@QAEMXZ
 * func-address: 0x10016a70
 * callers: none
 * callees: none
 */

double __thiscall Input::GetJoystickSensitivity(Input *this)
{
  return *((float *)this + 4);
}
