/*
 * func-name: ?LockMouseInput@Input@@QAEXXZ
 * func-address: 0x10016b30
 * callers: none
 * callees: none
 */

void __thiscall Input::LockMouseInput(Input *this)
{
  *((_BYTE *)this + 20) = 1;
}
