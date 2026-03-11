/*
 * func-name: ?GetNumShaders@ShaderManager@@QAEHXZ
 * func-address: 0x1001c1c0
 * callers: none
 * callees: none
 */

int __thiscall ShaderManager::GetNumShaders(ShaderManager *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 30);
  if ( v1 )
    return (*((_DWORD *)this + 31) - v1) >> 5;
  else
    return 0;
}
