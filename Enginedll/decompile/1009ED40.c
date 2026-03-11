/*
 * func-name: ?SetMesh@ModelFrame@@QAEXPAVMesh@@_N@Z
 * func-address: 0x1009ed40
 * callers: 0x10035930, 0x1003d0f0, 0x1007c450, 0x1007d280, 0x10082810, 0x100ea5d0, 0x10166120
 * callees: 0x1007e190, 0x100e1d90, 0x100e1e90, 0x101189f0
 */

void __thiscall ModelFrame::SetMesh(ModelFrame *this, struct Mesh *a2, bool a3)
{
  unsigned int v4; // edi
  bool v5; // bl
  int v6; // ecx
  struct RenderDevice *v7; // eax
  int v8; // ecx
  struct RenderDevice *v9; // ebp
  int v10; // ecx
  int v11; // ecx
  int v12; // [esp-Ch] [ebp-14h]

  v4 = 0;
  if ( *((int *)this + 10) > 0 )
  {
    v5 = a3;
    do
    {
      v6 = *((_DWORD *)this + 1);
      if ( !v6 || v4 >= (*((_DWORD *)this + 2) - v6) >> 2 )
        invalid_parameter_noinfo();
      if ( *(struct Mesh **)(*((_DWORD *)this + 1) + 4 * v4) != a2 && v5 )
      {
        v7 = RenderDevice::Instance();
        v8 = *((_DWORD *)this + 1);
        v9 = v7;
        if ( !v8 || v4 >= (*((_DWORD *)this + 2) - v8) >> 2 )
          invalid_parameter_noinfo();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v9 + 12))(
          v9,
          *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v4));
      }
      ++v4;
    }
    while ( (signed int)v4 < *((_DWORD *)this + 10) );
  }
  v10 = *((_DWORD *)this + 1);
  if ( v10 && (*((_DWORD *)this + 2) - v10) >> 2 )
    **((_DWORD **)this + 1) = a2;
  else
    sub_1007E190(this, (int *)&a2);
  if ( !*((_BYTE *)this + 16) )
  {
    v12 = *((_DWORD *)this + 91);
    LODManager::Instance();
    LODManager::GenerateLODs(v12, this, this);
  }
  v11 = *((_DWORD *)this + 1);
  if ( v11 )
    *((_DWORD *)this + 10) = (*((_DWORD *)this + 2) - v11) >> 2;
  else
    *((_DWORD *)this + 10) = 0;
}
