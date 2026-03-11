/*
 * func-name: ?CreateNxActorTrigger@Robot@GameClient@@QAEXXZ_0
 * func-address: 0x10172e80
 * callers: 0x10016040
 * callees: 0x100146be, 0x102c0750
 */

void __thiscall GameClient::Robot::CreateNxActorTrigger(GameClient::Robot *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // [esp+1Ch] [ebp-CCh]
  int v10; // [esp+20h] [ebp-C8h]
  float v11[3]; // [esp+50h] [ebp-98h] BYREF
  float v12[3]; // [esp+5Ch] [ebp-8Ch] BYREF
  _BYTE v13[12]; // [esp+68h] [ebp-80h] BYREF
  _DWORD v14[16]; // [esp+74h] [ebp-74h] BYREF
  _DWORD v15[10]; // [esp+B4h] [ebp-34h] BYREF
  int v16; // [esp+E4h] [ebp-4h]

  v2 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)this + 8);
  v11[0] = 0.050000001;
  v11[1] = 0.050000001;
  v11[2] = 0.050000001;
  qmemcpy(v14, (char *)this + 36, sizeof(v14));
  v12[0] = -0.050000001;
  v12[1] = -0.050000001;
  v12[2] = -0.050000001;
  v4 = *((_DWORD *)this + 7);
  v14[12] = v2;
  v14[13] = v4;
  v14[14] = v3;
  v5 = sub_100146BE((int)v12, (int)v11);
  v10 = *((_DWORD *)this + 3);
  v9 = *((_DWORD *)this + 43);
  v16 = 0;
  v6 = NxPhysics::Instance(v9, v10, v5, v14, 1);
  *((_DWORD *)this + 46) = NxPhysics::CreateBoxActor(v6);
  v16 = -1;
  sub_102C0750(v15);
  v7 = **((_DWORD **)this + 46);
  v8 = NxHelper::ToNxVec3(v13, (char *)this + 24);
  (*(void (__thiscall **)(_DWORD, int))(v7 + 56))(*((_DWORD *)this + 46), v8);
  LogPrintf("Create Trigger Pos: %.2f %.2f %.2f", *((float *)this + 6), *((float *)this + 7), *((float *)this + 8));
}
