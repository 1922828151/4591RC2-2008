/*
 * func-name: ?MakeCurTarget@Equip@GameClient@@QAE?AVVector@@ABV3@0@Z_0
 * func-address: 0x1015b290
 * callers: 0x1000b04b
 * callees: 0x10002e37, 0x102c9d50
 */

_DWORD *__thiscall GameClient::Equip::MakeCurTarget(_DWORD *this, _DWORD *a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int *v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // [esp+10h] [ebp-88h] BYREF
  int v17; // [esp+14h] [ebp-84h] BYREF
  void *v18; // [esp+18h] [ebp-80h]
  int v19; // [esp+1Ch] [ebp-7Ch]
  int v20; // [esp+20h] [ebp-78h]
  _BYTE v21[36]; // [esp+24h] [ebp-74h] BYREF
  int *v22; // [esp+48h] [ebp-50h]
  int v23; // [esp+4Ch] [ebp-4Ch]
  int v24; // [esp+94h] [ebp-4h]

  v18 = 0;
  v19 = 0;
  v20 = 0;
  v5 = this[3];
  v24 = 0;
  v16 = v5;
  sub_10002E37(&v17, (int)&v16);
  v6 = this[37];
  if ( v6 )
  {
    v16 = *(_DWORD *)(v6 + 12);
    sub_10002E37(&v17, (int)&v16);
  }
  v7 = this[67];
  if ( v7 )
  {
    v16 = *(_DWORD *)(v7 + 12);
    sub_10002E37(&v17, (int)&v16);
  }
  CollisionInfo::CollisionInfo((CollisionInfo *)v21);
  LOBYTE(v24) = 1;
  v8 = NxPhysics::Instance(&v17, a3, a4, 3, v21);
  if ( (unsigned __int8)NxPhysics::RayCast(v8) )
  {
    v9 = v22;
    if ( !v22 || !((v23 - (int)v22) / 12) )
    {
      _invalid_parameter_noinfo();
      v9 = v22;
    }
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    *a2 = v10;
    a2[1] = v11;
    a2[2] = v12;
    LOBYTE(v24) = 0;
    CollisionInfo::~CollisionInfo((CollisionInfo *)v21);
    if ( v18 )
      operator delete(v18);
    return a2;
  }
  else
  {
    v14 = a4[1];
    v15 = a4[2];
    *a2 = *a4;
    a2[1] = v14;
    a2[2] = v15;
    LOBYTE(v24) = 0;
    CollisionInfo::~CollisionInfo((CollisionInfo *)v21);
    if ( v18 )
      operator delete(v18);
    return a2;
  }
}
