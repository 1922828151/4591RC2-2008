/*
 * func-name: ?QueryStock@Func_Receive@GameClient@@UAEXPAVLocalCharacter@2@KK@Z_0
 * func-address: 0x101c0a40
 * callers: 0x10017b75
 * callees: 0x10001b04, 0x100077ed, 0x1000cdb0, 0x10013647, 0x1001802a
 */

void __thiscall GameClient::Func_Receive::QueryStock(
        GameClient::Func_Receive *this,
        struct GameClient::LocalCharacter *a2,
        unsigned int a3,
        unsigned int a4)
{
  float v5; // ebx
  int v6; // ebp
  float *v7; // eax
  Outpop::Utility::Ref_Object *v8; // [esp+20h] [ebp-18h] BYREF
  float v9; // [esp+24h] [ebp-14h] BYREF
  int v10; // [esp+28h] [ebp-10h]
  int v11; // [esp+34h] [ebp-4h]

  if ( a2 )
  {
    sub_1001802A((int)&v9, (int)&a3);
    v5 = v9;
    v6 = *((_DWORD *)this + 23);
    if ( v9 == 0.0 || (GameClient::Func_Receive *)LODWORD(v9) != (GameClient::Func_Receive *)((char *)this + 88) )
      _invalid_parameter_noinfo();
    if ( v10 == v6 )
      goto LABEL_11;
    if ( v5 == 0.0 )
      _invalid_parameter_noinfo();
    if ( v10 == *(_DWORD *)(LODWORD(v5) + 4) )
      _invalid_parameter_noinfo();
    v9 = *(float *)&GSeconds - *(float *)(v10 + 12);
    v9 = fabs(v9);
    if ( v9 >= 5.0 )
    {
LABEL_11:
      sub_100077ED((int)&v8, 9, 216, COERCE_INT(0.0), 1, 512);
      v11 = 0;
      sub_10001B04((int)this + 32);
      sub_10001B04((int)&a3);
      sub_10001B04((int)&a4);
      j_nullsub_44((int)&v8);
      v7 = (float *)sub_1000CDB0((int)&a3);
      v11 = -1;
      *v7 = *(float *)&GSeconds;
      if ( v8 )
        Outpop::Utility::Ref_Object::release(v8);
    }
  }
}
