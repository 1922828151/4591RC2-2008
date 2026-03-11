/*
 * func-name: ?GetJoystickZ1@Input@@QAEMH@Z
 * func-address: 0x100daf80
 * callers: none
 * callees: none
 */

double __thiscall Input::GetJoystickZ1(Input *this, int a2)
{
  if ( !(*(unsigned __int8 (__thiscall **)(Input *, int, _DWORD))(*(_DWORD *)this + 84))(this, a2, 0) )
    return 0.0;
  return (float)(((double)(*(int (__thiscall **)(Input *, int))(*(_DWORD *)this + 24))(this, a2) / 32767.0 - 1.0)
               * *((float *)this + 4));
}
