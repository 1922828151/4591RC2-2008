/*
 * func-name: ?SetCurrentPosition@Robot@GameClient@@UAEXABVVector@@@Z_0
 * func-address: 0x10172850
 * callers: 0x1000d71f
 * callees: none
 */

void __thiscall GameClient::Robot::SetCurrentPosition(GameClient::Robot *this, const struct Vector *a2)
{
  int v3; // eax
  NxPhysics *v4; // eax
  int *v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // [esp+28h] [ebp-14h]
  struct NxActor *v9; // [esp+28h] [ebp-14h]
  int v10; // [esp+2Ch] [ebp-10h]
  const struct Vector *v11; // [esp+2Ch] [ebp-10h]
  _DWORD v12[3]; // [esp+30h] [ebp-Ch] BYREF

  *((_DWORD *)this + 6) = *(_DWORD *)a2;
  v3 = *((_DWORD *)this + 44);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 2);
  if ( v3 )
  {
    v4 = (NxPhysics *)NxPhysics::Instance(v3, a2, v8, v10, v12[0]);
    NxPhysics::SetLocation(v4, v9, v11);
  }
  v5 = (int *)*((_DWORD *)this + 46);
  if ( v5 )
  {
    v6 = *v5;
    v7 = NxHelper::ToNxVec3(v12, a2);
    (*(void (__thiscall **)(_DWORD, int))(v6 + 56))(*((_DWORD *)this + 46), v7);
    LogPrintf("Move Trigger Pos: %.2f %.2f %.2f", *(float *)a2, *((float *)a2 + 1), *((float *)a2 + 2));
  }
}
