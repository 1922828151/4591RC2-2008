/*
 * func-name: ?Release@Shader@@QAEKXZ
 * func-address: 0x10124ed0
 * callers: 0x100e4420, 0x100e68a0
 * callees: 0x10123eb0, 0x101a2500
 */

unsigned int __thiscall Shader::Release(Shader *this)
{
  int v2; // eax
  unsigned int result; // eax

  v2 = *((_DWORD *)this + 1);
  if ( v2 == 1 )
  {
    Shader::~Shader(this);
    operator delete(this);
    return 0;
  }
  else
  {
    result = v2 - 1;
    *((_DWORD *)this + 1) = result;
  }
  return result;
}
