/*
 * func-name: ?Disable@SLock@GameClient@@UAE_NXZ_0
 * func-address: 0x101d3970
 * callers: 0x1000a632
 * callees: 0x10001b04, 0x10006618, 0x100077ed, 0x1000ede0, 0x10013647, 0x100148a3, 0x10016a4f
 */

bool __thiscall GameClient::SLock::Disable(GameClient::SLock *this)
{
  unsigned int *v2; // ebp
  int v3; // ebx
  int v4; // eax
  GameClient::Robot *v5; // ecx
  char v7; // [esp+23h] [ebp-11h] BYREF
  Outpop::Utility::Ref_Object *v8; // [esp+24h] [ebp-10h] BYREF
  int v9; // [esp+30h] [ebp-4h]

  v2 = (unsigned int *)((char *)this + 672);
  if ( *((_DWORD *)this + 168) != -1 )
  {
    v3 = *((_DWORD *)this + 2);
    if ( sub_10016A4F(*(_DWORD *)(*((_DWORD *)this + 5) + 16)) )
    {
      sub_100077ED((int)&v8, 9, 169, COERCE_INT(0.0), 1, 512);
      v9 = 0;
      v7 = 0;
      sub_10001B04((int)v2);
      sub_10006618((int)&v7);
      j_nullsub_44((int)&v8);
      v9 = -1;
      if ( v8 )
        Outpop::Utility::Ref_Object::release(v8);
    }
    v4 = *(_DWORD *)(v3 + 112);
    if ( v4 == 1 )
    {
      GameClient::Robot::RemoveBeLockedTarget(*((GameClient::Robot **)this + 5), *v2);
    }
    else if ( v4 == 3 )
    {
      v5 = *(GameClient::Robot **)(*((_DWORD *)this + 5) + 148);
      if ( v5 )
        GameClient::Robot::RemoveBeLockedTarget(v5, *v2);
    }
  }
  *((float *)this + 169) = 0.0;
  *((_DWORD *)this + 167) = -1;
  *v2 = -1;
  return GameClient::Skill::Disable(this);
}
