/*
 * func-name: ?UpdatePhysicsController@Robot@GameClient@@QAEXXZ_0
 * func-address: 0x10173e70
 * callers: 0x1000ad76
 * callees: 0x10002919, 0x1000a8f3, 0x100155aa, 0x102c0750
 */

void __thiscall GameClient::Robot::UpdatePhysicsController(GameClient::Robot *this)
{
  int v2; // eax
  int v3; // eax
  NxPhysics *v4; // eax
  void (__thiscall *v5)(GameClient::Robot *, char *); // edx
  char *v6; // eax
  int v7; // edi
  NxPhysics *v8; // eax
  void (__thiscall *v9)(GameClient::Robot *, char *); // edx
  int v10; // eax
  NxPhysics *v11; // eax
  void (__thiscall *v12)(GameClient::Robot *, char *); // edx
  int v13; // [esp+0h] [ebp-64h]
  struct NxActor *v14; // [esp+0h] [ebp-64h]
  struct NxActor *v15; // [esp+0h] [ebp-64h]
  struct NxActor *v16; // [esp+0h] [ebp-64h]
  int v17; // [esp+4h] [ebp-60h]
  const struct Vector *v18; // [esp+4h] [ebp-60h]
  const struct Vector *v19; // [esp+4h] [ebp-60h]
  const struct Vector *v20; // [esp+4h] [ebp-60h]
  int v21; // [esp+8h] [ebp-5Ch]
  float v22; // [esp+Ch] [ebp-58h]
  float v23; // [esp+10h] [ebp-54h]
  float v24; // [esp+14h] [ebp-50h]
  float v25; // [esp+18h] [ebp-4Ch] BYREF
  float v26; // [esp+1Ch] [ebp-48h]
  float v27; // [esp+20h] [ebp-44h]
  float v28[3]; // [esp+24h] [ebp-40h] BYREF
  _BYTE v29[16]; // [esp+30h] [ebp-34h] BYREF
  float v30; // [esp+40h] [ebp-24h]
  float v31; // [esp+44h] [ebp-20h]
  float v32; // [esp+48h] [ebp-1Ch]
  float v33; // [esp+4Ch] [ebp-18h]
  float v34; // [esp+50h] [ebp-14h]
  float v35; // [esp+54h] [ebp-10h]
  int v36; // [esp+60h] [ebp-4h]

  if ( GameClient::RobotBody::GetRobotType() == 1 )
  {
    v2 = *((_DWORD *)this + 88);
    if ( v2 == 1 )
    {
      v3 = *((_DWORD *)this + 44);
      if ( !v3 )
        return;
      v25 = *((float *)this + 121) - *((float *)this + 118);
      v26 = *((float *)this + 122) - *((float *)this + 119);
      v27 = *((float *)this + 123) - *((float *)this + 120);
      v4 = (NxPhysics *)NxPhysics::Instance(v3, &v25, v13, v17, v21);
      NxPhysics::ResizeController(v4, v14, v18);
      v5 = *(void (__thiscall **)(GameClient::Robot *, char *))(*(_DWORD *)this + 36);
      *((float *)this + 7) = *((float *)this + 7) - (*((float *)this + 142) - *((float *)this + 122)) * 0.5;
      v5(this, (char *)this + 24);
      v6 = (char *)this + 456;
LABEL_10:
      sub_10002919((int)v6);
      return;
    }
    if ( v2 != 2 )
    {
      v10 = *((_DWORD *)this + 44);
      if ( !v10 )
        return;
      v28[0] = *((float *)this + 111) - *((float *)this + 108);
      v28[1] = *((float *)this + 112) - *((float *)this + 109);
      v28[2] = *((float *)this + 113) - *((float *)this + 110);
      v11 = (NxPhysics *)NxPhysics::Instance(v10, v28, v13, v17, v21);
      NxPhysics::ResizeController(v11, v16, v20);
      v12 = *(void (__thiscall **)(GameClient::Robot *, char *))(*(_DWORD *)this + 36);
      *((float *)this + 7) = (*((float *)this + 112) - *((float *)this + 142)) * 0.5 + *((float *)this + 7);
      v12(this, (char *)this + 24);
      v6 = (char *)this + 416;
      goto LABEL_10;
    }
    v7 = *((_DWORD *)this + 44);
    if ( v7 )
    {
      sub_100155AA((int)this + 416);
      v36 = 0;
      v34 = (v34 - v31) * 0.2000000029802322 + v31;
      v22 = v33 - v30;
      v23 = v34 - v31;
      v24 = v35 - v32;
      v25 = v22;
      v26 = v23;
      v27 = v24;
      v8 = (NxPhysics *)NxPhysics::Instance(v7, &v25, v13, v17, v21);
      NxPhysics::ResizeController(v8, v15, v19);
      v9 = *(void (__thiscall **)(GameClient::Robot *, char *))(*(_DWORD *)this + 36);
      *((float *)this + 7) = *((float *)this + 7) - (*((float *)this + 142) - v34) * 0.5;
      v9(this, (char *)this + 24);
      sub_10002919((int)v29);
      v36 = -1;
      sub_102C0750(v29);
    }
  }
}
