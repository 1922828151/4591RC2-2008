/*
 * func-name: ?SetSkinning@Shader@@QAEXHHPAUD3DXMATRIX@@@Z
 * func-address: 0x101215e0
 * callers: 0x10059880, 0x1005bd90, 0x101280a0
 * callees: 0x101189f0, 0x101207d0, 0x10120f40
 */

void __thiscall Shader::SetSkinning(Shader *this, int a2, int a3, struct D3DXMATRIX *a4)
{
  char *v5; // edi
  bool v6; // zf
  bool v7; // sf
  bool v8; // cc
  int v9; // eax
  bool v10; // [esp+Bh] [ebp-1h] BYREF

  v5 = (char *)this + 10608;
  *((_DWORD *)this + 2667) = &a2;
  Shader::SetVar(this, (Shader *)((char *)this + 10608));
  v6 = a2 == 0;
  v7 = a2 < 0;
  *((_DWORD *)v5 + 69) = 0;
  v10 = !v7 && !v6;
  *((_DWORD *)this + 2947) = &v10;
  Shader::SetVar(this, (Shader *)((char *)this + 11728));
  v8 = a2 <= 0;
  *((_DWORD *)this + 3001) = 0;
  if ( !v8 )
  {
    if ( *((float *)RenderDevice::Instance() + 411) < 2.0 )
    {
      v9 = *((_DWORD *)this + 2809);
      if ( v9 )
        goto LABEL_8;
      Shader::CreateHandle(this, (Shader *)((char *)this + 11168));
      v9 = *((_DWORD *)this + 2809);
      if ( v9 )
        goto LABEL_8;
    }
    else
    {
      v9 = *((_DWORD *)this + 2739);
      if ( v9 || (Shader::CreateHandle(this, (Shader *)((char *)this + 10888)), (v9 = *((_DWORD *)this + 2739)) != 0) )
LABEL_8:
        (*(void (__stdcall **)(_DWORD, int, struct D3DXMATRIX *, int))(**((_DWORD **)this + 4) + 160))(
          *((_DWORD *)this + 4),
          v9,
          a4,
          a3);
    }
  }
}
