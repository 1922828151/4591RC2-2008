/*
 * func-name: ?Suicide@Robot@GameClient@@QAEXXZ_0
 * func-address: 0x10174390
 * callers: 0x100114be
 * callees: 0x10006a19, 0x100077ed, 0x10013647
 */

void __thiscall GameClient::Robot::Suicide(GameClient::Robot *this)
{
  Outpop::Utility::Ref_Object *v1; // [esp+14h] [ebp-10h] BYREF
  int v2; // [esp+20h] [ebp-4h]

  if ( GameClient::WorldObject::IsLocal(this) )
  {
    sub_100077ED((int)&v1, 9, 14, COERCE_INT(0.0), 1, 512);
    v2 = 0;
    j_nullsub_44((int)&v1);
    v2 = -1;
    if ( v1 )
      Outpop::Utility::Ref_Object::release(v1);
  }
}
