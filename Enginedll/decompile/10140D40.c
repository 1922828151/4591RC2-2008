/*
 * func-name: ?SetLocation@NxPhysics@@QAEXPAVNxActor@@ABVVector@@@Z
 * func-address: 0x10140d40
 * callers: 0x101404f0
 * callees: 0x100956d0, 0x10100b70
 */

void __thiscall NxPhysics::SetLocation(NxPhysics *this, struct NxActor *a2, const struct Vector *a3)
{
  int v3; // ebx
  float *v4; // eax
  int v5; // edi
  int v6; // ecx
  double v7[3]; // [esp+28h] [ebp-18h] BYREF

  if ( a2 )
  {
    v3 = *(_DWORD *)a2;
    v4 = NxHelper::ToNxVec3((float *)v7, (float *)a3);
    (*(void (__thiscall **)(struct NxActor *, float *))(v3 + 24))(a2, v4);
    v5 = *((_DWORD *)a2 + 1);
    if ( *(_DWORD *)(v5 + 8) == 2 )
    {
      if ( *(float *)a3 > 99999.0
        || *(float *)a3 < -99999.0
        || *((float *)a3 + 1) > 99999.0
        || *((float *)a3 + 1) < -99999.0
        || *((float *)a3 + 2) > 99999.0
        || *((float *)a3 + 2) < -99999.0 )
      {
        Error("Ctl Pos: %.2f, %.2f, %.2f", *(float *)a3, *((float *)a3 + 1), *((float *)a3 + 2));
      }
      v6 = **(_DWORD **)(v5 + 12);
      v7[0] = *(float *)a3;
      v7[1] = *((float *)a3 + 1);
      v7[2] = *((float *)a3 + 2);
      (*(void (__thiscall **)(int, double *))(*(_DWORD *)v6 + 8))(v6, v7);
    }
  }
}
