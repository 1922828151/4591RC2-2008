/*
 * func-name: ?DestroyInstance@FBooty@GameClient@@UAEXK@Z_0
 * func-address: 0x10223510
 * callers: 0x10004390
 * callees: 0x10016784
 */

void __thiscall GameClient::FBooty::DestroyInstance(GameClient::FBooty *this, char a2)
{
  void (__thiscall ***v2)(_DWORD, int); // eax

  v2 = (void (__thiscall ***)(_DWORD, int))sub_10016784(a2);
  if ( v2 )
    (**v2)(v2, 1);
}
