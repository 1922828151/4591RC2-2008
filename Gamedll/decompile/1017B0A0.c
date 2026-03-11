/*
 * func-name: ?IsContract@Robot@GameClient@@QBE_NI@Z_0
 * func-address: 0x1017b0a0
 * callers: 0x10003864
 * callees: 0x10002e37, 0x102c9d50
 */

char __thiscall GameClient::Robot::IsContract(GameClient::Robot *this, unsigned int a2)
{
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  char v9; // cl
  int v10; // [esp+14h] [ebp-9Ch] BYREF
  void *v11; // [esp+18h] [ebp-98h]
  int v12; // [esp+1Ch] [ebp-94h]
  int v13; // [esp+20h] [ebp-90h]
  float v14; // [esp+24h] [ebp-8Ch]
  int v15; // [esp+28h] [ebp-88h] BYREF
  float v16; // [esp+2Ch] [ebp-84h]
  float v17[3]; // [esp+30h] [ebp-80h] BYREF
  _BYTE v18[52]; // [esp+3Ch] [ebp-74h] BYREF
  _DWORD *v19; // [esp+70h] [ebp-40h]
  int v20; // [esp+74h] [ebp-3Ch]
  int v21; // [esp+ACh] [ebp-4h]

  CollisionInfo::CollisionInfo((CollisionInfo *)v18);
  v21 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v3 = *((_DWORD *)this + 3);
  LOBYTE(v21) = 1;
  v15 = v3;
  sub_10002E37(&v10, (int)&v15);
  *(float *)&v15 = *((float *)this + 6) + 0.0;
  v16 = *((float *)this + 7) - 5.0;
  v14 = *((float *)this + 8) + 0.0;
  v17[0] = *(float *)&v15;
  v17[1] = v16;
  v17[2] = v14;
  v4 = NxPhysics::Instance(&v10, (char *)this + 24, v17, 3, v18);
  if ( !(unsigned __int8)NxPhysics::RayCast(v4) )
    goto LABEL_2;
  v7 = v19;
  if ( !v19 || (v8 = v20, !((v20 - (int)v19) >> 2)) )
  {
    _invalid_parameter_noinfo();
    v8 = v20;
    v7 = v19;
  }
  if ( !*v7 )
  {
LABEL_2:
    v5 = v11;
LABEL_3:
    if ( v5 )
      operator delete(v5);
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v21 = -1;
    CollisionInfo::~CollisionInfo((CollisionInfo *)v18);
    return 0;
  }
  if ( !((v8 - (int)v7) >> 2) )
  {
    _invalid_parameter_noinfo();
    v7 = v19;
  }
  v9 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 12))(*v7);
  v5 = v11;
  if ( ((1 << v9) & a2) == 0 )
    goto LABEL_3;
  if ( v11 )
    operator delete(v11);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v21 = -1;
  CollisionInfo::~CollisionInfo((CollisionInfo *)v18);
  return 1;
}
