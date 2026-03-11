/*
 * func-name: ?UpdateDynamicPRT@World@@QAEXPAVMesh@@AAVMatrix@@AAV?$vector@PAVLight@@V?$allocator@PAVLight@@@std@@@std@@@Z
 * func-address: 0x101177c0
 * callers: 0x1005cb50
 * callees: 0x10116ff0
 */

int __thiscall World::UpdateDynamicPRT(void *this, int a2, const void *a3, _DWORD *a4)
{
  int result; // eax
  int v6; // esi
  int v7; // edi
  char v8[144]; // [esp+8h] [ebp-1B0h] BYREF
  _BYTE v9[144]; // [esp+98h] [ebp-120h] BYREF
  _BYTE v10[144]; // [esp+128h] [ebp-90h] BYREF

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 16))(a2);
  v6 = result;
  if ( result )
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)result + 36))(result);
    World::CalculatePRTSum((int)this, v8, v7, a4, a3);
    return (*(int (__thiscall **)(int, char *, _BYTE *, _BYTE *, int))(*(_DWORD *)v6 + 8))(v6, v8, v9, v10, v7 * v7);
  }
  return result;
}
