/*
 * func-name: ?Move@Robot@GameClient@@QAEXI@Z_0
 * func-address: 0x10173d70
 * callers: 0x100024fa
 * callees: 0x10006a19, 0x100077ed, 0x1000b7e4, 0x10013647, 0x10018f25, 0x102c0ed0
 */

void __thiscall GameClient::Robot::Move(GameClient::Robot *this, unsigned int a2)
{
  unsigned int v3; // eax
  int v4; // [esp+8h] [ebp-2Ch]
  Outpop::Utility::Ref_Object *v5; // [esp+18h] [ebp-1Ch] BYREF
  _BYTE v6[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v7; // [esp+30h] [ebp-4h]

  v3 = a2;
  if ( a2 != *((_DWORD *)this + 186) )
  {
    *((_DWORD *)this + 186) = a2;
    if ( v3 )
      *((_DWORD *)this + 92) |= 0x200u;
    else
      *((_DWORD *)this + 92) &= ~0x200u;
    if ( GameClient::WorldObject::IsLocal(this) )
    {
      *((float *)this + 196) = 0.0;
      *((float *)this + 197) = 0.0;
      sub_100077ED((int)&v5, 9, 4, COERCE_INT(0.0), 1, 512);
      v7 = 0;
      v4 = sub_102C0ED0(v6);
      sub_10018F25((int)&a2);
      sub_1000B7E4((int)this + 24);
      sub_1000B7E4(v4);
      j_nullsub_44((int)&v5);
      v7 = -1;
      if ( v5 )
        Outpop::Utility::Ref_Object::release(v5);
    }
  }
}
