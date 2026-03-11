/*
 * func-name: sub_10148190
 * func-address: 0x10148190
 * callers: 0x10005d08
 * callees: none
 */

bool __thiscall sub_10148190(float *this, struct GameClient::Flyweight *a2)
{
  if ( !a2 )
    return 0;
  this[35] = *((float *)a2 + 37);
  return GameClient::DataObject::OnCreate((GameClient::DataObject *)this, a2);
}
