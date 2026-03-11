/*
 * func-name: ?SetCurrentTransState@ControlledEstab@GameClient@@QAE_NW4TransStateType@CtlEstabTransState@2@@Z_0
 * func-address: 0x1019c9e0
 * callers: 0x10019e57
 * callees: none
 */

char __thiscall GameClient::ControlledEstab::SetCurrentTransState(_DWORD *this, int a2)
{
  int v3; // ecx
  char result; // al
  int v5; // edi
  int v6; // esi

  v3 = this[116];
  if ( a2 == v3 )
    return 0;
  if ( a2 )
  {
    if ( a2 == 1 )
      v5 = this[118];
    else
      v5 = 0;
  }
  else
  {
    v5 = this[117];
  }
  if ( v3 )
  {
    if ( v3 == 1 )
      v6 = this[118];
    else
      v6 = 0;
  }
  else
  {
    v6 = this[117];
  }
  if ( !v5 || (result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 28))(v5, v6)) != 0 )
  {
    if ( v6 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 24))(v6);
    if ( v5 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
    this[116] = a2;
    return 1;
  }
  return result;
}
