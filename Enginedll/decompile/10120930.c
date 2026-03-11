/*
 * func-name: ?SetNonInstancedData@Shader@@QAEXPAUD3DXMATRIX@@@Z
 * func-address: 0x10120930
 * callers: 0x1005cb50
 * callees: 0x101189f0, 0x101207d0
 */

void __thiscall Shader::SetNonInstancedData(Shader *this, struct D3DXMATRIX *a2)
{
  int v3; // eax

  if ( *((float *)RenderDevice::Instance() + 411) < 2.0 )
  {
    v3 = *((_DWORD *)this + 2809);
    if ( v3 )
      goto LABEL_7;
    Shader::CreateHandle(this, (Shader *)((char *)this + 11168));
    v3 = *((_DWORD *)this + 2809);
    if ( v3 )
      goto LABEL_7;
  }
  else
  {
    v3 = *((_DWORD *)this + 2739);
    if ( v3 || (Shader::CreateHandle(this, (Shader *)((char *)this + 10888)), (v3 = *((_DWORD *)this + 2739)) != 0) )
LABEL_7:
      (*(void (__stdcall **)(_DWORD, int, struct D3DXMATRIX *, int))(**((_DWORD **)this + 4) + 160))(
        *((_DWORD *)this + 4),
        v3,
        a2,
        1);
  }
}
