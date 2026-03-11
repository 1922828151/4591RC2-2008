/*
 * func-name: sub_1019FB20
 * func-address: 0x1019fb20
 * callers: 0x1000d652
 * callees: 0x1000518c
 */

char __thiscall sub_1019FB20(_DWORD **this)
{
  char result; // al

  result = sub_1000518C();
  if ( result )
  {
    (*(void (__thiscall **)(_DWORD *))(*this[1] + 160))(this[1]);
    return 1;
  }
  return result;
}
