/*
 * func-name: ?SubmitEndUse@Establishment@GameClient@@UAE_NPAVLocalCharacter@2@@Z_0
 * func-address: 0x101a1e10
 * callers: 0x10019579
 * callees: 0x10001b04, 0x100077ed, 0x10013647, 0x10015eab
 */

char __thiscall GameClient::Establishment::SubmitEndUse(
        GameClient::Establishment *this,
        struct GameClient::LocalCharacter *a2)
{
  char *v3; // ebx
  Outpop::Utility::Ref_Object *v5; // [esp+1Ch] [ebp-10h] BYREF
  int v6; // [esp+28h] [ebp-4h]

  v3 = (char *)this + 364;
  if ( *((_DWORD *)this + 91) != *((_DWORD *)this + 90) || *((_DWORD *)this + 92) != -1 )
  {
    sub_100077ED((int)&a2, 9, 116, COERCE_INT(0.0), 1, 512);
    sub_10001B04((int)this + 12);
    sub_10015EAB((int)v3);
    sub_10015EAB((int)this + 368);
    j_nullsub_44((int)&a2);
    v6 = -1;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
  }
  sub_100077ED((int)&v5, 9, 115, COERCE_INT(0.0), 1, 512);
  v6 = 1;
  sub_10001B04((int)this + 12);
  j_nullsub_44((int)&v5);
  v6 = -1;
  if ( v5 )
    Outpop::Utility::Ref_Object::release(v5);
  return 1;
}
