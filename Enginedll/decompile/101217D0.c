/*
 * func-name: ?SetInstancesData@Shader@@QAEXHPAUD3DXMATRIX@@@Z
 * func-address: 0x101217d0
 * callers: 0x1005bd90
 * callees: 0x101189f0, 0x101207d0, 0x10120f40
 */

void __thiscall Shader::SetInstancesData(Shader *this, int a2, struct D3DXMATRIX *a3)
{
  char *v4; // edi
  int v5; // eax
  char v6; // [esp+Bh] [ebp-1h] BYREF

  v4 = (char *)this + 14248;
  v6 = 1;
  *((_DWORD *)this + 3577) = &v6;
  Shader::SetVar(this, (Shader *)((char *)this + 14248));
  *((_DWORD *)v4 + 69) = 0;
  if ( *((float *)RenderDevice::Instance() + 411) < 2.0 )
  {
    v5 = *((_DWORD *)this + 2809);
    if ( v5 )
      goto LABEL_7;
    Shader::CreateHandle(this, (Shader *)((char *)this + 11168));
    v5 = *((_DWORD *)this + 2809);
    if ( v5 )
      goto LABEL_7;
  }
  else
  {
    v5 = *((_DWORD *)this + 2739);
    if ( v5 || (Shader::CreateHandle(this, (Shader *)((char *)this + 10888)), (v5 = *((_DWORD *)this + 2739)) != 0) )
LABEL_7:
      (*(void (__stdcall **)(_DWORD, int, struct D3DXMATRIX *, int))(**((_DWORD **)this + 4) + 160))(
        *((_DWORD *)this + 4),
        v5,
        a3,
        a2);
  }
}
