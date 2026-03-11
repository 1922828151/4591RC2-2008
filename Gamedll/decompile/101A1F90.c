/*
 * func-name: ?RequestChangeSeat@Establishment@GameClient@@UAE_NPAVRobot@2@H@Z_0
 * func-address: 0x101a1f90
 * callers: 0x10005736
 * callees: 0x10001b04, 0x10006802, 0x100077ed, 0x10013647, 0x10016a4f
 */

char __thiscall GameClient::Establishment::RequestChangeSeat(
        GameClient::Establishment *this,
        struct GameClient::Robot *a2,
        int a3)
{
  int v4; // ecx
  unsigned int v5; // ebx

  if ( !(*(unsigned __int8 (__thiscall **)(GameClient::Establishment *))(*(_DWORD *)this + 108))(this) )
    return 0;
  v4 = *((_DWORD *)this + 49);
  v5 = *((_DWORD *)a2 + 71);
  if ( !v4
    || v5 >= (*((_DWORD *)this + 50) - v4) >> 2
    || *((_DWORD *)a2 + 70) != *((_DWORD *)this + 3)
    || v5 == a3
    || !sub_10016A4F(*((_DWORD *)a2 + 4)) )
  {
    return 0;
  }
  sub_100077ED((int)&a2, 9, 227, COERCE_INT(0.0), 1, 512);
  sub_10001B04((int)this + 12);
  sub_10006802((int)&a3);
  j_nullsub_44((int)&a2);
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return 1;
}
