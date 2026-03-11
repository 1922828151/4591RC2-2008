/*
 * func-name: sub_10037250
 * func-address: 0x10037250
 * callers: 0x1000c833
 * callees: 0x102c0750, 0x102c9d50
 */

int __thiscall sub_10037250(_DWORD *this)
{
  void *v2; // eax
  int result; // eax

  *this = &GameClient::AIControl::`vftable';
  v2 = (void *)this[45];
  if ( v2 )
    operator delete(v2);
  this[45] = 0;
  this[46] = 0;
  this[47] = 0;
  result = sub_102C0750(this + 22);
  *this = &GameClient::ControlModule::`vftable';
  return result;
}
