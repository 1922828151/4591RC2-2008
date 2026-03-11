/*
 * func-name: ?Set@Texture@@QAEXH@Z
 * func-address: 0x10136210
 * callers: 0x10065f10, 0x10066220, 0x10066590, 0x10067d40, 0x10068320, 0x100a0220
 * callees: 0x100971c0, 0x101189f0, 0x10137000
 */

void __thiscall Texture::Set(Texture *this, int a2)
{
  struct RenderDevice *v3; // eax
  struct TextureManager *v4; // edi
  struct RenderDevice *v5; // eax
  int v6; // ecx
  int *v7; // ebx
  unsigned int v8; // ebp
  int v9; // eax
  int v10; // esi
  int v11; // eax

  Engine::Instance();
  if ( *((_DWORD *)this + 6) == -1 )
  {
    v3 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v3 + 484))(v3, a2);
  }
  else
  {
    v4 = TextureManager::Instance();
    v5 = RenderDevice::Instance();
    v6 = *((_DWORD *)this + 1);
    v7 = (int *)*((_DWORD *)v5 + 427);
    v8 = *((_DWORD *)this + 6);
    if ( !v6 || v8 >= (*((_DWORD *)this + 2) - v6) >> 2 )
      invalid_parameter_noinfo();
    v9 = *((_DWORD *)this + 1);
    v10 = *v7;
    v11 = (*(int (__thiscall **)(struct TextureManager *, _DWORD))(*(_DWORD *)v4 + 16))(v4, *(_DWORD *)(v9 + 4 * v8));
    (*(void (__stdcall **)(int *, int, int))(v10 + 260))(v7, a2, v11);
  }
}
