/*
 * func-name: sub_10218430
 * func-address: 0x10218430
 * callers: 0x10005e8e
 * callees: 0x10003ca1, 0x100068ac, 0x1000be33, 0x100141eb, 0x1001a0f5, 0x102c9d50
 */

_DWORD *__thiscall sub_10218430(_DWORD *this)
{
  void *v2; // eax
  void *v3; // ecx
  void *v4; // ebp
  void *v5; // eax
  void *v6; // ecx
  void *v7; // ebp
  void *Destination[3]; // [esp+14h] [ebp-28h] BYREF
  int v10; // [esp+20h] [ebp-1Ch] BYREF
  void *v11; // [esp+24h] [ebp-18h]
  void *Source; // [esp+28h] [ebp-14h]
  int v13; // [esp+2Ch] [ebp-10h]
  int v14; // [esp+38h] [ebp-4h]

  Destination[2] = this;
  sub_100068AC();
  v14 = 0;
  *this = &GameClient::UserStageStateLogin::`vftable';
  std::string::string(this + 3);
  std::string::string(this + 10);
  this[21] = 0;
  this[22] = 0;
  this[23] = 0;
  this[24] = 0;
  this[2] = 0;
  v11 = 0;
  Source = 0;
  v13 = 0;
  LOBYTE(v14) = 4;
  Destination[0] = (void *)202310;
  sub_1001A0F5(&v10, (int)Destination);
  Destination[0] = (void *)202311;
  sub_1001A0F5(&v10, (int)Destination);
  Destination[0] = (void *)202001;
  sub_1001A0F5(&v10, (int)Destination);
  Destination[0] = (void *)203005;
  sub_1001A0F5(&v10, (int)Destination);
  sub_10003CA1(&v10, 9, -1);
  sub_1000BE33(this + 20, &v10);
  v2 = Source;
  v3 = v11;
  v4 = Source;
  if ( v11 > Source )
  {
    _invalid_parameter_noinfo();
    v2 = Source;
    v3 = v11;
  }
  Destination[0] = v3;
  if ( v3 > v2 )
    _invalid_parameter_noinfo();
  sub_100141EB((int)Destination, (int)&v10, Destination[0], (int)&v10, v4);
  Destination[0] = (void *)202110;
  sub_1001A0F5(&v10, (int)Destination);
  Destination[0] = (void *)202111;
  sub_1001A0F5(&v10, (int)Destination);
  Destination[0] = (void *)202001;
  sub_1001A0F5(&v10, (int)Destination);
  Destination[0] = (void *)203007;
  sub_1001A0F5(&v10, (int)Destination);
  sub_10003CA1(&v10, 9, -1);
  sub_1000BE33(this + 20, &v10);
  v5 = Source;
  v6 = v11;
  v7 = Source;
  if ( v11 > Source )
  {
    _invalid_parameter_noinfo();
    v5 = Source;
    v6 = v11;
  }
  Destination[0] = v6;
  if ( v6 > v5 )
    _invalid_parameter_noinfo();
  sub_100141EB((int)Destination, (int)&v10, Destination[0], (int)&v10, v7);
  Destination[0] = (void *)202210;
  sub_1001A0F5(&v10, (int)Destination);
  Destination[0] = (void *)202212;
  sub_1001A0F5(&v10, (int)Destination);
  Destination[0] = (void *)202001;
  sub_1001A0F5(&v10, (int)Destination);
  Destination[0] = (void *)203006;
  sub_1001A0F5(&v10, (int)Destination);
  sub_10003CA1(&v10, 9, -1);
  sub_1000BE33(this + 20, &v10);
  if ( v11 )
    operator delete(v11);
  return this;
}
