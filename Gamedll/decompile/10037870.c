/*
 * func-name: sub_10037870
 * func-address: 0x10037870
 * callers: 0x10015d9d
 * callees: 0x100024fa, 0x100108fc
 */

_DWORD *__thiscall sub_10037870(int this)
{
  _DWORD *result; // eax
  int v3; // eax

  result = (_DWORD *)(this + 120);
  if ( *(_DWORD *)(this + 8) == this + 120 )
  {
    GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 0);
    v3 = *(_DWORD *)(this + 296);
    if ( v3 )
    {
      *(_DWORD *)(this + 296) = v3 - 1;
      if ( v3 == 1 )
        *(_DWORD *)(this + 292) = 0;
    }
    result = (_DWORD *)sub_100108FC();
    *(_DWORD *)(this + 12) = *result;
  }
  return result;
}
