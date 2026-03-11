/*
 * func-name: sub_1023BD50
 * func-address: 0x1023bd50
 * callers: 0x100112b6
 * callees: 0x10009bab, 0x100119b9, 0x100122ba
 */

void __thiscall sub_1023BD50(
        _DWORD *this,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  unsigned int v17; // edi
  int v18; // ebx
  unsigned int v19; // eax
  void *v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // edi
  unsigned int v23; // ebp
  bool v24; // cc
  _DWORD v25[2]; // [esp+14h] [ebp-14h] BYREF
  int v26; // [esp+24h] [ebp-4h]

  v17 = this[1];
  v18 = 0;
  v26 = 0;
  if ( v17 )
    v19 = (int)(this[2] - v17) / 56;
  else
    v19 = 0;
  if ( v19 >= a2 )
  {
    if ( v17 )
    {
      v21 = this[2];
      if ( a2 < (int)(v21 - v17) / 56 )
      {
        if ( v17 > v21 )
          _invalid_parameter_noinfo();
        v22 = this[1];
        if ( v22 > this[2] )
          _invalid_parameter_noinfo();
        v23 = v22 + 56 * a2;
        v24 = v23 <= this[2];
        v25[1] = v22;
        if ( !v24 || v23 < this[1] )
          _invalid_parameter_noinfo();
        sub_100122BA((int)v25, (int)this, v23, (int)this, v21);
      }
    }
  }
  else
  {
    if ( v17 )
      v18 = (int)(this[2] - v17) / 56;
    v25[0] = this[2];
    v20 = (void *)v25[0];
    if ( v17 > v25[0] )
    {
      _invalid_parameter_noinfo();
      v20 = (void *)v25[0];
    }
    sub_100119B9((int)this, v20, a2 - v18, (struct GameClient::FRobotBody::RobotPartModel *)&a3);
  }
  v26 = -1;
  GameClient::FRobotBody::RobotPartModel::~RobotPartModel((GameClient::FRobotBody::RobotPartModel *)&a3);
}
