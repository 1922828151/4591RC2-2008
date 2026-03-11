/*
 * func-name: ?UnSet@Texture@@QAEXH@Z
 * func-address: 0x10136110
 * callers: 0x100a0220
 * callees: 0x100971c0, 0x101189f0
 */

void __thiscall Texture::UnSet(Texture *this, int a2)
{
  struct RenderDevice *v2; // eax

  Engine::Instance();
  v2 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, int, _DWORD))(**((_DWORD **)v2 + 427) + 260))(*((_DWORD *)v2 + 427), a2, 0);
}
