/*
 * func-name: ?GetFaceBooty@Robot@GameClient@@QAEPAVBooty@2@XZ_0
 * func-address: 0x1017b460
 * callers: 0x1000a54c
 * callees: 0x10001dfc, 0x10002e37, 0x10012c79, 0x100174e0, 0x102c0ed0, 0x102c9d50
 */

struct GameClient::Booty *__thiscall GameClient::Robot::GetFaceBooty(GameClient::Robot *this)
{
  float *EyesLocation; // eax
  int v3; // edx
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v8; // [esp+Ch] [ebp-B4h] BYREF
  float v9; // [esp+10h] [ebp-B0h]
  float v10; // [esp+14h] [ebp-ACh]
  float v11; // [esp+18h] [ebp-A8h] BYREF
  float v12; // [esp+1Ch] [ebp-A4h]
  float v13; // [esp+20h] [ebp-A0h]
  int v14; // [esp+24h] [ebp-9Ch] BYREF
  void *v15; // [esp+28h] [ebp-98h]
  int v16; // [esp+2Ch] [ebp-94h]
  int v17; // [esp+30h] [ebp-90h]
  float v18[3]; // [esp+34h] [ebp-8Ch] BYREF
  float v19[3]; // [esp+40h] [ebp-80h] BYREF
  _BYTE v20[76]; // [esp+4Ch] [ebp-74h] BYREF
  int v21; // [esp+98h] [ebp-28h]
  int v22; // [esp+BCh] [ebp-4h]

  if ( !*((_DWORD *)this + 90)
    && (!*((_DWORD *)this + 57)
     || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 57) + 168))(*((_DWORD *)this + 57))) )
  {
    EyesLocation = (float *)GameClient::Robot::GetEyesLocation(this);
    v11 = *EyesLocation;
    v12 = EyesLocation[1];
    v13 = EyesLocation[2];
    sub_102C0ED0(v19);
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v3 = *((_DWORD *)this + 3);
    v22 = 0;
    v8 = v3;
    sub_10002E37(&v14, (int)&v8);
    CollisionInfo::CollisionInfo((CollisionInfo *)v20);
    *(float *)&v8 = v19[0] * 3.0;
    v9 = v19[1] * 3.0;
    LOBYTE(v22) = 1;
    v10 = 3.0 * v19[2];
    *(float *)&v8 = *(float *)&v8 + v11;
    v9 = v12 + v9;
    v10 = v13 + v10;
    v18[0] = *(float *)&v8;
    v18[1] = v9;
    v18[2] = v10;
    v4 = NxPhysics::Instance(&v14, &v11, v18, 3, v20);
    if ( (unsigned __int8)NxPhysics::RayCast(v4) )
    {
      if ( v21 != -1 )
      {
        v5 = sub_10001DFC(v21);
        v6 = v5;
        if ( v5 )
        {
          if ( *(_DWORD *)(v5 + 112) == 64 )
          {
            LOBYTE(v22) = 0;
            CollisionInfo::~CollisionInfo((CollisionInfo *)v20);
            sub_100174E0();
            return (struct GameClient::Booty *)v6;
          }
        }
      }
    }
    LOBYTE(v22) = 0;
    CollisionInfo::~CollisionInfo((CollisionInfo *)v20);
    if ( v15 )
      operator delete(v15);
  }
  return 0;
}
