/*
 * func-name: ?GetNumTechniques@Shader@@QAEHXZ
 * func-address: 0x101208e0
 * callers: 0x100e5360, 0x100e5d70
 * callees: none
 */

int __thiscall Shader::GetNumTechniques(Shader *this)
{
  _DWORD v2[4]; // [esp+0h] [ebp-10h] BYREF

  (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 4) + 12))(*((_DWORD *)this + 4), v2);
  return v2[2];
}
