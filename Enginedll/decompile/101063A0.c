/*
 * func-name: ?PostRenderFunc@PostProcess@@IAEXXZ
 * func-address: 0x101063a0
 * callers: 0x10106720, 0x10106760
 * callees: 0x101189f0
 */

void __thiscall PostProcess::PostRenderFunc(PostProcess *this)
{
  char v1; // bl
  unsigned int v2; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // [esp+10h] [ebp-4h] BYREF

  v1 = 0;
  v2 = 0;
  byte_11240DF0 = 0;
  v15 = 0;
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 17);
    if ( !v4 || v2 >= (*((_DWORD *)this + 18) - v4) >> 2 )
      break;
    v5 = *((_DWORD *)this + 17);
    if ( *(_BYTE *)(*(_DWORD *)(v5 + 4 * v2) + 15) )
      goto LABEL_13;
    if ( !v5 || v2 >= (*((_DWORD *)this + 18) - v5) >> 2 )
      invalid_parameter_noinfo();
    v6 = *((_DWORD *)this + 17);
    if ( *(_BYTE *)(*(_DWORD *)(v6 + 4 * v2) + 16) )
    {
      if ( !v6 || v2 >= (*((_DWORD *)this + 18) - v6) >> 2 )
        invalid_parameter_noinfo();
      *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 17) + 4 * v2) + 16) = 0;
LABEL_13:
      if ( !v1 )
      {
        v1 = 1;
        v7 = RenderDevice::Instance();
        (*(void (__stdcall **)(_DWORD, int, int *))(**((_DWORD **)v7 + 427) + 236))(*((_DWORD *)v7 + 427), 1, &v15);
        v8 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v8 + 364))(v8);
        v9 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v9 + 432))(v9, 27, 0);
        v10 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v10 + 432))(v10, 28, 0);
        v11 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v11 + 448))(v11, 0, 5, 1);
        v12 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v12 + 448))(v12, 0, 6, 1);
      }
      v13 = *((_DWORD *)this + 17);
      if ( !v13 || v2 >= (*((_DWORD *)this + 18) - v13) >> 2 )
        invalid_parameter_noinfo();
      v14 = *(_DWORD *)(*((_DWORD *)this + 17) + 4 * v2);
      (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 4))(v14);
    }
    ++v2;
  }
  if ( v1 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 20))(v15);
    if ( v15 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 8))(v15);
  }
}
