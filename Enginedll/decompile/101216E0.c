/*
 * func-name: ?SetMBSkinning@Shader@@QAEXHHPAUD3DXMATRIX@@0@Z
 * func-address: 0x101216e0
 * callers: 0x100f0c50, 0x100f1010, 0x100f1180, 0x10139150
 * callees: 0x101189f0, 0x101207d0, 0x10120f40
 */

void __thiscall Shader::SetMBSkinning(Shader *this, int a2, int a3, struct D3DXMATRIX *a4, struct D3DXMATRIX *a5)
{
  char *v6; // edi
  bool v7; // zf
  bool v8; // sf
  bool v9; // cc
  int v10; // edi
  bool v11; // [esp+Bh] [ebp-1h] BYREF

  v6 = (char *)this + 10608;
  *((_DWORD *)this + 2667) = &a2;
  Shader::SetVar(this, (Shader *)((char *)this + 10608));
  v7 = a2 == 0;
  v8 = a2 < 0;
  *((_DWORD *)v6 + 69) = 0;
  v11 = !v8 && !v7;
  *((_DWORD *)this + 2947) = &v11;
  Shader::SetVar(this, (Shader *)((char *)this + 11728));
  v9 = a2 <= 0;
  *((_DWORD *)this + 3001) = 0;
  if ( !v9 && *((float *)RenderDevice::Instance() + 411) >= 2.0 )
  {
    if ( *((_DWORD *)this + 2809)
      || (Shader::CreateHandle(this, (Shader *)((char *)this + 11168)), *((_DWORD *)this + 2809)) )
    {
      if ( *((_DWORD *)this + 2879)
        || (Shader::CreateHandle(this, (Shader *)((char *)this + 11448)), *((_DWORD *)this + 2879)) )
      {
        v10 = a3;
        (*(void (__stdcall **)(_DWORD, _DWORD, struct D3DXMATRIX *, int))(**((_DWORD **)this + 4) + 160))(
          *((_DWORD *)this + 4),
          *((_DWORD *)this + 2809),
          a4,
          a3);
        (*(void (__stdcall **)(_DWORD, _DWORD, struct D3DXMATRIX *, int))(**((_DWORD **)this + 4) + 160))(
          *((_DWORD *)this + 4),
          *((_DWORD *)this + 2879),
          a5,
          v10);
      }
    }
  }
}
