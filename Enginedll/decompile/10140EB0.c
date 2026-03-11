/*
 * func-name: ?SetActorCollisionGroup@NxPhysics@@QAEXPAVNxActor@@W4PhysicsGroup@@@Z
 * func-address: 0x10140eb0
 * callers: 0x101416f0, 0x10141710, 0x10141bd0, 0x10141c40, 0x10141cd0, 0x10142560, 0x10142950, 0x10142c80, 0x101438a0
 * callees: none
 */

int __stdcall NxPhysics::SetActorCollisionGroup(int a1, int a2)
{
  int v3; // esi
  int result; // eax
  _DWORD *i; // edi

  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 84))(a1, a2);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 76))(a1);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 80))(a1);
  for ( i = (_DWORD *)result; v3; ++i )
  {
    --v3;
    result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*i + 8))(*i, a2);
  }
  return result;
}
