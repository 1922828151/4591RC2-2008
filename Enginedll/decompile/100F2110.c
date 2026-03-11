/*
 * func-name: ??4AnimationSet@@UAEXABV0@@Z
 * func-address: 0x100f2110
 * callers: none
 * callees: none
 */

int __thiscall AnimationSet::operator=(int this, int a2)
{
  int result; // eax
  int v4; // edi

  result = std::string::operator=(this + 4, a2 + 4);
  *(_BYTE *)(this + 32) = *(_BYTE *)(a2 + 32);
  *(float *)(this + 36) = *(float *)(a2 + 36);
  v4 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(this + 40) = v4;
  if ( v4 )
    return (*(int (__stdcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  return result;
}
