/*
 * func-name: ?GetTransState@ControlledEstab@GameClient@@QAEPAVCtlEstabTransState@2@W4TransStateType@32@@Z_0
 * func-address: 0x1019c9b0
 * callers: 0x10007040
 * callees: none
 */

int __thiscall GameClient::ControlledEstab::GetTransState(_DWORD *this, int a2)
{
  if ( !a2 )
    return this[117];
  if ( a2 == 1 )
    return this[118];
  return 0;
}
