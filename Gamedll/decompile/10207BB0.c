/*
 * func-name: sub_10207BB0
 * func-address: 0x10207bb0
 * callers: 0x10016d5b
 * callees: 0x10001dfc, 0x10003ec2, 0x10013124, 0x102c9ea8
 */

char __thiscall sub_10207BB0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  _DWORD v9[3]; // [esp+8h] [ebp-Ch] BYREF

  sub_10013124((int)v9, (int)&a2);
  v3 = this + 64;
  v4 = this[65];
  if ( !v9[0] || (_DWORD *)v9[0] != v3 )
    _invalid_parameter_noinfo();
  if ( v9[1] != v4 )
    return 0;
  v6 = sub_10001DFC(a2);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = _RTDynamicCast(
         v6,
         0,
         &GameClient::WorldObject `RTTI Type Descriptor',
         &GameClient::Robot `RTTI Type Descriptor',
         0);
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 172) )
    {
      *(float *)(*(_DWORD *)(v8 + 172) + 1116) = 1.0;
      *(float *)(*(_DWORD *)(v8 + 172) + 1128) = 1.0;
    }
  }
  *(_BYTE *)(v7 + 100) = 1;
  sub_10003EC2((int)v9, (int)&a2);
  return 1;
}
