/*
 * func-name: ?RequestUnBoard@Seat@GameClient@@QAE_NPAVLocalCharacter@2@@Z_0
 * func-address: 0x101b0e40
 * callers: 0x10005196
 * callees: 0x10001b04, 0x100077ed, 0x10013647, 0x10015eab
 */

char __thiscall GameClient::Seat::RequestUnBoard(GameClient::Seat *this, struct GameClient::LocalCharacter *a2)
{
  struct GameClient::LocalCharacter *v4; // edx
  Outpop::Utility::Ref_Object *v5; // [esp+18h] [ebp-10h] BYREF
  int v6; // [esp+24h] [ebp-4h]

  if ( !*((_DWORD *)this + 22)
    || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 22) + 108))(*((_DWORD *)this + 22)) )
  {
    return 0;
  }
  sub_100077ED((int)&v5, 9, 225, COERCE_INT(0.0), 1, 512);
  v4 = *(struct GameClient::LocalCharacter **)(*((_DWORD *)this + 22) + 12);
  v6 = 0;
  a2 = v4;
  sub_10001B04((int)&a2);
  sub_10015EAB((int)this + 12);
  j_nullsub_44((int)&v5);
  v6 = -1;
  if ( v5 )
    Outpop::Utility::Ref_Object::release(v5);
  return 1;
}
