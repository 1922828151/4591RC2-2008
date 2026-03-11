/*
 * func-name: ?SetRotation@NxPhysics@@QAEXPAVNxActor@@ABVMatrix@@@Z
 * func-address: 0x10140e30
 * callers: 0x101404f0
 * callees: 0x10100c20
 */

void __thiscall NxPhysics::SetRotation(NxPhysics *this, struct NxActor *a2, const struct Matrix *a3)
{
  float *v3; // eax
  void (__thiscall *v4)(struct NxActor *, float *); // edx
  _BYTE v5[12]; // [esp+4h] [ebp-3Ch] BYREF
  float v6[12]; // [esp+10h] [ebp-30h] BYREF

  if ( a2 )
  {
    if ( *(_DWORD *)(*((_DWORD *)a2 + 1) + 8) != 2 )
    {
      NxHelper::ToNxMat34(v6, (float *)a3);
      v3 = (float *)(*(int (__thiscall **)(struct NxActor *, _BYTE *))(*(_DWORD *)a2 + 40))(a2, v5);
      v6[9] = *v3;
      v6[10] = v3[1];
      v4 = *(void (__thiscall **)(struct NxActor *, float *))(*(_DWORD *)a2 + 20);
      v6[11] = v3[2];
      v4(a2, v6);
    }
  }
}
