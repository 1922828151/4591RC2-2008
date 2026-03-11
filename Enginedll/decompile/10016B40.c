/*
 * func-name: ?UnlockMouseInput@Input@@QAEXXZ
 * func-address: 0x10016b40
 * callers: none
 * callees: none
 */

void __thiscall Input::UnlockMouseInput(Input *this)
{
  *((_BYTE *)this + 20) = 0;
}
